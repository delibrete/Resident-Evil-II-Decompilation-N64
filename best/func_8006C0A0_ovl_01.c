s32 func_8000CB60(s32 *, s32, s32);
extern s32 D_80112724_ovl_01;
extern s32 D_80112728_ovl_01;
extern s32 D_801129C4_ovl_01;
void func_8006C0A0_ovl_01(s32 arg0)
{
  volatile int new_var;
  s32 temp_v0;
  D_80112724_ovl_01 = arg0;
  if ((arg0 == 0) && (D_80112728_ovl_01 != 0))
  {
    do
    {
      new_var = D_80112728_ovl_01 - 1;
      func_8000CB60(&D_801129C4_ovl_01, 0, 0);
      temp_v0 = new_var;
      D_80112728_ovl_01 = temp_v0;
    }
    while (temp_v0 != 0);
  }
}

