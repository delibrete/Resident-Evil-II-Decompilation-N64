static inline static static static s32 inline_fn(s32 arg0)
{
  return arg0;
}

static inline static static static s32 inline_fn2(s32 arg0)
{
  return inline_fn(arg0);
}

void func_8017C30C_ovl_02(s32 a)
{
  s32 new_var5[2];
  int new_var;
  s32 *new_var3;
  s32 new_var4;
  s32 *new_var2;
  if (new_var3)
  {
    new_var2 = &new_var5[1];
    new_var5[1] = inline_fn2((unsigned int) new_var4);
    new_var4 = a;
    new_var3 = new_var2;
  }
  else
  {
    new_var = 1;
    new_var4 = a;
    new_var5[new_var] = inline_fn2(new_var4);
    new_var3 = &new_var5[new_var];
  }
  if (new_var)
  {
    ;
    (void) new_var5[0];
 dummy_label_632964: ;
    new_var5[0] = *new_var3;
  }
}
