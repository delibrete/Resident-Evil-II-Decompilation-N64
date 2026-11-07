typedef s32 (*Fn0)(void);
typedef s32 (*Fn1)(void *, s32);
inline static u8 *inline_fn(void *arg0)
{
  return (u8 *) arg0;
}

s32 func_8002C8EC_ovl_01(void *a)
{
  s32 count;
  s32 n;
  u8 *p;
  s32 code;
  void **st;
  void **o;
  s32 (*cb0)(void);
  void *new_var;
  s32 (*cb1)(void *, s32);
  st = *((void **) (inline_fn(a) + 0x14));
  p = *((u8 **) st);
  new_var = st[3];
  count = ((s32 *) st)[1];
  if (count == 0)
  {
    cb0 = new_var;
    if (cb0() == 0)
    {
      return 0;
    }
    p = *((u8 **) st);
    count = ((s32 *) st)[1];
  }
  count--;
  code = p[0] << 8;
  p++;
  if (count == 0)
  {
    cb1 = st[3];
    if (cb1(a, 0) == 0)
    {
      return 0;
    }
    p = *((u8 **) st);
    count = ((s32 *) st)[1];
  }
  count--;
  code += p[0];
  p++;
  o = *((void ***) a);
  ((s32 *) o)[5] = 0x53;
  ((s32 *) o)[6] = *((s32 *) (((u8 *) a) + 0x160));
  ((s32 *) o)[7] = code;
  ((Fn1) ((void **) o)[1])(a, 1);
  ((u8 **) st)[0] = p;
  ((s32 *) st)[1] = count;
  ((Fn1) ((void **) st)[2])(a, code - 2);
  return 1;
}

