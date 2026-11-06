typedef void (*Fn)(void);
extern volatile Fn D_80167244_overlay_026[];
void func_801639A4_ovl_26(unsigned char *a)
{
  volatile Fn *new_var;
  volatile Fn *table = D_80167244_overlay_026;
  if (1)
  {
    table = &table[a[6]];
    new_var = table;
    (*new_var)();
    a[0x2D6] = 1;
  }
  a[0x2D7] = 1;
}

