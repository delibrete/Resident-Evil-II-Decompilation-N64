extern u8 D_801479F8;
extern u8 D_80148180;
void func_800A94E0_ovl_01(void);
s32 func_800A5BF0_ovl_01(s32, s32);
extern u8 D_801479F8;
extern u8 D_80148180;
static inline int inline_fn(s32 arg0, s32 arg1)
{
  return arg0 < arg1;
}

void func_800A9518_ovl_01(void)
{
  u8 *new_var3;
  u8 *new_var2;
  int new_var;
  s32 i = 0;
  new_var = 12;
  if (D_801479F8)
  {
    u8 *p = &D_80148180;
    new_var3 = p;
    do
    {
      if ((*new_var3) == 1)
      {
        new_var2 = new_var3 + new_var;
        func_800A5BF0_ovl_01(*((s32 *) (new_var3 + 8)), *((s32 *) new_var2));
      }
      p += 0x18;
    }
    while (inline_fn(i, (s32) D_801479F8));
    i++;
  }
}

extern u8 D_801362B0_ovl_01;
s32 func_800AF074_ovl_01(void);
extern u8 D_801443E8;
s32 func_800A81E8_ovl_01(void);
extern f64 D_800BA710_ovl_01;
extern f64 D_800BA718_ovl_01;
f64 func_800A61F8_ovl_01(f64 arg0);
