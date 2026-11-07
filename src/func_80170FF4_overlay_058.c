extern volatile u32 D_80174950_overlay_058[];
void func_80170FF4_overlay_058(void *arg0)
{
  volatile u32 *base = D_80174950_overlay_058;
  u32 address = base[((u8 *)arg0)[6]];
  ((void (*)(void))address)();
}
