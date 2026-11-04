extern s32 D_800C5680_ovl_01;
extern s32 D_800E91F0_ovl_01;
void func_800269B8_ovl_01(s32);
void func_80026948_ovl_01(s32);
void func_80026AC0_ovl_01(void);
void func_80025D80_ovl_01(void);
s32 func_8004F57C_ovl_01(void *, void *);
void func_8004F514_ovl_01(void *a, void *b, s32 c, s32 d);
s32 func_8004F7A4_ovl_01(void *a, void *b, s32 c, s32 d);
extern u8 D_800B8B40_ovl_01[];
void func_8004F9EC_ovl_01(void)
{
  u32 b = *((u32 *) (D_800B8B40_ovl_01 - (-4)));
  volatile u32 x[2];
  b = 1;
  x[0] = b;
  x[b] = b;
}

