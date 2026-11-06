/* identical to func_801659C8_overlay_026 (matched), with its names changed by decompdecomp */
s32 func_80171E20_overlay_054(void *, s32, s32);
s32 func_8017212C_overlay_054(void *, s32, s32);
s32 func_801721D0_overlay_054(void *, s32, s32);
s32 func_80172830_overlay_054(void *);
typedef struct 
{
  u8 pad[0x18000];
  u8 x[0x1a78];
  u16 flags;
} Big;
extern Big D_800C7650_ovl_01;
static inline s16 inline_fn(u16 arg0)
{
  return (s16) arg0;
}

void func_80172558_overlay_054(void *p, s32 a, s32 b)
{
  u8 *new_var;
  u8 *q = ((u8 *) p) + 0x2b4;
  u16 t;
  if (q[0x25] == 0)
  {
    if ((*(((u8 *) p) + 6)) == 0)
    {
      func_80171E20_overlay_054(p, 3, 6);
      func_80171E20_overlay_054(p, 3, 6);
      *((s32 *) p) &= ~4;
      func_8017212C_overlay_054(p, a, b);
      D_800C7650_ovl_01.flags &= 0xffbf;
      goto init;
    }
    else
    {
      func_801721D0_overlay_054(p, a, b);
    }
  }
  else
    if ((*(new_var = ((u8 *) p) + 6)) == 0)
  {
    *(((u8 *) p) + 6) = 1;
    *((u16 *) (((u8 *) p) + 0x1f4)) = 0x78;
    func_80171E20_overlay_054(p, 3, 6);
    func_80171E20_overlay_054(p, 3, 6);
    init:
    q[0xd] = 7;

    q[0xf] = 3;
    *((u16 *) (q + 0x20)) = 1;
  }
  else
  {
    t = (*((u16 *) (((u8 *) p) + 0x1f4))) - 1;
    *((u16 *) (((u8 *) p) + 0x1f4)) = t;
    if (inline_fn(t) == 0)
    {
      *((s32 *) (((u8 *) p) + 4)) = 0x7000000;
    }
  }
  func_80172830_overlay_054(p);
}

