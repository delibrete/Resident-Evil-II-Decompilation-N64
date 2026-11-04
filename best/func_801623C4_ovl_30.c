typedef struct Obj
{
  unsigned char pad[0x2C4];
} Obj;
void func_801623C4_ovl_30(Obj *p, int a, int b)
{
  int new_var3;
  char new_var4;
  volatile long new_var;
  volatile short new_var2;
  new_var4 = (new_var2 = new_var || p);
  if (new_var4)
  {
    p->pad[new_var] = 1;
    new_var3 = 7;
    new_var = new_var3;
  }
  else
  {
    p->pad[new_var] = 1;
    new_var = new_var3;
  }
}

