/* identical to func_80162A0C_ovl_36 (matched), with its names changed by decompdecomp */
void jtbl_80172FE8_overlay_041(void *);
extern volatile u32 D_80162FFC_ovl_36[];
void func_80171400_overlay_040(void *arg0)
{
  void *p = arg0;
  volatile u32 *base = D_80162FFC_ovl_36;
  u32 i = *((u8 *)p + 6);
  ((void (*)(void *))base[i])(p);
  jtbl_80172FE8_overlay_041(p);
}
