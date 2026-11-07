s32 func_8000E210();
extern u16 D_800C4E56_overlay_001;
extern char D_800C4E58_overlay_001[];
extern char D_800C4EA8_overlay_001[];
extern s32 D_800C5688_overlay_001;
extern char D_800C7650_overlay_001[];
extern s32 D_8010B698_overlay_001;
extern s32 D_80113778_overlay_001;
void func_80025A60_ovl_01(void)
{
  s16 temp_v0;
  s32 *new_var;
  s32 temp_a1;
  *((s16 *) (D_800C4E58_overlay_001 + 2)) = 0x800;
  *((s16 *) (D_800C4E58_overlay_001 + 6)) = 0x800;
  *((s16 *) (D_800C4EA8_overlay_001 + 2)) = 0x800;
  *((s16 *) (D_800C4EA8_overlay_001 + 6)) = 0x800;
  *((s32 *) (D_800C4EA8_overlay_001 + 0x10)) = (s32) D_8010B698_overlay_001;
  temp_v0 = D_800C4E56_overlay_001 * 4;
  *((s16 *) (D_800C4E58_overlay_001 + 0xA)) = temp_v0;
  *((s16 *) (D_800C4E58_overlay_001 + 0xE)) = temp_v0;
  *((s16 *) (D_800C4EA8_overlay_001 + 0xA)) = temp_v0;
  *((s16 *) (D_800C4EA8_overlay_001 + 0xE)) = temp_v0;
  temp_a1 = D_800C5688_overlay_001 - ((*((s16 *) (D_800C7650_overlay_001 + 0x21270))) * (D_80113778_overlay_001 * 2));
  new_var = &temp_a1;
  *((s32 *) (D_800C4E58_overlay_001 + 0x10)) = *new_var;
  func_8000E210(&D_800C4E58_overlay_001, *new_var, *((s16 *) (D_800C7650_overlay_001 + 0x21270)), &D_800C5688_overlay_001);
  func_8000E210(&D_800C4EA8_overlay_001);
}

