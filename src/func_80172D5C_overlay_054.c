extern volatile u32 D_80173EAC_overlay_054[];
void func_80172D5C_overlay_054(void *arg0)
{
  volatile u32 *base;
  base = D_80173EAC_overlay_054;
  ((void (*)(void)) base[((u8 *) arg0)[5]])();
}
