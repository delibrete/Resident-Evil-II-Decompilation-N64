typedef struct 
{
  u8 pad[0x2BE];
  s8 x;
} Obj;
static inline s8 inline_fn(Obj *arg0)
{
  return arg0->x;
}

volatile unsigned char func_80162D40_ovl_20(Obj *p, s32 a, volatile unsigned short b)
{
  u16 *new_var;
  s32 x = inline_fn(p);
  int new_var2;
  int new_var3;
  if (x < 3)
  {
    p->x = x | 0x82;
  }
  if ((((s8) p->pad[0x2bc]) + 1) < (2 + 1))
  {
    p->pad[0x2bc] = 1;
  }
  new_var3 = 0;
  p->pad[0x2b9] = 15;
  x = p->pad[6] == new_var3;
  if (x)
  {
    new_var = (u16 *) (p->pad + 0x1f4);
    *((u32 *) (p->pad + 0x1e8)) = 0x04003f00;
    new_var2 = new_var3;
    p->pad[6] = 1;
    do
    {
      *new_var = new_var3;
      *((u16 *) (p->pad + 0x1f6)) = 0;
    }
    while (new_var2);
    p->pad[0x25c] |= 2;
  }
  return a + b;
}

