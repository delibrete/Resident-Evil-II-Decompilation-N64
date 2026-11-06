extern volatile u32 D_80166658_ovl_13[];
void func_80171810_overlay_044(void *arg0)
{
  volatile u32 *base;
  base = D_80166658_ovl_13;
 do { ((void (*)(void)) base[((u8 *) arg0)[5]])(); } while (0);
}
