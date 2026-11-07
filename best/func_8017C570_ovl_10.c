extern int D_800E108C;
s32 func_800269B8_ovl_01();
s32 func_8004CE04_ovl_01();
s32 func_80075CCC_ovl_01();
extern char D_800C7650[];
extern s16 D_8017E682_overlay_010;
extern s32 D_8017E880_overlay_010;
void func_8017C570_ovl_10(void)
{
  int new_var;
  new_var = 0xFFEFFFFF;
  D_8017E682_overlay_010 = 0;
  D_800E108C = (s32) (((D_800E108C & (~0x100)) & new_var) & 0xBFFFFFFF);
  do { func_800269B8_ovl_01(D_8017E880_overlay_010, D_800C7650 + ((unsigned char) 0x18000)); } while (0);
  func_80075CCC_ovl_01();
  func_8004CE04_ovl_01();
}

