/* identical to func_801682CC_ovl_31 (matched), with its names changed by decompdecomp */
extern u32 func_80162C08_overlay_030[];
void func_80162004_overlay_025(void *arg0)
{
  volatile u32 *table;
  u16 flag = *((u16 *) (((u8 *) arg0) - -0x1AA));
  void (*fn)(void) = (void (*)(void)) ((volatile u32 *) (((u8 *) func_80162C08_overlay_030) + 0x3C8))[flag & 1];
  fn();
}

