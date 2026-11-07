extern int D_800E10F8;
extern int D_800E1100;
s32 func_80032EA4_ovl_01();
s32 func_80172778_overlay_041();
s32 func_80172A90_overlay_041();
s32 func_80172DA4_overlay_041();
extern char D_800C7650[];
void func_801708A0_overlay_041(void *arg0)
{
  void *new_var;
  new_var = arg0;
 do { if ((func_80032EA4_ovl_01(arg0, D_800E10F8, D_800E1100, 0xC0) != 0) || (!((*((u16 *) (((char *) new_var) + 0x2C6))) & 2))) { func_80172DA4_overlay_041(arg0, 0x15E); func_80172778_overlay_041(arg0, 4); } } while (0);
  func_80172A90_overlay_041(arg0);
}
