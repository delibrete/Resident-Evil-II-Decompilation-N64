extern s32 D_800E10D0_ovl_01;
s32 func_8004D3D0_ovl_01(void *, void *);
inline static u8 *inline_fn(void *arg0)
{
  return (u8 *) arg0;
}

inline static s16 inline_fn2(s16 *arg0)
{
  return arg0[0];
}

void func_80166724_ovl_33(void *arg0)
{
  s16 d[3];
  u16 flag;
  void *p;
  p = *((void **) (inline_fn(arg0) + 0x234));
  *((s32 *) (inline_fn(arg0) + 0x120)) = *((s32 *) (((u8 *) p) + 0x1c4));
  *((s32 *) (((u8 *) arg0) + 0x124)) = *((s32 *) (((u8 *) p) + 0x1c8));
  *((s32 *) (((u8 *) arg0) + 0x128)) = *((s32 *) (inline_fn(p) + 0x1cc));
  *((s32 *) (((u8 *) arg0) + 0x140)) = *((s32 *) (inline_fn(p) + 0x4c));
  *((s32 *) (inline_fn(arg0) + 0x144)) = *((s32 *) (inline_fn(p) + 0x50));
  *((s32 *) (((u8 *) arg0) + 0x148)) = *((s32 *) (inline_fn(p) + 0x54));
  d[0] = (*((u16 *) (((u8 *) arg0) + 0x142))) - (*((u16 *) (inline_fn(arg0) + 0x122)));
  d[1] = (*((u16 *) (inline_fn(arg0) + 0x12)) = (*((u16 *) (((u8 *) arg0) + 0x146))) - (*((u16 *) (inline_fn(arg0) + 0x126))));
  d[2] = (*((u16 *) (((u8 *) arg0) + 0x14a))) - (*((u16 *) (inline_fn(arg0) + 0x12a)));
  *((u16 *) (((u8 *) arg0) + 0x10)) = inline_fn2(d);
  *((u16 *) (((u8 *) arg0) + 0x14)) = d[2];
  *((s32 *) (inline_fn(arg0) + 0x160)) = (d[0] >> 2) + (*((s32 *) (((u8 *) arg0) + 0x120)));
  *((s32 *) (inline_fn(arg0) + 0x164)) = (*((s32 *) (((u8 *) arg0) + 0x124))) + (d[1] >> 2);
  *((s32 *) (((u8 *) arg0) + 0x168)) = (*((s32 *) (inline_fn(arg0) + 0x128))) + (d[2] >> 2);
  *((s32 *) (inline_fn(arg0) + 0x180)) = (*((s32 *) (((u8 *) arg0) + 0x120))) + (inline_fn2(d) >> 1);
  *((s32 *) (((u8 *) arg0) + 0x184)) = (*((s32 *) (inline_fn(arg0) + 0x124))) + (d[1] >> 1);
  *((s32 *) (inline_fn(arg0) + 0x188)) = (*((s32 *) (inline_fn(arg0) + 0x128))) + (d[2] >> 1);
  *((s8 *) (inline_fn(arg0) + 0xd)) = -1;
  flag = *((u16 *) (((u8 *) arg0) + 0x2bc));
  *((u16 *) (((u8 *) arg0) + 0x2bc)) = flag & 0xfff9;
  flag = func_8004D3D0_ovl_01(&D_800E10D0_ovl_01, arg0);
  *((u16 *) (inline_fn(arg0) + 0x2bc)) |= flag * 2;
}

