extern volatile u32 D_80173EB8_overlay_054[];
void func_80173094_overlay_054(void *arg0) {
  volatile u32 *p = D_80173EB8_overlay_054;
  s32 idx = ((u8 *)arg0)[0x2C6];
  void (*fn)(void *, u8 *) = (void (*)(void *, u8 *))p[idx];
  fn(arg0, (u8 *)arg0 + 0x2B4);
}
