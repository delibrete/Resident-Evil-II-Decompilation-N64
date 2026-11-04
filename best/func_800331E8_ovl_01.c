extern s32 D_800C7650_ovl_01;
extern s32 D_8010C214_ovl_01;
s32 func_800331E8_ovl_01(void)
{
  s32 *new_var2;
  int new_var;
  new_var2 = (s32 *) (((char *) (&D_800C7650_ovl_01)) + 0x18268);
  new_var = ((*new_var2) & 0x34F) || (D_8010C214_ovl_01 & 0xF000);
  new_var = ((*new_var2) & 0x34F) || (D_8010C214_ovl_01 & 0xF000);
  if (new_var)
  {
    return 1;
  }
  return 0;
}

