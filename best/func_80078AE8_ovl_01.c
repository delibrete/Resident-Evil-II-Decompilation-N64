extern u8 D_80119DF0_ovl_01;
s32 func_80078AE8_ovl_01(s32 arg0)
{
  u8 *var_v1;
  if (D_80119DF0_ovl_01 != 0xFF)
  {
    var_v1 = &D_80119DF0_ovl_01;
    loop_2:
    var_v1 += 1;

    if ((*var_v1) == arg0)
    {
      return 1;
    }
    if ((*var_v1) == 0xFF)
    {
    }
    goto loop_2;
    return 0;
  }
  return 0;
}

