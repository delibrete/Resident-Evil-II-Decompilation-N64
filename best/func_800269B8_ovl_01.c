extern s32 D_800C4F20_ovl_01[];
extern s32 D_800E90B0_ovl_01;
extern s32 D_80113790_ovl_01;
extern s32 D_80113794_ovl_01;
s32 func_80026954_ovl_01(s32, s32, s32, s32, s32, s32);
void func_800269B8_ovl_01(s32 arg0)
{
  s32 index = arg0;
  s32 *base = D_800C4F20_ovl_01;
  s32 new_var2;
  s32 *p = base + (index * 10);
  u32 limit = ((u32) D_80113790_ovl_01) * ((u32) D_80113794_ovl_01);
  int new_var;
  new_var2 = p[4];
  index = p[2];
  new_var = (p[0] - p[3]) - index;
  for (;;)
  {
    u32 w = new_var * ((p[1] - p[5]) - new_var2);
    index = w <= limit;
    if (index)
    {
      break;
    }
    p -= 10;
    index--;
  }

  D_800E90B0_ovl_01 = index;
  new_var2 = 1;
  do
  {
    func_80026954_ovl_01(p[0], p[new_var2], p[2], p[3], p[4], p[5]);
  }
  while (0);
}

