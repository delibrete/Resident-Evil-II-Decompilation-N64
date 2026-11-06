extern volatile u32 D_80173EA0_overlay_054[];
void func_80172938_overlay_054(void *arg0)
{
  volatile u32 *base = D_80173EA0_overlay_054;
  u32 new_var;
  void *new_var3;
  void (*new_var2)(void);
  new_var3 = arg0;
  if (new_var || new_var3)
  {
    new_var = new_var;
    new_var2 = (void (*)(void)) base[new_var];
    new_var2();
  }
  else
  {
    new_var = new_var;
    new_var2 = (void (*)(void)) base[new_var];
    new_var2();
  }
}

