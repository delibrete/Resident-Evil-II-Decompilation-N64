void func_80171204_ovl_07(u32 *arg0, u32 *arg1)
{
  u16 *new_var;
  u32 x = 0;
  u32 dst = *arg0;
  u32 src = *arg1;
  u32 bit = 0;
  do
  {
    do
    {
      u16 v;
      u32 q = dst;
      if (x)
      {
        dst += 2;
        new_var = (u16 *) q;
        v = 1;
      }
      else
      {
        dst += 2;
        new_var = (u16 *) q;
        v = 1;
      }
      if (((*((u8 *) (src + x))) >> bit) & 1)
      {
        v = 0xFFFF;
      }
      *new_var = v;
      bit++;
    }
    while (bit < 8);
    x++;
    bit = 0;
  }
  while (x < 0x28);
  src += 0x28;
  *arg1 = src;
  *arg0 = dst;
}

