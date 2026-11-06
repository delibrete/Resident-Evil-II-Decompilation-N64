extern u8 D_80147A40[];
s32 func_800A8304_ovl_01(s32 arg0)
{
  u8 *new_var;
  u8 *p;
  s32 *new_var2;
  p = D_80147A40;
  p += (4 * (arg0 & 0xFF)) * 10;
  new_var = p;
  p = (u8 *) (new_var + 0x14);
  if ((*p) == 4)
  {
    goto decomp_shared_return;
  }
  new_var2 = &(*((s32 *) (new_var + 8)));
  if ((*((s32 *) (new_var + 0xC))) == 0)
  {
    return 0;
  }
  if ((*new_var2) < 0)
  {
    return 1;
  }
  decomp_shared_return:
  return 0;

}

