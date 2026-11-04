extern s32 func_80089D34_ovl_01(s32, s32, s32);
extern s32 func_8008A974_ovl_01(s32, s32, s32);
s32 func_80036BB4(void *p, u8 a1, s8 a2, s32 a3);
extern s32 D_80139A20;
extern s32 D_80139A28;
extern s32 D_80139A30;
void func_80043490_ovl_01(s32 *a, s32 *b, s32 *c);
extern s32 D_800EFD34_ovl_01;
extern s32 D_800EFD3C_ovl_01;
extern s32 D_800EFD40_ovl_01;
extern s32 D_800EFD44_ovl_01;
void func_80043650_ovl_01(void);
extern void func_800439B8_ovl_01(void *, s32, s32);
void func_80043960_ovl_01(void *x, s32 *a1)
{
  volatile struct 
  {
    s32 a;
    s32 b;
    s32 c;
    s32 d;
    s32 e;
    u16 f;
    u16 g;
  } v;
  s32 *new_var3;
  s32 new_var7;
  s32 new_var2;
  s32 new_var6;
  s32 new_var;
  int new_var5;
  s32 new_var4;
  new_var3 = a1;
  new_var5 = 3;
  new_var2 = a1[new_var5];
  v.a = a1[0];
  new_var5 = (new_var = new_var3[2]);
  new_var7 = a1[4];
  new_var4 = (new_var4 = a1[1]);
  v.f = 8;
  v.b = new_var4;
  new_var6 = new_var7;
  v.c = new_var;
  v.e = new_var6;
  do
  {
    v.d = new_var2;
    v.g = 8;
    func_800439B8_ovl_01(&v, 0, 0);
  }
  while (0);
}

