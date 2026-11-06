extern volatile u32 func_80166684_ovl_33[];
void func_801633DC_overlay_035(void *arg0)
{
  unsigned short new_var;
  u32 i = *(((u8 *) arg0) + 6);
  new_var = i;
  ((void (*)(void)) func_80166684_ovl_33[new_var])();
}

