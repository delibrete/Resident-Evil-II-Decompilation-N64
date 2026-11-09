extern void func_800439B8_ovl_01(void *, s32, s32);

void func_80043960_ovl_01(void *x, s32 *a1)
{
  volatile struct {
    s32 a;
    s32 b;
    s32 c;
    s32 d;
    s32 e;
  } v;
  s32 p0;
  s32 p1;
  s32 p2;
  s32 p3;
  s32 p4;

  p0 = a1[0];
  p1 = a1[1];
  p2 = a1[2];
  p3 = a1[3];
  v.a = p0;
  v.b = p1;
  v.c = p2;
  v.d = p3;
  p4 = a1[4];
  v.e = p4;
  ((volatile u16 *)&v)[9] = 8;
  ((volatile u16 *)&v)[8] = 8;
  func_800439B8_ovl_01(&v, 0, 0);
}
