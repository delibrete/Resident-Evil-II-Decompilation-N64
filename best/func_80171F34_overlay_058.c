s32 func_80033634_ovl_01();
s32 func_80173E84_overlay_058(void *, u8, u8, u32);
extern s32 D_801748A8_overlay_058;
extern s32 D_801748C0_overlay_058;
void func_80171F34_overlay_058(void *arg0)
{
  s32 *new_var;
  new_var = (((((*((u8 *) (((char *) arg0) + 0x26E))) % 3) & 0xFF) * 4) + (func_80033634_ovl_01() & 3)) + (&D_801748C0_overlay_058);
  func_80173E84_overlay_058(arg0, *new_var, *((u8 *) (((char *) ((*((u8 *) (((char *) arg0) + 5))) + (&D_801748A8_overlay_058))) + (-1))), MULTU_HI(*((u8 *) (((char *) arg0) + 0x26E))));
}

