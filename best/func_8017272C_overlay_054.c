s32 func_80033634_ovl_01();
s32 func_8017212C_overlay_054();
s32 func_801721D0_overlay_054(void *);
s32 func_801736A8_overlay_054(void *, u8, s32);
extern s32 D_80173D40_overlay_054;
void func_8017272C_overlay_054(void *arg0)
{
  s32 var_v1;
  void *new_var;
  u32 var_a0;
  void *temp_s2;
  temp_s2 += (s32) 0x2B4;
  if ((*((u8 *) (((char *) arg0) + 6))) == 0)
  {
    func_8017212C_overlay_054();
    func_801736A8_overlay_054(arg0, *((func_80033634_ovl_01() & 0xF) + (&D_80173D40_overlay_054)), 0xA);
    func_801736A8_overlay_054(arg0, *((func_80033634_ovl_01() & 0xF) + (&D_80173D40_overlay_054)), 0xA);
    func_801736A8_overlay_054(arg0, *((func_80033634_ovl_01() & 0xF) + (&D_80173D40_overlay_054)), 0xA);
    var_a0 = 0;
    var_v1 = 0;
    *((s8 *) (((char *) arg0) + 0x25D)) = 0;
    new_var = temp_s2;
    temp_s2 = (char *) arg0;
    *((s8 *) (((char *) new_var) + 0x24)) = 0x2D;
    *((s8 *) (((char *) new_var) + 0xD)) = 7;
    *((s8 *) (((char *) temp_s2) + 0xF)) = 3;
    do
    {
      var_a0 += 1;
      *((s32 *) (((char *) ((*((s32 *) (((char *) arg0) + 0x234))) + var_v1)) + 0x60)) = 0x3F3F3F;
      var_v1 += 0x178;
    }
    while (var_a0 < 0x1AU);
  }
  else
  {
    func_801721D0_overlay_054(arg0);
  }
  *((s16 *) (((char *) new_var) + 0x20)) = 1;
}

