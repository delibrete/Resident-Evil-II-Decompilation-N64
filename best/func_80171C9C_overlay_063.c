extern u8 D_80167D8C_ovl_30[];
void func_80171C9C_overlay_063(void *arg0)
{
  volatile u32 *base;
  void (*new_var2)(void);
  u8 index = ((u8 *) arg0)[6];
  void (*new_var)(void);
  u32 address = base[index];
  if (arg0)
  {
    new_var = (void (*)(void)) address;
    new_var();
  }
  else
  {
    new_var = (new_var2 = (void (*)(void)) address);
    base = (volatile u32 *) D_80167D8C_ovl_30;
    new_var();
  }
}

