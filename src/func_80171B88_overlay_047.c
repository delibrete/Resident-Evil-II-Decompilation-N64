extern volatile u32 D_80172058_overlay_047[];
void func_80171B88_overlay_047(void *arg0)
{
  volatile u32 *base;
  base = D_80172058_overlay_047;
  ((void (*)(void)) base[((u8 *) arg0)[5]])();
}
