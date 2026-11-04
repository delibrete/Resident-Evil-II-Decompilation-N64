typedef struct Ctx Ctx;
typedef struct Dst Dst;
typedef struct Src Src;
struct Ctx
{
  Dst *dst;
  u8 pad[0x1C];
  s32 mode;
  s32 state;
  s32 phase;
  s32 x2C;
  s32 x30;
  u8 p34[4];
  f64 value;
  s32 x40;
  s32 x44;
  s32 x48;
  s32 x4C;
  s32 x50;
  s32 x54;
  s32 x58;
  u8 p5c[0x18];
  s32 x74;
  u8 p78[0x38];
  Src *src;
  u8 pb4[0x38];
  s32 ec;
  u8 pf0[8];
  s32 f8;
  u8 fc;
};
struct Dst
{
  u8 p0[4];
  void (*cb)(Ctx *, s32);
  s32 a8;
  u8 p0c[8];
  s32 p14;
  s32 p18;
  s32 p1c[0x34];
};
struct Src
{
  s32 a;
  u8 p4[0x4c];
  s32 b;
  u8 p54[0x4c];
  s32 c;
};
extern f64 D_800B6AC0_ovl_01;
void func_800285AC_ovl_01(Ctx *p)
{
  s32 m = p->mode;
  Dst *d;
  Src *s;
  switch (m)
  {
    case 1:
      p->state = m;
      p->phase = m;
      break;

    case 3:
      if (p->ec)
    {
      p->state = m;
    }
    else
      if (p->f8)
    {
      if (p->fc == 0)
      {
        p->state = 2;
      }
      else
        if (p->fc == 1)
      {
        p->state = 2;
      }
      else
      {
        p->dst->p14 = 0x66;
        p->dst->p18 = p->fc;
        p->dst->cb(p, -1);
        p->state = 3;
      }
    }
    else
    {
      s = p->src;
      if (((s->a == 1) && (s->b == 2)) && (s->c == m))
      {
        p->state = m;
      }
      else
        if (((s->a != 0x52) || (s->b != 0x47)) || (s->c != 0x42))
      {
        p->dst->p18 = s->a;
        *((s32 *) (((u8 *) p->dst) + 0x1c)) = s->b;
        *((s32 *) (((u8 *) p->dst) + 0x20)) = s->c;
        p->dst->p14 = 0x63;
        p->dst->cb(p, 1);
        p->state = 3;
      }
      else
      {
        p->state = 2;
      }
    }
      p->phase = 2;
      break;

    case 4:
      if (p->f8 && (p->fc != 0))
    {
      if (p->fc != 2)
      {
        p->dst->p14 = 0x66;
        p->dst->p18 = p->fc;
        p->dst->cb(p, -1);
      }
      p->state = 5;
    }
    else
    {
      p->state = m;
    }
      p->phase = 4;
      break;

    default:
      p->state = 0;
      p->phase = 0;
      break;

  }

  p->x4C = 2;
  p->x2C = 1;
  p->x30 = 1;
  p->x40 = 0;
  p->x44 = 0;
  p->x48 = 1;
  p->x50 = 0x100;
  p->x74 = 0;
  p->x54 = 1;
  p->x58 = 0;
  p->value = D_800B6AC0_ovl_01;
}

