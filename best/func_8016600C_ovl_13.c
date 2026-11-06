extern u8 D_800C7650_ovl_01[];
extern void *D_800E1390_ovl_01[];
void func_8016600C_ovl_13(u32 arg0)
{
  int new_var;
  void **p;
  new_var = 0x21;
  for (p = D_800E1390_ovl_01; p != (*((void ***) (D_800C7650_ovl_01 + 0x1828C))); p++)
  {
    u8 *q = *p;
    if (q[8] == new_var)
    {
      u16 v = *((u16 *) (q + 0x2C6));
      if (!(v & 4))
      {
        *((u16 *) (q + 0x2C6)) = v | arg0;
        q[0x2BC] = 0;
        q[0x2BB] = 0;
      }
    }
  }

}

