extern u8 D_80167D8C_ovl_30[];
void func_80172BC8_overlay_045(void *arg0)
{
  volatile u32 *base;
  u8 index = ((u8 *) arg0)[6];
  void (*new_var)(void);
  u32 address = base[index];
  unsigned int new_var2;
  void (*new_var3)(void);
  new_var2 = address;
  new_var3 = (void (*)(void)) new_var2;
  new_var = new_var3;
  new_var();
  base = (volatile u32 *) D_80167D8C_ovl_30;
}

