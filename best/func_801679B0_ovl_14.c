#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif
s32 func_80032F24_ovl_01();
s32 func_80077D48_ovl_01();
s32 func_80083800_ovl_01();
s32 func_8008A974_ovl_01();
s32 func_80162B24_overlay_014();
s32 func_80166BFC_overlay_014();
extern s32 D_80168B74_overlay_014;
void func_801679B0_ovl_14(void *arg0, s32 arg1, s32 arg2)
{
  int __repair_literal;
  union 
  {
    unsigned char bytes[48];
    struct 
    {
      unsigned char pad[16];
      s16 value;
    } view_sp10;
    struct 
    {
      unsigned char pad[20];
      s16 value;
    } view_sp14;
  } m2c_initial_frame;
  u8 temp_v1;
  u8 temp_v1_2;
  s16 *new_var;
  volatile unsigned long new_var2;
  if ((*((u16 *) (((char *) arg0) + 0x26C))) & 0x20)
  {
    temp_v1 = *((u8 *) (((char *) arg0) + 7));
    if (temp_v1 != 1)
    {
      __repair_literal = 2;
      if (((s32) temp_v1) >= __repair_literal)
      {
        if (temp_v1 != 2)
        {
          return;
        }
        if ((*((s16 *) (((char *) arg0) + 0x1F2))) < 0)
        {
          *((s32 *) (((char *) arg0) + 4)) = 0x03000000;
          return;
        }
        goto block_25;
      }
      if (temp_v1 != 0)
      {
        return;
      }
      func_80077D48_ovl_01(7, arg0);
      func_80162B24_overlay_014(arg0, ((*((u8 *) (((char *) arg0) + 0x2CB))) * 8) + (&D_80168B74_overlay_014), 1);
      *((s16 *) (((char *) arg0) + 0x1E0)) = 0x64;
      *((s16 *) (((char *) arg0) + 0x1E4)) = 0;
      *((s16 *) (((char *) arg0) + 0x1E2)) = 0;
      func_80032F24_ovl_01(arg0, *((s16 *) (((char *) (*((void **) (((char *) arg0) + 0x2C4)))) + 0x66)));
      new_var2 = *((u16 *) (((char *) arg0) + 0x2C8));
      *((s32 *) (((char *) arg0) + 0x1E8)) = 0x08000300;
      *((u8 *) (((char *) arg0) + 7)) = 1U;
      *((u16 *) (((char *) arg0) + 0x2C8)) = (u16) (new_var2 & 0xFFFD);
      goto block_21;
    }
    goto block_21;
  }
  new_var = &(*((s16 *) (((char *) (*((void **) (((char *) arg0) + 0x2C4)))) + 0x66)));
  temp_v1_2 = *((u8 *) (((char *) arg0) + 7));
  if (temp_v1_2 != 1)
  {
    if (((s32) temp_v1_2) >= 2)
    {
      if (temp_v1_2 != 2)
      {
        return;
      }
      if ((*((s16 *) (((char *) arg0) + 0x1F2))) >= 0)
      {
        block_25:
        func_80166BFC_overlay_014(arg0);

        return;
      }
      *((s32 *) (((char *) arg0) + 4)) = 0x03000000;
      return;
    }
    if (temp_v1_2 != 0)
    {
      return;
    }
    func_80077D48_ovl_01(7, arg0);
    func_80162B24_overlay_014(arg0, ((*((u8 *) (((char *) arg0) + 0x2CB))) * 8) + (&D_80168B74_overlay_014), 0);
    *((s16 *) (((char *) arg0) + 0x1E0)) = 0x64;
    *((s16 *) (((char *) arg0) + 0x1E4)) = 0;
    *((s16 *) (((char *) arg0) + 0x1E2)) = 0;
    func_80032F24_ovl_01(arg0, (s16) (((u16) (*new_var)) + 0x800), 0x80);
    *((s32 *) (((char *) arg0) + 0x1E8)) = 0x08000300;
    *((u8 *) (((char *) arg0) + 7)) = 1U;
    *((u16 *) (((char *) arg0) + 0x2C8)) = (u16) (new_var2 & 0xFFFD);
    goto block_21;
  }
  block_21:
  if ((*((s16 *) (((char *) arg0) + 0x1E0))) > 0)
  {
    *((s16 *) (((char *) arg0) + 0x1E0)) = (s16) (((u16) (*((s16 *) (((char *) arg0) + 0x1E0)))) - 6);
  }

  func_80083800_ovl_01(*new_var, arg0 + 0x1E0, &m2c_initial_frame.view_sp10.value);
  *((s32 *) (((char *) arg0) + 0x28)) = (s32) ((*((s32 *) (((char *) arg0) + 0x28))) + m2c_initial_frame.view_sp10.value);
  *((s32 *) (((char *) arg0) + 0x30)) = (s32) ((*((s32 *) (((char *) arg0) + 0x30))) + m2c_initial_frame.view_sp14.value);
  *((u8 *) (((char *) arg0) + 7)) = (u8) ((*((u8 *) (((char *) arg0) + 7))) + func_8008A974_ovl_01(arg0, arg1));
}

