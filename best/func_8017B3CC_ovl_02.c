extern s32 func_80004EE0(s32, s32, s32, s32, s32, s32);
extern s32 func_80007320(s32, s32);
extern s32 D_80184AA0_ovl_02;
extern s32 D_80184AA4_ovl_02;
extern s32 D_80184AA8_ovl_02;
extern const char D_80184A40_overlay_002[];
void func_8017B3CC_ovl_02(s32 arg0)
{
  s32 a;
  if (D_80184AA8_ovl_02 == 0)
  {
    a = D_80184AA4_ovl_02;
    do { func_80007320(a, 0x1000); } while (0);
    func_80004EE0(arg0, a, D_80184AA0_ovl_02, 0x1000, 0, (s32) D_80184A40_overlay_002);
    D_80184AA0_ovl_02 = (D_80184AA8_ovl_02 = 0x1000);
  }
}

