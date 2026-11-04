extern int D_800E10F8;
extern int D_800E1100;
s32 func_80032EA4_ovl_01();
extern char D_800C7650[];
void func_8016EBB8_overlay_062(s32 arg0)
{
  int *new_var3;
  s32 new_var2;
  int new_var;
  new_var2 = arg0;
  new_var3 = &D_800E10F8;
  new_var = 0x5F4;
  do
  {
    func_80032EA4_ovl_01(arg0, *new_var3, D_800E1100, new_var);
  }
  while (0);
  do
  {
    func_80032EA4_ovl_01(arg0, *new_var3, D_800E1100, 0x338);
  }
  while (0);
  new_var = *new_var3;
  func_80032EA4_ovl_01(new_var2, new_var, D_800E1100, 0x400);
}

