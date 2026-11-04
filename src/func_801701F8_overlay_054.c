extern u8 D_80173DBC_overlay_054[];
void func_801701F8_overlay_054(void *arg0)
{
  volatile u32 *base = (volatile u32 *) D_80173DBC_overlay_054;
  u8 index = ((u8 *) arg0)[6];
  void (*new_var)(void);
  u32 address = base[index];
  new_var = (void (*)(void)) address;
  new_var();
}
