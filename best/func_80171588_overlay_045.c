extern volatile u32 D_80167E70_ovl_17[];
void func_80171588_overlay_045(void *arg0)
{
  int new_var3;
  volatile u32 *base = D_80167E70_ovl_17;
  u32 new_var;
  u32 i = *(((u8 *) arg0) + 0x2BE);
  u32 new_var2;
  u32 new_var4;
  new_var4 = new_var;
  new_var = i;
  new_var2 = new_var4;
  new_var3 = new_var2;
  ((void (*)(void)) base[new_var3])();
}

