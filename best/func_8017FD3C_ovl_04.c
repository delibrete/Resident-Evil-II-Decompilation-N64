extern void *D_801806F0_ovl_04;
extern u8 D_801801DC_ovl_04;
extern u16 D_8018066A_ovl_04;
extern u8 D_80180370_ovl_04[];
extern s32 func_8004A7F8_ovl_01(s32, s32, void *, s32);
extern s32 func_8017B448_ovl_04(s32);
extern s32 func_8004C24C_ovl_01(s16, s32, void *, s32);
extern s32 func_8004CDB8_ovl_01(s32);
extern s32 func_8017FD3C_ovl_04(s32);
extern void func_8017F7C4_ovl_04(void);
extern s32 func_8017FF08_ovl_04(s32);
extern s32 func_8017FE8C_ovl_04(void);
void func_8017F0D0_ovl_04(void);
void func_8017F110_ovl_04(u8 *arg0);
s32 func_8017F33C_ovl_04(void);
s32 func_8017FD3C_ovl_04(s32 arg0)
{
  s32 a = arg0;
  s32 s0;
  s32 s1 = 8;
  s32 s2 = 255;
  int new_var;
  s32 s3 = 3;
  func_8017F7C4_ovl_04();
  new_var = 3;
  do
  {
    if (func_8017FF08_ovl_04(a << 4) == 0)
    {
      s1--;
      goto next;
    }
    if (1)
    {
      s0 = func_8017FE8C_ovl_04();
      s1 = new_var;
      if (s0 == s1)
      {
        return new_var;
      }
      if (s0 & 1)
      {
        s2 = s0;
        goto next;
      }
      if (s0 == s2)
      {
        return s0;
      }
      s2 = s0;
    }
    next:
    s1--;

  }
  while (s1);
  return s0;
}

