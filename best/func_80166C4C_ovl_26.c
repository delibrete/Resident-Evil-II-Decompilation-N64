s32 func_80166C4C_ovl_26(u8 *arg0, s32 arg1)
{
  if ((arg0[0xE] >> arg1) & 1)
  {
    arg0[0xD] = 0xC2;
    arg0[0xF] = arg1;
    arg0[0xE] &= ~(1 << arg1);
    return 0;
  }
  return 1;
}

