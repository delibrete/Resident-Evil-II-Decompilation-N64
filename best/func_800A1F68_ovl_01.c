s32 func_800A11D4_ovl_01(s32);
s32 func_800A5618_ovl_01();
s32 func_800A5660_ovl_01();
extern u8 D_801362B0_ovl_01;
void func_800A1F68_ovl_01(s32 arg0)
{
  int new_var3;
  int new_var2;
  s32 new_var;
  new_var = arg0;
  new_var3 = 0;
  new_var2 = D_801362B0_ovl_01 != new_var3;
  if (new_var2)
  {
    if (D_801362B0_ovl_01)
    {
      func_800A5618_ovl_01();
      func_800A11D4_ovl_01(arg0);
      func_800A5660_ovl_01();
    }
    else
    {
      func_800A5618_ovl_01();
      func_800A11D4_ovl_01(new_var);
      func_800A5660_ovl_01();
    }
  }
}

