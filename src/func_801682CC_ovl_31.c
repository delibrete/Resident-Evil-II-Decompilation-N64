extern u32 func_8016C0B0_ovl_11[];
void func_801682CC_ovl_31(void *arg0)
{
  volatile u32 *table;
  u16 flag = *((u16 *) (((u8 *) arg0) - -0x1AA));
  void (*fn)(void) = (void (*)(void)) ((volatile u32 *) (((u8 *) func_8016C0B0_ovl_11) + 0x3C8))[flag & 1];
  fn();
}

