extern s32 D_800C4E58_overlay_001;
extern s32 D_800C4EA8_overlay_001;
extern s32 D_800C4ED4_overlay_001;
extern s32 D_800C4EEC_overlay_001;
extern s32 D_800C5688_overlay_001;
void func_80025F78_ovl_01(s32 arg0, u16 arg1, void *arg2)
{
  s32 *var_a0;
  s32 temp_a1;
  s8 var_v0;
  if (arg0 & 0xFFFF)
  {
    var_a0 = &D_800C4EA8_overlay_001;
    D_800C4EEC_overlay_001 = *((s32 *) (((char *) arg2) + 0x18));
  }
  else
  {
    var_a0 = &D_800C4E58_overlay_001;
    D_800C4ED4_overlay_001 = *((s32 *) (((char *) arg2) + 0x18));
    D_800C5688_overlay_001 = *((s32 *) (((char *) arg2) + 0x14));
  }
  *((s8 *) (((char *) var_a0) + 0x16)) = (s8) arg1;
  temp_a1 = arg1 & 0xFFFF;
  *((s32 *) (((char *) var_a0) + 0x10)) = (s32) (*((s32 *) (((char *) arg2) + 0x14)));
  if (temp_a1 == 0)
  {
    var_v0 = 2;
    goto block_7;
  }
  if (temp_a1 == 2)
  {
    var_v0 = 1;
    block_7:
    *((s8 *) (((char *) var_a0) + 0x17)) = var_v0;

  }
  *((s16 *) (((char *) (&D_800C4EA8_overlay_001)) + 0x1E)) = arg0;
  *((s16 *) (((char *) (&D_800C4E58_overlay_001)) + 0x1E)) = arg0;
  *((s16 *) (((char *) (&D_800C4EA8_overlay_001)) + 0x1C)) = arg0;
  *((s16 *) (((char *) (&D_800C4E58_overlay_001)) + 0x1C)) = arg0;
  *((s32 *) (((char *) (&D_800C4EA8_overlay_001)) + 0x20)) = 0;
  *((s32 *) (((char *) (&D_800C4E58_overlay_001)) + 0x20)) = 0;
  *((s16 *) (((char *) (&D_800C4EA8_overlay_001)) + 2)) = 0x500;
  *((s16 *) (((char *) (&D_800C4E58_overlay_001)) + 2)) = 0x500;
  *((s16 *) (((char *) (&D_800C4EA8_overlay_001)) + 0xE)) = 0x3C0;
  *((s16 *) (((char *) (&D_800C4E58_overlay_001)) + 0xE)) = 0x3C0;
  *((s16 *) (((char *) (&D_800C4EA8_overlay_001)) + 0xA)) = 0x3C0;
  *((s16 *) (((char *) (&D_800C4E58_overlay_001)) + 0xA)) = 0x3C0;
  *((s16 *) (((char *) (&D_800C4EA8_overlay_001)) + 6)) = 0x500;
  *((s16 *) (((char *) (&D_800C4E58_overlay_001)) + 6)) = 0x500;
}

