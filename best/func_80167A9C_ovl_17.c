extern s32 D_800E10D0_ovl_01;
extern s32 D_800C7650_ovl_01[];
void func_801679E0_ovl_17(void *p);
void func_80167A9C_ovl_17(void *p)
{
  int __repair_literal;
  void *new_var;
  s32 a1 = (*((s32 *) p)) & 0xe3ffffff;
  u8 t;
  *((s32 *) p) = a1;
  if (((u8 *) p)[0x2be] == 1)
  {
    goto one;
  }
  __repair_literal = 2;
  if (((u8 *) p)[0x2be] < __repair_literal)
  {
    if (((u8 *) p)[0x2be] == 0)
    {
      goto zero;
    }
    return;
  }
  if (((u8 *) p)[0x2be] >= 4)
  {
    return;
  }
  {
    s32 d = (*((s32 *) (((u8 *) (&D_800E10D0_ovl_01)) + 0x2c))) - (*((s32 *) (((u8 *) p) + 0x2c)));
    if (d >= 0x1069)
    {
      *((s32 *) p) |= 0x10000000;
      return;
    }
    *((s32 *) p) |= 0x18000000;
    if (d < 0x834)
    {
      *((s32 *) p) |= 0x04000000;
    }
    return;
  }
  zero:
  *((s32 *) p) = a1 | 0x0c000000;

  return;
  new_var = p;
  one:
  *((s32 *) new_var) = a1 | 0x10000000;

}

s32 *func_80167848_ovl_17(void *p);
s32 func_80166F04_ovl_17(void *p, s32 arg);
