extern int (*D_80166F0C_overlay_032[])();
void func_80162330_ovl_32(void *arg0)
{
  int new_var;
  new_var = (*((u16 *) (((u8 *) arg0) + 0x1AA))) & 0x3F;
  D_80166F0C_overlay_032[new_var]();
}

