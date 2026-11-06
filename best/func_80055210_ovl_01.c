extern u8 D_80111103_ovl_01;
extern u8 D_800C7650_ovl_01[];
extern u8 D_800E10D0_ovl_01[];
extern s32 D_801314F0_ovl_01[];
extern f32 D_8010DD0C_ovl_01;
f32 func_80047DA0_ovl_01(f32, f32);
void func_8005AB28_ovl_01(u8 *arg0);
void func_8005AB40_ovl_01(u8 *arg0, u8 *arg1);
void func_80059F08_ovl_01(s32 arg0);
void func_80055210_ovl_01(void)
{
  long new_var;
  s32 *new_var4;
  s32 *new_var3;
  s32 *new_var5;
  s32 *new_var2;
  new_var = D_801314F0_ovl_01[0x80 / 4];
  new_var = 0x8C / 4;
  new_var2 = &new_var3[0x94 / 4];
  D_8010DD0C_ovl_01 = func_80047DA0_ovl_01((f32) ((new_var4 = new_var3)[new_var] - new_var), (f32) ((*new_var2) - new_var4[0x88 / 4]));
  new_var5 = D_801314F0_ovl_01;
  new_var3 = new_var5;
}

