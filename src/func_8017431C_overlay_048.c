extern volatile u32 D_80174DE0_overlay_048[];
void func_8017431C_overlay_048(void *arg0)
{
  volatile u32 *base;
  base = D_80174DE0_overlay_048;
  ((void (*)(void)) base[((u8 *) arg0)[5]])();
}
