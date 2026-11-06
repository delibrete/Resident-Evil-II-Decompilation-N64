extern u32 D_80143FB0_ovl_01[];
void func_800A8278_ovl_01(s32 arg0, s32 arg1)
{
  u32 a2;
  u32 v;
  if ((0xFF & arg1) != 0xFF)
  {
    arg1 = arg1;
  }
  else
  {
    a2 = 8;
    arg1 = a2;
  }
  a2 = arg0;
  v = (a2 << 3) + (a2 << 4);
  v = v << 9;
  D_80143FB0_ovl_01[arg1 & 0xFF] = v / 240;
}

