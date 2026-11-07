extern volatile u32 D_80173B3C_overlay_060[];
void func_80171E18_overlay_060(void *arg0)
{
  volatile u32 *base = D_80173B3C_overlay_060;
  u32 address = base[((u8 *)arg0)[5]];
  ((void (*)(void))address)();
}
