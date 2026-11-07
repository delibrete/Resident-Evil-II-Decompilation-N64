extern volatile u32 D_80174AD0_overlay_058[];
void func_80172FCC_overlay_058(void *arg0)
{
  volatile u32 *base = D_80174AD0_overlay_058;
  u32 address = base[((u8 *)arg0)[5]];
  ((void (*)(void))address)();
}
