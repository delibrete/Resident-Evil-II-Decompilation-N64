s32 func_80033634_ovl_01();
s32 func_801712D8_overlay_045(void *, s32, s32);
s32 func_80173B4C_overlay_045(void *, u8, s32);
s32 func_8017404C_overlay_045(void *);
extern s32 D_80174A28_overlay_045;
void func_80171C88_overlay_045(void *arg0, s32 arg1, s32 arg2)
{
  int __repair_constant;
  if ((*((u8 *) (((char *) arg0) + 6))) == 0)
  {
    s32 temp_v0;
    func_80173B4C_overlay_045(arg0, *((func_80033634_ovl_01() & 3) + (&D_80174A28_overlay_045)), 3);
    __repair_constant = 6;
    temp_v0 = func_80033634_ovl_01() & 7;
    if (!((((s32) (*((u8 *) (((char *) arg0) + 0x2BC)))) >> temp_v0) & 1))
    {
      func_80173B4C_overlay_045(arg0, (temp_v0 * 2) + 3, 3);
    }
    if ((((*((s8 *) (((char *) arg0) + 0x1ED))) < 0) || ((*((s8 *) (((char *) arg0) + 0x1EE))) < 0)) || ((*((s8 *) (((char *) arg0) + 0x1EF))) <= (0 - 1)))
    {
      func_8017404C_overlay_045(arg0);
      *((s8 *) (((char *) arg0) + 0x1ED)) = __repair_constant;
      *((s8 *) (((char *) arg0) + 0x1EE)) = __repair_constant;
      *((s8 *) (((char *) arg0) + 0x1EF)) = __repair_constant;
    }
  }
  func_801712D8_overlay_045(arg0, arg1, arg2);
}

