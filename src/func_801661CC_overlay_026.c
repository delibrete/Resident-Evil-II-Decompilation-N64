extern volatile u32 D_8016731C_overlay_026[];
void func_801661CC_overlay_026(void *arg0)
{
  volatile u32 *base = D_8016731C_overlay_026;
  u32 new_var;
  u32 idx = *(((u8 *) arg0) + 5);
  new_var = idx;
  ((void (*)(void)) base[new_var])();
}
