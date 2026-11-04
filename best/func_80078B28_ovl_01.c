extern u8 D_80119DFC_ovl_01;
s32 func_80078B28_ovl_01(s32 arg0)
{
  u8 *var_v1;
  char new_var;
  if (D_80119DFC_ovl_01 != 0xFF)
  {
    var_v1 = &D_80119DFC_ovl_01;
    loop_2:
    var_v1 += 1;

    new_var = *var_v1;
    if (new_var == arg0)
    {
      return 1;
    }
    if (new_var == 0xFF)
    {
      return 0;
    }
    goto loop_2;
  }
  return 0;
}

