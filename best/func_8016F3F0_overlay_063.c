extern u8 D_80167D8C_ovl_30[];
void func_8016F3F0_overlay_063(void *arg0)
{
  volatile u32 *base;
  u8 index = ((u8 *) arg0)[6];
  void (*new_var)(void);
  u32 address = base[index];
  if (index)
  {
    new_var = (void (*)(void)) address;
    new_var();
    base = (volatile u32 *) D_80167D8C_ovl_30;
  }
  else
  {
    new_var = (void (*)(void)) address;
    new_var();
    base = (volatile u32 *) D_80167D8C_ovl_30;
  }
}

