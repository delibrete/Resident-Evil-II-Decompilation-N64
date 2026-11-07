extern volatile u32 D_80168ED0_ovl_28[];
void func_801625A4_ovl_28(void *arg0)
{
  u8 *new_var;
  int new_var3;
  void *new_var2;
  new_var2 = arg0;
  new_var = ((u8 *) new_var2) - -0x1AA;
  new_var3 = (*((u16 *) new_var)) & 0x3F;
  ((void (*)(void)) D_80168ED0_ovl_28[new_var3])();
}

