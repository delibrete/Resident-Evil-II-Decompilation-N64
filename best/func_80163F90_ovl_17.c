typedef struct 
{
  u8 b[0x2E0];
} Obj;
extern s32 func_80040BE4_ovl_01(s32);
extern s32 func_80089D34_ovl_01(Obj *, s32, s32, s32);
extern void func_80032C08_ovl_01(Obj *, s32, s16);
extern void func_80032B8C_ovl_01(Obj *, s16);
extern void func_801678B8_ovl_17(Obj *);
extern s32 D_80167C90_ovl_17[];
extern u8 D_800C7650_ovl_01[];
void func_80163F90_ovl_17(Obj *a, s32 b, s32 c)
{
  int __repair_literal;
  s32 one = 1;
  s32 x = 0x270F;
  s32 v;
  s32 new_var2;
  s32 __repair_phase_v;
  Obj *new_var;
  s32 dz;
  Obj *p;
  if (a->b[6] == one)
  {
    goto q;
  }
  __repair_literal = 2;
  if (a->b[6] < __repair_literal)
  {
    if (!a->b[6])
    {
      goto z;
    }
    goto e;
  }
  if (a->b[6] == 2)
  {
    goto w;
  }
  goto e;
  new_var2 = D_80167C90_ovl_17[14];
  z:
  a->b[6] = one;

  if (a->b[0x2CC] & 1)
  {
    *((s16 *) (&a->b[0x1E0])) = 0;
    *((s16 *) (&a->b[0x1E2])) = 25;
  }
  else
  {
    *((s16 *) (&a->b[0x1E0])) = 25;
    *((s16 *) (&a->b[0x1E2])) = 0;
  }
  *((s16 *) (&a->b[0x1E4])) = 0;
  {
    s32 t0 = D_80167C90_ovl_17[8];
    s32 t1 = D_80167C90_ovl_17[9];
    s32 t2 = D_80167C90_ovl_17[10];
    s32 t3 = D_80167C90_ovl_17[11];
    *((s32 *) (&a->b[0x120])) = t0;
    *((s32 *) (&a->b[0x124])) = t1;
    *((s32 *) (&a->b[0x128])) = t2;
    *((s32 *) (&a->b[0x12C])) = t3;
  }
  {
    s32 t0 = D_80167C90_ovl_17[12];
    s32 t1 = D_80167C90_ovl_17[13];
    s32 t2 = new_var2;
    s32 t3 = D_80167C90_ovl_17[15];
    *((s32 *) (&a->b[0x130])) = t0;
    *((s32 *) (&a->b[0x134])) = t1;
    *((s32 *) (&a->b[0x138])) = t2;
    *((s32 *) (&a->b[0x13C])) = t3;
  }
  new_var = a;
  *((s32 *) (&a->b[0x1E8])) = 0x300;
  q:
  p = *((Obj **) (&a->b[0x2DC]));

  if (!p)
  {
    goto t;
  }
  v = 7;
  if (p->b[4] == v)
  {
    goto t;
  }
  __repair_phase_v = (*((s32 *) (&a->b[0x28]))) - (*((s32 *) (&p->b[0x28])));
  dz = (*((s32 *) (&a->b[0x30]))) - (*((s32 *) (&p->b[0x30])));
  x = func_80040BE4_ovl_01((__repair_phase_v * __repair_phase_v) + (dz * dz));
  if (p->b[0x2BE] != one)
  {
    x = 0x270F;
  }
  t:
  __repair_phase_v = x < 0x9C5;

  if (!__repair_phase_v)
  {
    a->b[6] = 2;
    *((s32 *) (&a->b[0x1E8])) = 0xE000300;
  }
  do
  {
    func_80089D34_ovl_01(a, b, c, 0x400);
  }
  while (0);
  goto e;
  w:
  func_80032C08_ovl_01(a, 0, *((s16 *) (&a->b[0x2C2])));

  if (!func_80089D34_ovl_01(a, b, c, 0x400))
  {
    goto e;
  }
  a->b[0x2BE] = one;
  *((s16 *) (&a->b[0x2B6])) = 0x800;
  if (a->b[0x2CC] & 1)
  {
    dz = *((u16 *) (&a->b[0x64]));
    dz = dz + 0x800;
  }
  else
  {
    dz = (*((u16 *) (&a->b[0x66]))) + 0x800;
  }
  *((s16 *) (&a->b[0x66])) = dz;
  *((s16 *) (&a->b[0x68])) = 0x800;
  new_var->b[0x2CE] = 0x96;
  *((s16 *) (&a->b[0x64])) = 0;
  *((s16 *) (&a->b[0x1E0])) = 0x4C9;
  *((s32 *) (&a->b[0x2C])) = (*((s32 *) (&a->b[0x2C]))) - 0x1DB;
  func_80032B8C_ovl_01(a, *((s16 *) (&a->b[0x2B6])));
  {
    s32 t0 = D_80167C90_ovl_17[0];
    s32 t1 = D_80167C90_ovl_17[1];
    s32 t2 = D_80167C90_ovl_17[2];
    s32 t3 = D_80167C90_ovl_17[3];
    *((s32 *) (&a->b[0x120])) = t0;
    *((s32 *) (&a->b[0x124])) = t1;
    *((s32 *) (&a->b[0x128])) = t2;
    *((s32 *) (&a->b[0x12C])) = t3;
  }
  {
    s32 t0 = D_80167C90_ovl_17[4];
    s32 t1 = D_80167C90_ovl_17[5];
    s32 t2 = D_80167C90_ovl_17[6];
    s32 t3 = D_80167C90_ovl_17[7];
    *((s32 *) (&a->b[0x130])) = t0;
    *((s32 *) (&a->b[0x134])) = t1;
    *((s32 *) (&a->b[0x138])) = t2;
    *((s32 *) (&a->b[0x138])) = t2;
    *((s32 *) (&a->b[0x13C])) = t3;
  }
  *((s16 *) (&a->b[0x134])) = 0;
  *((s32 *) (&a->b[4])) = 0x1000000;
  a->b[0x2D2] = 0;
  *((u16 *) (&D_800C7650_ovl_01[0x19A78])) &= 0xFFDF;
  a->b[0x2C1] = 0;
  e:
  func_801678B8_ovl_17(a);

}

