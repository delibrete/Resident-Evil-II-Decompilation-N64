extern s32 D_80158AC0;
extern s32 D_8015AF10;
inline static int inline_fn(s32 arg0)
{
  return arg0 == 0;
}

s32 func_800B35E0_ovl_01(s32 arg0)
{
  s32 *var_a0;
  int new_var;
  s32 temp_v1;
  s32 __repair_subtotal;
  u32 var_v1;
  void *temp_a0;
  loop_1:
  var_v1 = 0;

  var_a0 = &D_80158AC0;
  temp_v1 = *((u8 *) (((char *) var_a0) + 0x1200));
  loop_2:
  if ((inline_fn(temp_v1) || (var_v1 == arg0)) || ((*((s32 *) (((char *) var_a0) + 0x1224))) != D_8015AF10))
  {
    do
    {
      var_v1 = var_v1 + 1;
    }
    while (0);
    var_a0 += 0x1228;
    if ((var_v1 + 1) > 2U)
    {
    }
    else
    {
      goto loop_2;
    }
  }

  if (((unsigned long long) var_v1) != 2)
  {
    temp_v1 = D_8015AF10;
    __repair_subtotal = 1;
    new_var = __repair_subtotal + temp_v1;
    D_8015AF10 = new_var;
    if (new_var == (-1))
    {
      D_8015AF10 = 0;
    }
    goto loop_1;
  }
  temp_a0 = (char *) (arg0 * 0x1228);
  temp_a0 += (s32) (&D_80158AC0);
  new_var = D_8015AF10;
  new_var += 1;
  *((s32 *) (((char *) temp_a0) + 0x1224)) = (s32) D_8015AF10;
  temp_v1 = new_var;
  D_8015AF10 = temp_v1;
  if (temp_v1 == (-1))
  {
    D_8015AF10 = 0;
  }
  return *((s32 *) (((char *) temp_a0) + 0x1224));
}

