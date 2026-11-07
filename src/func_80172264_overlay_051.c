extern volatile u32 D_8017314C_overlay_051[];
void func_80172264_overlay_051(void *arg0)
{
  volatile u32 *base;
  base = D_8017314C_overlay_051;
  ((void (*)(void)) base[((u8 *) arg0)[5]])();
}
