typedef struct 
{
  u8 pad[0xC];
  s32 unkC;
  u32 unk10;
} S_work;
typedef struct 
{
  u8 pad0[0x170];
  S_work *unk170;
  u8 pad174[0xC];
  void *unk180;
  void *unk188;
} S_arg;
typedef void (*Cb1)(void *, s32, s32, void *, s32, s32 *, s32);
typedef void (*Cb2)(void *, s32, s32, s32);
void func_8002E670(S_arg *a, s32 b, s32 c, s32 d, volatile s32 e, s32 *f, s32 g)
{
  S_work *w = a->unk170;
  s32 tmp;
  s32 lim;
  s32 new_var;
  int new_var2;
  lim = (unsigned char) (g - (*f));
  new_var2 = 0;
  if (a->unk170->unk10 < lim)
  {
    lim = w->unk10;
  }
  tmp = new_var2;
  new_var = *f;
  (*((Cb1 *) (((u8 *) a->unk180) + 4)))(a, b, c, a->unk180, a->unk170->unkC, &tmp, lim);
  (*((Cb2 *) (((u8 *) a->unk188) + 4)))(a, a->unk170->unkC, e + (new_var * 4), tmp);
  *f += tmp;
}

