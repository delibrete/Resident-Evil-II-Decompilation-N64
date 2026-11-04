typedef struct 
{
  u8 b[0x28c];
  s32 unk28c;
} X;
void func_80162238_ovl_19(X *p, s32 a, s32 b)
{
  char new_var6;
  long long new_var4;
  X *new_var3;
  volatile unsigned short x = p->unk28c;
  int new_var2;
  int *new_var5;
  int new_var;
  new_var5 = &new_var;
  new_var = 0x190;
  new_var2 = x < (*new_var5);
  new_var3 = p;
  new_var6 = new_var2;
  if (new_var6)
  {
    if (new_var5 || new_var6)
    {
      new_var4 = 1;
      new_var3->b[6] = new_var4;
    }
    else
    {
      new_var4 = 1;
      new_var3->b[6] = new_var4;
    }
  }
}

