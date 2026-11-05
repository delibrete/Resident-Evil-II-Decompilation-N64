extern s32 D_80119ECC_ovl_01;
void func_80075F28_ovl_01(void)
{
  int new_var;
  void *var_v1;
  s32 var_a0;
  var_a0 = 0x18;
  do
  {
    var_a0 -= 1;
  }
  while (var_a0 != 0);
  var_a0 = 0x18;
  var_v1 = ((&D_80119ECC_ovl_01) + 0x360) - 0x24;
  new_var = 0x24;
  do
  {
    var_a0 -= 1;
    if (((*((s16 *) (((char *) var_v1) + 4))) != 4) || ((*((u8 *) (((char *) var_v1) + 1))) != 3))
    {
      *((s8 *) (((char *) var_v1) + 0)) = 0;
      *((s16 *) (((char *) var_v1) + 0x12)) = 0;
    }
    var_v1 -= new_var;
  }
  while (var_a0 != 0);
}

