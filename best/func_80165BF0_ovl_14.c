typedef struct 
{
  u8 pad0[6];
  u8 state;
  u8 pad7[0x1f7];
} Obj;
static inline static static static static static int inline_fn(u8 arg0)
{
  return arg0 == 1;
}

volatile int func_80165BF0_ovl_14(Obj *p, s32 a1, s32 a2)
{
  int new_var3;
  u8 new_var4[2];
  int new_var;
  Obj *new_var2;
  Obj *new_var5;
  u8 new_var6;
  if (new_var2)
  {
    new_var5 = p;
    new_var2 = new_var5;
    new_var6 = new_var5->state;
    new_var4[0] = new_var6;
  }
  else
  {
    new_var2 = new_var5;
    new_var4[0] = new_var6;
  }
  if (inline_fn(new_var2->state))
  {
  }
  return;
  new_var3 = new_var2->state == 0;
  if (new_var3)
  {
    return;
  }
  new_var = 2;
  new_var4[1] = new_var2->state == 3;
  if (new_var4[0] == new_var)
  {
    return;
  }
  if (new_var4[1])
  {
    if (1)
    {
      return;
    }
  }
}

