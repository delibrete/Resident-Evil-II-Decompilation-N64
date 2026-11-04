extern void *func_80004550(void *, s32);
extern s32 func_80004594(void *, s32);
extern void func_800045DC(void *, s32, s32, s32);
extern s32 D_8010B69C_ovl_01;
typedef struct 
{
  s32 unk0;
  s32 unk4;
  s32 unk8;
} Obj;
s32 func_8004CC24_ovl_01(Obj *p)
{
  u8 x[0x60];
  Obj *new_var;
  s32 out;
  new_var = p;
  if (new_var->unk4 != 0)
  {
    func_80004550(x, D_8010B69C_ovl_01);
    func_800045DC(x, new_var->unk0, new_var->unk8, new_var->unk4);
    out = *((s32 *) (x + 0x14));
    func_80004594(x, 2);
    return out;
  }
  else
  {
    return 0;
  }
}

