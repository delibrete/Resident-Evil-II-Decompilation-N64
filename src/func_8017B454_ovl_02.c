s32 func_80004C9C(void);
s32 func_8017B3CC_overlay_002(s32);
extern s32 D_80184AAC_overlay_002;
s32 func_8017B454_ovl_02(s32 arg0)
{
  s32 v = func_80004C9C();
  D_80184AAC_overlay_002 = v;
  func_8017B3CC_overlay_002(arg0);
  return arg0;
}
