/* identical to func_801656FC_ovl_17 (matched), with its names changed by decompdecomp */
extern volatile u32 D_80167EE8_ovl_17[];
extern void func_80172950_overlay_045(void);
void func_8017228C_overlay_045(void *a)
{
  u8 *p = a;
  if (p[0x2C0] == 0)
  {
    ((void (*)(void)) D_80167EE8_ovl_17[p[(unsigned int) 0x2BE]])();
  }
  else
  {
    func_80172950_overlay_045();
  }
}

