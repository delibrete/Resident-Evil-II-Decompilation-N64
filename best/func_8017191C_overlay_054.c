/* identical to func_80164D8C_ovl_26 (matched), with its names changed by decompdecomp */
typedef void (*Fn)(void *);
typedef union 
{
  u64 q;
  struct 
  {
    u32 lo;
    u32 hi;
  } w;
} U64;
extern Fn D_80173E00_overlay_054[];
extern void func_80173554_overlay_054(void *);
extern void func_80173094_overlay_054(void *);
extern void func_800347E0_ovl_01(void *, s16);
extern void func_80173488_overlay_054(void *);
inline static u32 inline_fn(Fn *arg0)
{
  return (u32) arg0;
}

void func_8017191C_overlay_054(u8 *p)
{
  U64 b;
  Fn *tbl;
  s32 i = p[5] - 1;
  b.w.lo = inline_fn(D_80173E00_overlay_054);
  tbl = (Fn *) b.w.lo;
  tbl[i](p);
  func_80173554_overlay_054(p);
  func_80173094_overlay_054(p);
  func_800347E0_ovl_01(p, (s16) ((*((u16 *) (p + 0x66))) + (p[0x2CD] << 11)));
  func_80173488_overlay_054(p);
}

