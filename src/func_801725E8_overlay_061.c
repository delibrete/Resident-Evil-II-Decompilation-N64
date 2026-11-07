typedef void (*Fn)(u8 *, s32, s32);
extern u8 D_80173DA0_overlay_061[];
void func_801725E8_overlay_061(u8 *p, s32 x, s32 y)
{
  volatile Fn *table = (Fn *)D_80173DA0_overlay_061;
  u32 n = ((p[5] - 1) * 9) + p[0x26E];
  table[n](p, x, y);
}
