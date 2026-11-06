extern s32 *D_8010B688_ovl_01;
extern s32 *D_8010B68C_ovl_01;
extern s32 D_80113790_ovl_01;
extern s32 D_80113794_ovl_01;
void func_80082410_ovl_01(void)
{
  s32 *var_v1;
  int new_var;
  s32 *var_v1_2;
  s32 var_a0;
  s32 var_a0_2;
  var_v1 = D_8010B688_ovl_01;
  new_var = -1;
  var_a0 = (((u32) (D_80113790_ovl_01 * D_80113794_ovl_01)) >> 1) - 1;
  if (var_a0 != (-1))
  {
    do
    {
      *var_v1 = 0;
      var_a0 -= 1;
      var_v1 += 4;
    }
    while (var_a0 != new_var);
  }
  if (D_8010B68C_ovl_01 != NULL)
  {
    var_a0_2 = (((u32) (D_80113790_ovl_01 * D_80113794_ovl_01)) >> 1) - 1;
    var_v1_2 = D_8010B68C_ovl_01;
    if (var_a0_2 != new_var)
    {
      do
      {
        *var_v1_2 = 0;
        var_a0_2 -= 1;
        var_v1_2 += 4;
      }
      while (var_a0_2 != (-1));
    }
  }
}

