static inline int inline_fn(u8 *arg0, s32 arg1, int arg2)
{
  return arg0[arg1 - arg2] * 2;
}

void func_8016FDA0_ovl_07(void)
{
  u16 *new_var5;
  int new_var3;
  s32 *new_var4;
  int new_var2;
  s32 new_var;
  typedef struct 
  {
    u8 b[0x24];
  } A;
  typedef struct 
  {
    u8 b[0x24];
  } O;
  typedef struct 
  {
    u8 b[0xA8];
  } G;
  extern A D_8017171C_ovl_07;
  extern u8 D_801722BC_ovl_07[];
  extern u8 D_801717C0_ovl_07[];
  extern u8 D_80171C18_ovl_07[];
  extern G D_801719FC_ovl_07;
  extern G D_800DF650_ovl_01;
  extern void func_80043650_ovl_01(void);
  extern s32 func_8004500C_ovl_01(s32, O *, s32, s16);
  O o;
  volatile unsigned char f = D_801719FC_ovl_07.b[0xA4] | ((D_801719FC_ovl_07.b[0x9C] & 12) ? (0x2E) : (0x2C));
  s32 i;
  o.b[0x1A] = 0;
  for (i = 10; i; i--)
  {
    u8 *t = D_801717C0_ovl_07 + (5 * inline_fn(D_801722BC_ovl_07, i, 1));
    u16 *x = (u16 *) (&D_8017171C_ovl_07.b[2 * (i - 1)]);
    u16 *y = (u16 *) (&D_8017171C_ovl_07.b[2 * (i - 1)]);
    s32 p = t[4] + t[6];
    s32 q = t[5] + t[new_var2 = 7];
    s32 r = (*x) + t[8];
    s32 z = (*y) + t[9];
    func_80043650_ovl_01();
    o.b[0] = f;
    if (o.b[2])
    {
      o.b[2] = (o.b[2] - 1) * 2;
    }
    *((u16 *) (o.b + 4)) = *x;
    *((u16 *) (o.b + 6)) = *y;
    o.b[8] = t[4];
    o.b[9] = t[5];
    new_var3 = (*((u16 *) (2 + t))) * 8;
    *((u16 *) (o.b + 12)) = r;
    *((u16 *) (o.b + 10)) = new_var3;
    o.b[16] = p;
    *((u16 *) (o.b + 14)) = *y;
    o.b[17] = t[5];
    new_var4 = (s32 *) (D_80171C18_ovl_07 + ((((*((u16 *) (o.b + 18))) - 136) >> 1) * 4));
    *((u16 *) (o.b + 18)) = (*((u16 *) t)) + 128;
    new_var = *new_var4;
    *((u16 *) (o.b + 20)) = *x;
    new_var5 = (u16 *) (o.b + 20);
    *((u16 *) (o.b + 22)) = z;
    *new_var5 = *x;
    o.b[32] = p;
    o.b[25] = q;
    *((u16 *) (o.b + 28)) = r;
    *((u16 *) (o.b + 30)) = z;
    o.b[33] = q;
    o.b[24] = t[4];
    o.b[3] = 4;
    *((s32 *) (o.b + 36)) = new_var;
    D_800DF650_ovl_01.b[0x204] = func_8004500C_ovl_01(*((s32 *) (D_800DF650_ovl_01.b + 0x204)), &o, 0, z);
  }

}

