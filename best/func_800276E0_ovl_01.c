s32 func_80043650_ovl_01();
s32 func_80046FC8_ovl_01(s32, u16 *);
extern s32 D_800C7650_ovl_01;
extern s32 D_800DF650_ovl_01;
extern u16 D_800E903C_ovl_01;
extern s32 D_800E9118_ovl_01;
extern u16 D_800E9128_ovl_01;
extern u8 D_800E91E1_ovl_01;
void func_800276E0_ovl_01(void)
{
  s32 temp_a0;
  s32 temp_v0_2;
  
  u16 *var_s0;
  u16 *var_s1;
  u16 temp_v0;
  var_s1 = &D_800E9128_ovl_01;
  func_80043650_ovl_01();
  temp_v0_2 = 4;
  var_s0 = (&D_800E9128_ovl_01) + 0xC;
  do
  {
    temp_v0 = *var_s1;
    if (!(temp_v0 & 0x8000))
    {
      temp_a0 = ((s32) (temp_v0 << 0x10)) >> 0x17;
      if ((*((u8 *) (((char *) var_s0) + (-8)))) == 1)
      {
        *((s8 *) (((char *) var_s0) + 4)) = (s8) ((*((u8 *) (((char *) var_s0) + (-7)))) & temp_a0);
        *((s8 *) (((char *) var_s0) + 6)) = (s8) ((*((u8 *) (((char *) var_s0) + (-5)))) & temp_a0);
        *((s8 *) (((char *) var_s0) + 5)) = (s8) ((*((u8 *) (((char *) var_s0) + (-6)))) & temp_a0);
      }
      else
        if (temp_a0 || D_800E91E1_ovl_01)
      {
        *((s8 *) (((char *) var_s0) + 6)) = 0;
        *((s8 *) (((char *) var_s0) + 5)) = 0;
        *((s8 *) (((char *) var_s0) + 4)) = 0;
      }
      else
      {
        *((s8 *) (((char *) var_s0) + 6)) = 0;
        *((s8 *) (((char *) var_s0) + 5)) = 0;
        *((s8 *) (((char *) var_s0) + 4)) = 0;
      }
      *((u8 *) (((char *) var_s0) + 7)) = (u8) (((u16) (*var_s1)) >> 7);
      *var_s1 += *((u16 *) (((char *) var_s0) + (-0xA)));
      if (((*((u8 *) (((char *) var_s0) + 7))) != 0) && ((*((u8 *) (((char *) ((&D_800E9128_ovl_01) - 0x10)) + 0xC8))) != 5))
      {
        *((s32 *) (((char *) (&D_800DF650_ovl_01)) + 0x208)) = func_80046FC8_ovl_01(*((s32 *) (((char *) (&D_800DF650_ovl_01)) + 0x208)), var_s0);
      }
    }
    var_s0 += 0x2C;
    temp_v0_2 -= 1;
    var_s1 += 0x2C;
  }
  while (temp_v0_2 > 0);
  if ((*((s32 *) (((char *) (&D_800C7650_ovl_01)) + 0x19A5C))) & 0x10)
  {
    if (((u8) (*((u8 *) (((char *) (&D_800E9118_ovl_01)) + 0xC9)))) < 0xF0U)
    {
      *((u8 *) (((char *) (&D_800E9118_ovl_01)) + 0xC9)) = (u8) ((*((u8 *) (((char *) (&D_800E9118_ovl_01)) + 0xC9))) + 0x10);
    }
  }
  else
    if (((u8) (*((u8 *) (((char *) (&D_800E9118_ovl_01)) + 0xC9)))) >= 0x10U)
  {
    *((u8 *) (((char *) (&D_800E9118_ovl_01)) + 0xC9)) = (u8) ((*((u8 *) (((char *) (&D_800E9118_ovl_01)) + 0xC9))) - 0x10);
  }
  *((u8 *) (((char *) (&D_800E903C_ovl_01)) + 0x27)) = (u8) D_800E91E1_ovl_01;
  *((u8 *) (((char *) (&D_800E903C_ovl_01)) + 7)) = (u8) D_800E91E1_ovl_01;
  if ((!((*((s32 *) (((char *) (&D_800C7650_ovl_01)) + 0x19A3C))) & 0x4000)) && (D_800E91E1_ovl_01 & 0xFF))
  {
    temp_v0_2 = func_80046FC8_ovl_01(*((s32 *) (((char *) (&D_800C7650_ovl_01)) + 0x18208)), &D_800E903C_ovl_01);
    *((s32 *) (((char *) (&D_800C7650_ovl_01)) + 0x18208)) = temp_v0_2;
    *((s32 *) (((char *) (&D_800C7650_ovl_01)) + 0x18208)) = func_80046FC8_ovl_01(temp_v0_2, (&D_800E903C_ovl_01) + 0x20);
  }
}

