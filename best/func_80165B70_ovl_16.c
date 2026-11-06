s32 func_80032F24_ovl_01();
s32 func_80077D48_ovl_01();
s32 func_80083800_ovl_01();
s32 func_8008A974_ovl_01();
s32 func_80162B24_overlay_016();
s32 func_80165A04_overlay_016();
extern s32 D_80167368_overlay_016;
void func_80165B70_ovl_16(void *arg0, s32 arg1, s32 arg2)
{
  void **new_var;
  int __repair_literal;
  unsigned short new_var3;
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
      new_var2 = 0;
      if (temp_v1 != new_var2)
      {
        return;
      }
      func_80077D48_ovl_01(7);
      func_80162B24_overlay_016(arg0, ((*((u8 *) (((char *) arg0) + 0x2CB))) * 8) + (&D_80167368_overlay_016), 1);
      *((s16 *) (((char *) arg0) + 0x1E0)) = 0x64;
      *((s16 *) (((char *) arg0) + 0x1E4)) = new_var2;
      new_var = (void **) (((char *) arg0) + 0x2C4);
      *((s16 *) (((char *) arg0) + 0x1E2)) = new_var2;
      func_80032F24_ovl_01(arg0, *((s16 *) (((char *) (*new_var)) + 0x66)));
      *((s32 *) (((char *) arg0) + 0x1E8)) = 0x08000300;
      *((u8 *) (((char *) arg0) + 7)) = 1U;
      *((u16 *) (((char *) arg0) + 0x2C8)) = (u16) ((*((u16 *) (((char *) arg0) + 0x2C8))) & 0xFFFD);
      goto block_21;
    }
    goto block_21;
  }
  temp_v1_2 = *((u8 *) (((char *) arg0) + 7));
  if (temp_v1_2 != 1)
  {
    if (((s32) temp_v1_2) >= 2)
    {
      if (temp_v1_2 != 2)
      {
        return;
      }
      if ((*((s16 *) (((char *) arg0) + 0x1F2))) >= new_var2)
      {
        block_25:
        func_80165A04_overlay_016(arg0);

        return;
      }
      *((s32 *) (((char *) arg0) + 4)) = 0x03000000;
      return;
    }
    if (temp_v1_2 != new_var2)
    {
      return;
    }
    func_80077D48_ovl_01(7, arg0);
    func_80162B24_overlay_016(arg0, ((*((u8 *) (((char *) arg0) + 0x2CB))) * 8) + (&D_80167368_overlay_016));
    new_var3 = *((u16 *) (((char *) arg0) + 0x2C8));
    *((s16 *) (((char *) arg0) + 0x1E0)) = 0x64;
    *((s16 *) (((char *) arg0) + 0x1E4)) = new_var2;
    *((s16 *) (((char *) arg0) + 0x1E2)) = new_var2;
    func_80032F24_ovl_01(arg0, (s16) (((u16) (*((s16 *) (((char *) (*((void **) (((char *) arg0) + 0x2C4)))) + 0x66)))) + 0x800), 0x80);
    *((s32 *) (((char *) arg0) + 0x1E8)) = 0x08000300;
    *((u8 *) (((char *) arg0) + 7)) = 1U;
    goto block_21;
    *((u16 *) (((char *) arg0) + 0x2C8)) = (u16) (new_var3 & 0xFFFD);
  }
  block_21:
  if ((*((s16 *) (((char *) arg0) + 0x1E0))) > new_var2)
  {
    *((s16 *) (((char *) arg0) + 0x1E0)) = (s16) (((u16) (*((s16 *) (((char *) arg0) + 0x1E0)))) - 6);
  }

  func_80083800_ovl_01(*((s16 *) (((char *) (*((void **) (((char *) arg0) + 0x2C4)))) + 0x66)), arg0 + 0x1E0, &m2c_initial_frame.view_sp10.value);
  *((s32 *) (((char *) arg0) + 0x28)) = (s32) ((*((s32 *) (((char *) arg0) + 0x28))) + m2c_initial_frame.view_sp10.value);
  *((s32 *) (((char *) arg0) + 0x30)) = (s32) ((*((s32 *) (((char *) arg0) + 0x30))) + m2c_initial_frame.view_sp14.value);
  *((u8 *) (((char *) arg0) + 7)) = (u8) ((*((u8 *) (((char *) arg0) + 7))) + func_8008A974_ovl_01(arg0, arg1));
}

