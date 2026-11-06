void func_8016F188_overlay_054(void *);
extern volatile u32 D_80162FFC_ovl_36[];
void func_8016FDB0_overlay_054(void *arg0)
{
  void *p = arg0;
  volatile u32 *base;
  u32 i = *(((u8 *) p) + 6);
  ((void (*)(void *)) base[i])(p);
  func_8016F188_overlay_054(p);
  base = D_80162FFC_ovl_36;
}

