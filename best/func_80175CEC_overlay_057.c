/* identical to func_8016915C_ovl_29 (matched), with its names changed by decompdecomp */
extern u8 D_80169854_ovl_29[];
void func_80175CEC_overlay_057(void *arg0)
{
  volatile u32 *base = (volatile u32 *) D_80169854_ovl_29;
  u8 index = ((u8 *) arg0)[0x2BC];
  u32 address = base[index];
  if (address)
  {
    ((void (*)(void)) address)();
  }
  else
  {
    ((void (*)(void)) address)();
  }
}

