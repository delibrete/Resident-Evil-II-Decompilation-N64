extern int D_800E10F8;
extern int D_800E1100;
s32 func_80032EA4_ovl_01();
s32 func_80172778_overlay_041();
s32 func_80172A90_overlay_041();
extern char D_800C7650[];
void func_801703F0_overlay_041(void *arg0)
{
  unsigned int new_var2;
  void *new_var;
  func_80172A90_overlay_041(arg0);
  new_var2 = 0x60;
  new_var = arg0;
  if ((func_80032EA4_ovl_01(new_var, D_800E10F8, D_800E1100, new_var2) != 0) || (!((*((u16 *) (((char *) arg0) + 0x2C6))) & 2)))
  {
    func_80172778_overlay_041(new_var, 4);
  }
}

