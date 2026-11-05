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
  int new_var3;
  A *obj;
  A *new_var2;
  s32 (*alloc)(void *, s32, s32);
  s32 new_var;
  obj = a->p;
  if (!obj)
  {
    alloc = a->alloc;
    new_var2 = (A *) alloc(0, new_var3 = 0, 0x28);
    obj = new_var2;
    a->p = obj;
  }
  obj = a->p;
  obj->x[8] = alloc(a, 0, 0xA000);
  obj->x[2] = (new_var = (s32) D_80028DE0_ovl_01);
  new_var3 = 4;
  obj->x[3] = (s32) func_80028DF0_ovl_01;
  obj->x[new_var3] = (s32) D_80028EB4_ovl_01;
  obj->x[5] = (s32) D_8002D00C_ovl_01;
  obj->x[6] = (s32) D_80028F2C_ovl_01;
  obj->x[7] = b;
  obj->x[1] = 0;
  obj->x[0] = new_var3;
}

void func_80029010_ovl_01(T *a, s32 b);
void func_8002907C_ovl_01(T *a, s32 b);
