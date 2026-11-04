s32 func_80004CFC();
extern char D_800B9E6C_ovl_01[];
extern u16 D_8012BE60_ovl_01;
s32 func_8008D2C4_ovl_01(s32 arg0)
{
  s32 temp_s0;
  s32 temp_s0_2;
  s32 var_s2;
  s32 var_v0;
  char *var_s1;
  u16 temp_a0;
  var_s2 = 0;
  var_s1 = &D_8012BE60_ovl_01;
  temp_s0 = arg0 + 7;
  do
  {
    temp_s0_2 = ~7;
    temp_s0_2 = temp_s0 & temp_s0_2;
    temp_a0 = *((u16 *) var_s1);
    var_s1 += 2;
    var_s2 += 1;
    do
    {
      temp_s0 = temp_s0_2;
      temp_s0 = temp_s0 + func_80004CFC(arg0, temp_a0);
    }
    while (0);
    var_v0 = temp_s0 + 7;
  }
  while ((var_s2 - 1) < (0x6A - 1));
  return temp_s0;
}

