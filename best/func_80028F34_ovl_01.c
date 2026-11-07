extern u8 D_80028DE0_ovl_01[];
extern u8 D_80028EB4_ovl_01[];
extern u8 D_8002D00C_ovl_01[];
extern u8 D_80028F2C_ovl_01[];
extern u8 D_8002907C_ovl_01[];
extern void func_80028DF0_ovl_01(void);
typedef struct 
{
  s32 x[9];
} A;
typedef struct 
{
  s32 f0;
  s32 (*alloc)(void *, s32, s32);
  s32 pad[2];
  A *p;
  u8 rest[0x154];
  A *state;
} T;
s32 func_80028F34_ovl_01(T *a, s32 b)
{
  int new_var4;
  int new_var3;
  int new_var5;
  A *new_var2;
  s32 (*alloc)(void *, s32, s32);
  s32 new_var;
  new_var2 = a->p;
  new_var4 = !new_var2;
  new_var5 = new_var4;
  if (new_var5)
  {
    alloc = a->alloc;
    new_var2 = (A *) alloc(0, new_var3 = 0, 0x28);
    new_var2 = new_var2;
  }
  a->p = new_var2;
  new_var2 = a->p;
  new_var2->x[8] = alloc(a, 0, 0xA000);
  new_var2->x[2] = (new_var = (s32) D_80028DE0_ovl_01);
  new_var3 = 4;
  new_var2->x[3] = (s32) func_80028DF0_ovl_01;
  new_var2->x[new_var3] = (s32) D_80028EB4_ovl_01;
  new_var2->x[5] = D_8002D00C_ovl_01;
  new_var2->x[6] = (s32) D_80028F2C_ovl_01;
  (*new_var2).x[7] = b;
  new_var2->x[1] = 0;
  new_var2->x[0] = new_var3;
}

void func_80029010_ovl_01(T *a, s32 b);
void func_8002907C_ovl_01(T *a, s32 b);
