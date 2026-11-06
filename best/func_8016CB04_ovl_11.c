typedef struct X
{
  u8 p[0x66];
  u16 ang;
  u8 q[0x1e8 - 0x68];
  u32 x1e8;
  u8 x1ec[8];
  u16 speed;
  u8 r[0x25c - 0x1f6];
  u8 flags;
} X;
extern s32 func_80033634_ovl_01(void);
extern void func_800377B0_ovl_01(s32, s16, s32, s16 *);
extern s32 func_8003334C_ovl_01(void *, s32, s32, s32);
extern s32 func_80089D34_ovl_01(void *, s32, s32, s32);
extern void func_80077B0C_ovl_01(s32, s32);
extern void func_80052D40_ovl_01(s32, s32, s32, s32);
extern void func_80052C9C_ovl_01(s32, s32, s32);
extern void func_80052C00_ovl_01(s32, s32);
inline static u8 inline_fn(u8 *arg0)
{
  return arg0[6];
}

inline static u8 inline_fn2(u8 *arg0)
{
  return inline_fn(arg0);
}

void func_8016CB04_ovl_11(X *a, s32 b, s32 c)
{
  int new_var3;
  volatile unsigned long long new_var4;
  u8 new_var5;
  volatile unsigned int new_var2;
  volatile unsigned long long new_var6;
  int new_var;
  new_var5 = inline_fn2(a->p);
  switch (new_var5)
  {
    case 0:
      a->p[6] = 1;
      new_var2 = (new_var = 0x800);
      new_var6 = (new_var4 = new_var2);
      a->speed = new_var4;
      new_var3 = (unsigned long) new_var6;
      break;

    case 1:
      break;

    case 2:
      break;

    case 3:
      break;

    case 4:
      break;

    case 5:
      break;

    case 6:
      break;

  }

}

