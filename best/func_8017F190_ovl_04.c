s32 func_800824A4_ovl_01(u8 *, u8 *, s32);
s32 func_8017F110_ovl_04(void *);
s32 func_8017FA4C_ovl_04(u8 *, void *, s32, s32, s32, s32);
s32 func_8017FBB4_ovl_04(u8, u8 *, s32, s32);
s32 func_8017FD3C_ovl_04(u8);
s32 func_8017FDD4_ovl_04(u8);
extern u8 *D_801806F0_ovl_04;
extern s32 D_80180A54_ovl_04;
s32 func_8017F190_ovl_04(u8 *arg0)
{
  s32 r;
  u8 *new_var;
  s32 rc;
  u32 i;
  u8 *s1;
  u8 *s3;
  volatile s32 status;
  s1 = D_801806F0_ovl_04;
  status = 6;
  func_8017FBB4_ovl_04(s1[0], s1 + 0x2C, 0xFEED, 0xDEADBEEF);
  status = 7;
  i = 9;
  func_8017F110_ovl_04(arg0);
  status = 8;
  new_var = s1;
  if (new_var[0x176] == 0)
  {
    goto Ldone;
  }
  status = i;
  i = 0;
  s3 = new_var + 0x3F4;
  do
  {
    {
      status = 10;
      status = 11;
      r = func_8017FA4C_ovl_04(s3, (new_var + (arg0[i] * 22)) + 0x2C, 0xFEED, 0xDEADBEEF, 0x80, 0x200);
      if (r)
      {
        goto Ldone;
      }
      func_800824A4_ovl_01((new_var + 0x9F4) + (i * 0x80), s3, 0x80);
    }
    i++;
    s3 += 0x80;
  }
  while (i < 15);
  return 0;
  Ldone:
  status = 12;

  rc = func_8017FD3C_ovl_04(s1[0]);
  status = 13;
  if (rc == 0)
  {
    return 0;
  }
  if (rc == 3)
  {
    return 3;
  }
  r = func_8017FDD4_ovl_04(new_var[0]);
  status = 14;
  return r;
}

