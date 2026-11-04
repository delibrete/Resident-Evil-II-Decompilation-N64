static inline static s16 __repair_inline(s16 a)
{
  return a;
}

s32 func_80032B8C_ovl_01(void *, s32);
s32 func_80033634_ovl_01();
s32 func_80089D34_ovl_01(void *, s32, s32, s32);
extern u8 D_800C7650_ovl_01[];
void func_801628EC_ovl_36(void *p, s32 a1, s32 a2)
{
  int __repair_constant = 0x1000;
  u8 *q = ((u8 *) p) + 0x2b4;
  u16 n;
  void *new_var;
  u16 x;
  s16 amount;
  s16 __repair_result_amount;
  if ((*(((u8 *) p) + 6)) == 0)
  {
    *(((u8 *) p) + 6) = 1;
    *((s16 *) (((u8 *) p) + 0x1e0)) = 2;
    *((s16 *) (((u8 *) p) + 0x1e4)) = 0;
    *((s16 *) (((u8 *) p) + 0x1e2)) = 0;
    amount = (func_80033634_ovl_01() & 1) ? (2) : (-2);
    *((s16 *) (q + 6)) = amount;
    *((u16 *) (((u8 *) p) + 0x1f4)) = __repair_constant;
  }
  *((u16 *) (((u8 *) p) + 0x66)) += *((s16 *) (q + 6));
  func_80032B8C_ovl_01(p, 0);
  func_80089D34_ovl_01(p, a1, a2, 0x80);
  amount = (*((u16 *) (((u8 *) p) + 0x1f4))) - 2;
  n = amount;
  *((u16 *) (((u8 *) p) + 0x1f4)) = n;
  if (((s16) n) < 0)
  {
    __repair_result_amount = __repair_inline(*((s16 *) (q + 6)));
    amount = -amount;
    *((s16 *) (q + 6)) = amount;
    *((u16 *) (((u8 *) p) + 0x1f4)) = __repair_constant;
  }
  if ((*((u16 *) ((D_800C7650_ovl_01 + 0x18000) + 0x1c2a))) == 0x11)
  {
    x = *((u16 *) (((u8 *) p) + 0x2e));
    *((s16 *) (((u8 *) p) + 0x134)) = x;
    new_var = p;
    *((s16 *) (((u8 *) new_var) + 0x13a)) = -x;
  }
  else
  {
    *((s16 *) (((u8 *) new_var) + 0x134)) = -0xc8;
    *((s16 *) (((u8 *) new_var) + 0x13a)) = 0xc8;
  }
}

