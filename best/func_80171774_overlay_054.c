extern u8 D_80173DF8_overlay_054[];
void func_80171774_overlay_054(void *arg0)
{
  volatile u32 *base = (volatile u32 *) D_80173DF8_overlay_054;
  void (*new_var)(void);
  u32 address = base[address];
  new_var = (void (*)(void)) address;
  new_var();
}

