extern volatile u32 D_80173EA0_overlay_054[];
void func_80172938_overlay_054(void *arg0)
{
  volatile u32 *base = D_80173EA0_overlay_054;
  u32 new_var;
  u32 idx = *(((u8 *) arg0) + 5);
  new_var = idx;
  ((void (*)(void)) base[new_var])();
}
