#ifndef M2C_DEFINES
#define M2C_DEFINES
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
extern s32 D_80136AD0_ovl_01;
s32 func_800AF96C_ovl_01(void *arg0, u32 *arg1)
{
  int __repair_literal;
  int __repair_constant = 0xB;
  s32 var_a1_2;
  char *var_v1_2;
  s32 *new_var3;
  char *var_v1_4;
  s32 *new_var4;
  u16 temp_a0_2;
  u16 temp_a0_3;
  u32 temp_a0;
  u32 temp_a1;
  unsigned int new_var2;
  u32 temp_lo;
  u32 temp_lo_2;
  u32 temp_lo_3;
  u32 temp_v1;
  u32 var_a0_2;
  u8 new_var5;
  u32 var_v1;
  short new_var;
  u32 var_v1_3;
  temp_a1 = *((u32 *) (((char *) arg0) + 0x5C));
  temp_a0 = (((u32) (*arg1)) >> 8) & 0xFFFF;
  temp_v1 = temp_a1 & 0xFFFFFF;
  if (temp_v1 == temp_a0)
  {
    *((s16 *) (((char *) arg0) + 0x50)) = (s16) (temp_a1 >> 0x18);
    *((s8 *) (((char *) arg0) + 0xC0)) = 0;
  }
  else
    if (temp_v1 < temp_a0)
  {
    temp_lo = ((u32) (temp_a0 << 0xC)) / temp_v1;
    var_v1 = 1;
    temp_a0 = 0;
    loop_6:
    if ((((u32) (temp_lo >> 0xC)) >> var_v1) != 0)
    {
      new_var2 = 0xBU;
      temp_a0 = var_v1;
      var_v1 = temp_a0 + 1;
      do
      {
        if (var_v1 < new_var2)
        {
          goto loop_6;
        }
      }
      while (0);
    }

    temp_a0_2 = __repair_constant;
    new_var4 = &D_80136AD0_ovl_01;
    new_var3 = new_var4;
    var_v1_2 = (char *) new_var3;
    var_v1_2 += (s32) 0x16;
    temp_lo_2 = temp_lo / ((u32) (1 << temp_a0));
    loop_9:
    var_v1_2 = var_v1_2 - 2;

    if ((((u16) (*((u16 *) var_v1_2))) + 1) > temp_lo_2)
    {
      temp_a0_2 -= 1;
      goto loop_9;
    }
    new_var = ((new_var5 = (u8) (*((u32 *) (((char *) arg0) + 0x5C)))) + (temp_a0 * 0xC)) + temp_a0_2;
    *((s16 *) (((char *) arg0) + 0x50)) = (s16) new_var;
    temp_a0_2 = *((temp_a0_2 * 2) + new_var3);
    __repair_literal = 2;
    *((s8 *) (((char *) arg0) + 0xC0)) = (s8) (((u32) ((temp_lo_2 - temp_a0_2) * (temp_lo_2 = 0x64))) / ((u32) ((*(((temp_a0_2 + 1) * __repair_literal) + (&D_80136AD0_ovl_01))) - temp_a0_2)));
  }
  else
  {
    temp_lo_3 = ((u32) (temp_v1 << 0xC)) / temp_a0;
    var_a0_2 = 0;
    var_v1_3 = 1;
    loop_13:
    if ((((u32) (temp_lo_3 >> 0xC)) >> var_v1_3) != 0)
    {
      do
      {
        var_a0_2 = var_v1_3;
        var_v1_3 = var_a0_2 + 1;
        if (var_v1_3 < new_var2)
        {
          goto loop_13;
        }
      }
      while (0);
    }

    var_a1_2 = __repair_constant;
    var_v1_4 = (&D_80136AD0_ovl_01) + 0x16;
    temp_a0 = temp_lo_3 / ((u32) (1 << var_a0_2));
    loop_16:
    var_v1_4 -= 2;

    if (((u16) (*((u16 *) var_v1_4))) >= temp_a0)
    {
      var_a1_2 -= 1;
      goto loop_16;
    }
    *((s16 *) (((char *) arg0) + 0x50)) = (s16) ((new_var5 - (var_a0_2 * 0xC)) - var_a1_2);
    temp_a0_3 = *((var_a1_2 * 2) + new_var3);
    *((s8 *) (((char *) arg0) + 0xC0)) = (s8) (-((s8) (((u32) ((temp_a0 - temp_a0_3) * 0x64)) / ((u32) ((*(((var_a1_2 + 1) * 2) + (&D_80136AD0_ovl_01))) - temp_a0_3)))));
  }
  *((s32 *) (((char *) arg0) + 0x24)) = (s32) ((*((s32 *) (((char *) arg0) + 0x24))) | 0x100);
  return 0;
}

