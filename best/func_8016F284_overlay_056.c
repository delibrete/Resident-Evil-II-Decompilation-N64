extern int D_800E10F8;
extern int D_800E1100;
s32 func_80032EA4_ovl_01();
extern char D_800C7650[];
void func_8016F284_overlay_056(s32 arg0)
{
  int *new_var;
  new_var = &D_800E10F8;
  do
  {
    func_80032EA4_ovl_01(arg0, *new_var, D_800E1100, 0x400);
  }
  while (0);
  func_80032EA4_ovl_01(arg0, *new_var, D_800E1100, 0x320);
}

