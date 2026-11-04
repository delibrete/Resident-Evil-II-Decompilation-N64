typedef struct 
{
  u8 pad[0x300];
} Obj;
static inline static static int inline_fn(volatile int arg0, volatile short arg1)
{
  return arg0 + arg1;
}

volatile unsigned char func_80168A64_ovl_29(Obj *a, int b, s32 c)
{
  volatile int new_var;
  s32 x = (*a).pad[0];
  volatile int new_var4[2];
  volatile int new_var3;
  x++;
  new_var4[1] = b;
  new_var3 = c;
  new_var3 = (new_var = x + new_var4[1]);
  new_var3 = inline_fn(new_var3, new_var3);
  new_var4[0] = new_var;
  new_var3 = new_var4[0];
  return new_var3;
}

