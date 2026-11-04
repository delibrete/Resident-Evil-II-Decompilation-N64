extern u8 D_80167D8C_ovl_30[];
void func_80162114_overlay_030(void *arg0)
{
  volatile u32 *base = (volatile u32 *) D_80167D8C_ovl_30;
  u8 index = ((u8 *) arg0)[6];
  void (*new_var)(void);
  u32 address = base[index];
  new_var = (void (*)(void)) address;
  new_var();
}

