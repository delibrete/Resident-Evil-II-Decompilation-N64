extern s32 D_800C7650_ovl_01;
extern s32 D_800E10D0_ovl_01;
void func_801677B0_ovl_17(s32 arg0, s32 arg1)
{
  s32 *var_a0;
  if (arg0 != 0)
  {
    var_a0 = *((s32 **) (((char *) (&D_800C7650_ovl_01)) + 0x19D3C));
    *((s8 *) (((char *) var_a0) + 4)) = 2;
  }
  else
  {
    var_a0 = &D_800E10D0_ovl_01;
  }
  *((s8 *) (((char *) var_a0) + 5)) = (s8) (arg1 + 2);
  *((s8 *) (((char *) var_a0) + 6)) = 0;
  *((s8 *) (((char *) var_a0) + 7)) = 0;
  *((u8 *) (((char *) var_a0) + 0x26F)) = (u8) ((*((u8 *) (((char *) var_a0) + 0x26F))) | 0x80);
}

