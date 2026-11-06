extern u32 D_80167DB4_ovl_30[];
void func_80163D1C_ovl_30(void *arg0)
{
  volatile u32 *base = (volatile u32 *) D_80167DB4_ovl_30;
  u8 index = ((u8 *) arg0)[6];
  void (*new_var)(void);
  u32 address = base[index];
  new_var = (void (*)(void)) address;
  new_var();
}
