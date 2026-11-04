s32 func_800837DC_ovl_01(s32 *, u8);
extern s32 D_800C7650_ovl_01;
extern s32 D_800E8D18_ovl_01;
extern s32 D_800FA63C_ovl_01;
extern s32 D_800FAB38_ovl_01;
extern s32 D_800FAC50_ovl_01;
extern s32 D_800FB398_ovl_01;
extern s32 D_8012FF48_ovl_01;
void *func_8004BB08_ovl_01(s8 arg0)
{
  int __repair_literal;
  s32 var_v0_2;
  s32 *var_v0;
  u16 var_v1;
  int new_var;
  u32 temp_a0;
  u8 var_s0;
  var_s0 = 0;
  new_var = 2;
  temp_a0 = arg0 & 0xFF;
  if (temp_a0 < 0x64U)
  {
    var_s0 = *((u8 *) (((char *) ((temp_a0 * 8) + (&D_8012FF48_ovl_01))) + 1));
  }
  if ((*((s32 *) (((char *) (&D_800C7650_ovl_01)) + 0x19A3C))) & 0x40)
  {
    if ((var_s0 != 0) && (func_800837DC_ovl_01(&D_800E8D18_ovl_01, var_s0) != 0))
    {
      __repair_literal = 2;
      var_v1 = *(((var_s0 + 0x91) * __repair_literal) + (&D_800FB398_ovl_01));
      var_v0 = &D_800FAC50_ovl_01;
    }
    else
    {
      var_v1 = *(((arg0 & 0xFF) * 2) + (&D_800FB398_ovl_01));
      var_v0 = &D_800FAC50_ovl_01;
    }
  }
  else
  {
    if ((var_s0 != 0) && (func_800837DC_ovl_01(&D_800E8D18_ovl_01, var_s0) != 0))
    {
      var_v0_2 = var_s0 + 0x91;
    }
    else
    {
      var_v0_2 = arg0 & 0xFF;
    }
    var_v1 = *((var_v0_2 * new_var) + (&D_800FAB38_ovl_01));
    var_v0 = &D_800FA63C_ovl_01;
  }
  return var_v1 + var_v0;
}

