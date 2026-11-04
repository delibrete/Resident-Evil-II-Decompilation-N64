extern volatile u32 D_8016C484_overlay_031[];
void func_80169B4C_ovl_31(void *arg0)
{
  volatile u32 *base = D_8016C484_overlay_031;
  u32 new_var;
  u32 idx = *(((u8 *) arg0) + 5);
  new_var = idx;
  ((void (*)(void)) base[new_var])();
}
