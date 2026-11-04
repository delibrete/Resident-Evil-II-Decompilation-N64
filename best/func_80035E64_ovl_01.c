typedef struct Obj
{
  u8 pad[0x234];
  void *p234;
  void *p238[2];
} Obj;
extern s32 D_800C7650_ovl_01;
extern u8 D_800E90D8_ovl_01;
extern u8 D_800E90F8_ovl_01;
extern u8 D_800EB888_ovl_01;
void func_800362C0_ovl_01(void *);
s32 func_80036764_ovl_01(void *, s32);
s32 func_8004A358_ovl_01(s32);
void func_8004A0D8_ovl_01(void *);
s32 func_80035E64_ovl_01(Obj *a)
{
  volatile long new_var;
  void *p = a->p234;
  int new_var2;
  func_800362C0_ovl_01(a);
  func_80036764_ovl_01(a, (s32) p);
  new_var = 0x19a5c;
  new_var2 = ((*((u32 *) (new_var + ((u8 *) (&D_800C7650_ovl_01))))) & 0x10000) && func_8004A358_ovl_01(0);
  {
    a->p234 = a->p238[0];
    func_8004A0D8_ovl_01(a);
  }
  return 0;
  if (1)
  {
  }
}

