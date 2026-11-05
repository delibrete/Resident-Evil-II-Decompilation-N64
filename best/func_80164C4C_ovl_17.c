s32 func_80032C08_ovl_01(s32, s32);
s32 func_80077D48_ovl_01(s32, void *);
s32 func_80089D34_ovl_01(void *, s32, s32, s32);
void func_80164C4C_ovl_17(u8 *p, s32 x, s32 y)
{
  int new_var;
  s32 a;
  do
  {
    func_80032C08_ovl_01(*((s16 *) (p + 0x1F4)), 0);
  }
  while (0);
  *((u16 *) (p + 0x1E2)) += 0x28;
  if ((*((s16 *) (p + 0x1F4))) != 0)
  {
    *((u16 *) (p + 0x68)) += 0x200;
    *((s16 *) (p + 0x1F4)) -= 0x200;
  }
  a = *((s16 *) (p + 0x25E));
  if ((*((s32 *) (p + 0x2C))) < a)
  {
    goto done;
  }
  *((s32 *) (p + 0x2C)) = a;
  new_var = 0x0C000000;
  *((u32 *) p) = ((*((u32 *) p)) & 0xEFFFFFFF) | new_var;
  if ((*((s16 *) (p + 0x1F4))) == 0)
  {
    p[6] = 2;
    *((s32 *) (p + 0x1E8)) = 0x09000300;
  }
  a = 5;
  if ((*((s8 *) (p + 0x2D6))) < 0)
  {
    a = 6;
  }
  func_80077D48_ovl_01(a, p);
  done:
  func_80089D34_ovl_01(p, x, y, 0x400);

}

