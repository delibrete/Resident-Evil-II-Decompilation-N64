typedef struct G8017B874
{
  s32 unk0;
  u32 unk4;
  u32 unk8;
  u32 unkC;
  u32 unk10;
  u32 unk14;
  u32 unk18;
} G8017B874;
extern volatile G8017B874 *D_80186C14_ovl_02;
extern s32 func_8017B48C_ovl_02(s32, void *, s32);
u8 func_8017B874_ovl_02(void)
{
  unsigned int new_var;
  u8 *p;
  int new_var2;
  int new_var4;
  u8 *new_var3;
  new_var = D_80186C14_ovl_02->unk0;
  if (D_80186C14_ovl_02->unk8 >= (new_var2 = new_var + 0x800))
  {
    new_var4 = new_var2;
    do
    {
      func_8017B48C_ovl_02(D_80186C14_ovl_02->unk4, D_80186C14_ovl_02, 0x800);
      D_80186C14_ovl_02->unk8 -= 0x800;
      D_80186C14_ovl_02->unk18 -= 0x800;
    }
    while (D_80186C14_ovl_02->unk8 >= new_var4);
  }
  new_var3 = (u8 *) D_80186C14_ovl_02->unk8;
  p = new_var3;
  new_var2 = (u32) (p + 1);
  D_80186C14_ovl_02->unk8 = new_var2;
  return *p;
}

