extern s32 D_8014DFE0;
extern s32 D_8014E060;
u8 func_800AC71C_ovl_01(s32 arg0, s32 arg1)
{
  int new_var;
  int __repair_literal;
  s32 temp_a0;
  temp_a0 = arg1;
  if (temp_a0 == 0xFF)
  {
    new_var = 0xFF;
    return *((arg0 & new_var) + (&D_8014E060));
  }
  __repair_literal = 0x10;
  return *(((arg0 & 0xFF) + (temp_a0 * __repair_literal)) + (&D_8014DFE0));
}

