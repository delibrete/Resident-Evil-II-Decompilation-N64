extern u8 D_801479F8;
extern u8 D_80148180;
void func_800A94E0_ovl_01(void);
s32 func_800A5BF0_ovl_01(s32, s32);
extern u8 D_801479F8;
extern u8 D_80148180;
void func_800A9518_ovl_01(void);
extern u8 D_801362B0_ovl_01;
s32 func_800AF074_ovl_01(void);
extern u8 D_801443E8;
s32 func_800A81E8_ovl_01(void)
{
  s32 a0;
  s32 s0 = -1;
  s32 v0;
  u8 *p;
  if (D_801362B0_ovl_01)
  {
    a0 = func_800AF074_ovl_01();
    if (a0 != (-1))
    {
      v0 = a0 & 255;
      v0 = v0 * 0x1a0;
      do
      {
        p = (&D_801443E8) + v0;
        if ((*((s32 *) (p + 0x60))) == a0)
        {
          s0 = 0;
          *((s32 *) (p + 0x24)) |= 8;
        }
        a0 = *((s32 *) (p + 0x10));
        v0 = a0 & 255;
      }
      while (a0 != (-1));
    }
  }
  return s0;
}

extern f64 D_800BA710_ovl_01;
extern f64 D_800BA718_ovl_01;
f64 func_800A61F8_ovl_01(f64 arg0);
