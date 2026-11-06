extern s32 D_80148B74;
extern s32 D_80148B78;
extern s16 D_801362C4_ovl_01[];
extern s32 D_801362C0_ovl_01;
f32 func_8000DB80(f32);
typedef struct S_vec3
{
  f32 x;
  f32 y;
  f32 z;
} S_vec3;
void func_800AAF10_ovl_01(void);
void func_800AB1EC_ovl_01(S_vec3 *p);
s16 func_800AB2D0_ovl_01(s32 arg0)
{
  int new_var;
  s16 *tab = D_801362C4_ovl_01;
  u32 a = arg0 & 0xFFF;
  s16 *new_var2;
  int new_var3;
  new_var3 = arg0 & 0x3FF;
  new_var = a < 0x400;
  if (new_var)
  {
    return tab[a];
  }
  if (a < 0x800)
  {
    new_var2 = &tab[(~arg0) & 0x3FF];
    return *new_var2;
  }
  if (a < 0xC00)
  {
    return -tab[new_var3];
  }
  return -tab[(new_var = ~arg0) & 0x3FF];
}

u32 func_800AB36C_ovl_01(void);
