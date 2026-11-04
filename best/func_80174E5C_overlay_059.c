/* identical to func_801682CC_ovl_31 (matched), with its names changed by decompdecomp */
extern u32 func_80178C40_overlay_039[];
void func_80174E5C_overlay_059(void *arg0)
{
  volatile u32 *table;
  u16 flag = *((u16 *) (((u8 *) arg0) - -0x1AA));
  void (*fn)(void) = (void (*)(void)) ((volatile u32 *) (((u8 *) func_80178C40_overlay_039) + 0x3C8))[flag & 1];
  fn();
}

