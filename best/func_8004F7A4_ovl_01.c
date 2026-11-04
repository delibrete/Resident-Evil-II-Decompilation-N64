extern s32 D_800C5680_ovl_01;
extern s32 D_800E91F0_ovl_01;
void func_800269B8_ovl_01(s32);
void func_80026948_ovl_01(s32);
void func_80026AC0_ovl_01(void);
void func_80025D80_ovl_01(void);
s32 func_8004F57C_ovl_01(void *, void *);
void func_8004F514_ovl_01(void *a, void *b, s32 c, s32 d);
s32 func_8004F7A4_ovl_01(void *a, void *b, s32 c, s32 d)
{
  s32 dx = (*((s32 *) a)) - (*((s32 *) (((u8 *) b) + 0x120)));
  s32 dy = (*((s32 *) (((u8 *) a) + 8))) - (*((s32 *) (((u8 *) b) + 0x128)));
  u32 x = (*((u16 *) (((u8 *) b) + 0x12c))) + c;
  u32 y = (*((u16 *) (((u8 *) b) + 0x12e))) + c;
  s32 z;
  s32 new_var;
  s32 n;
  if (((u32) (x * 2)) < ((u32) (dx + x)))
  {
    return 0;
  }
  if (((u32) (y * 2)) < ((u32) (dy + y)))
  {
    return 0;
  }
  if (d == 0)
  {
    return 1;
  }
  new_var = *((s32 *) (((u8 *) b) - -0x124));
  z = (*((s32 *) (((u8 *) a) + 4))) - new_var;
  n = (*((u16 *) (((u8 *) b) + 0x13a))) - 1;
  if (((*((u16 *) (((u8 *) b) + 0x13a))) - 1) < 0)
  {
    if (1)
    {
      return 0;
    }
  }
  return ((u32) ((((*((u16 *) (((u8 *) b) + 0x13a))) - 1) * 2) + 1)) >= ((u32) (z + ((*((u16 *) (((u8 *) b) + 0x13a))) - 1)));
}

extern u8 D_800B8B40_ovl_01[];
void func_8004F9EC_ovl_01(void);
