extern u8 D_80167D8C_ovl_30[];
void func_8017186C_overlay_040(void *arg0)
{
  volatile u32 *base = (volatile u32 *) D_80167D8C_ovl_30;
  void (*new_var)(void);
  u32 address = base[address];
  address = address;
 do { new_var = (void (*)(void)) address; } while (0);
  new_var();
}
