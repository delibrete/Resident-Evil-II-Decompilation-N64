void func_8016C62C_ovl_11(void *arg0, void *arg1, void *arg2)
{
  volatile u8 *p = arg0;
  volatile int new_var2;
  volatile u8 *new_var;
  new_var = p;
  new_var2 = new_var[6];
  if (new_var2)
  {
    return;
  }
  *((volatile u32 *) new_var) |= 4;
  p[0x25c] |= 0x12;
}

