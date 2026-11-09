extern u8 *D_800EBB34_overlay_001;
extern u8 D_800E8FC8_overlay_001[];
void func_80077B0C_overlay_001(s32 a0, s32 *a1);
void func_80038A50_overlay_001(s32 a0, s32 a1, void *a2, void *a3);

void func_8003D174_ovl_01(void)
{
  s32 buf[3];
  u8 *p = D_800EBB34_overlay_001;
  buf[0] = *(s16 *)(p + 0x34);
  buf[1] = *(s16 *)(p + 0x36);
  buf[2] = *(s16 *)(p + 0x38);
  func_80077B0C_overlay_001(0x3060001, buf);
  func_80038A50_overlay_001(0x30F1400, 0, D_800E8FC8_overlay_001, D_800EBB34_overlay_001 + 0x34);
  p = D_800EBB34_overlay_001;
  *(u8 *)(p + 9) = 0;
  *(u8 *)(p + 8) = 0;
  p = D_800EBB34_overlay_001;
  *(s16 *)(p + 0xE) = 0;
  *(s16 *)(p + 0xC) = 0;
  *(s32 *)(p + 0) = 0;
}
