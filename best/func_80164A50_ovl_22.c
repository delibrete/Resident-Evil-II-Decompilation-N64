typedef struct 
{
  unsigned char x[0x2D4];
} Obj;
static inline static static unsigned char inline_fn(Obj *arg0, volatile unsigned int arg1)
{
  return arg0->x[arg1];
}

int func_80164A50_ovl_22(Obj *p)
{
  unsigned char new_var4;
  int new_var5;
  volatile int new_var3;
  volatile unsigned int new_var2;
  new_var2 = (new_var5 = 6);
  new_var4 = inline_fn(p, new_var2);
  new_var5 = new_var4;
  new_var3 = new_var5;
  new_var4 = inline_fn(p, new_var2);
  switch (new_var3)
  {
    default:
      break;

    case 0:
      break;

    case 1:
      break;

  }

}

