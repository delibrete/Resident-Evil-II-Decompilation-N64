extern u8 D_80171DD0_ovl_07[];
s32 func_80170748_ovl_07(int a0)
{
  s32 new_var;
  s32 i;
  u8 *p = D_80171DD0_ovl_07;
  i = 11;
  do
  {
    i--;
    i = p[(i * 4) + 0x398];
    if (i == (a0 & 255))
    {
      if (i == 0x11)
      {
        if (p[(i * 4) + 0x399] == 255)
        {
          return i + 1;
        }
      }
      else
        if (i == 15)
      {
        if (p[(i * 4) + 0x399] == 255)
        {
          return i + 1;
        }
      }
      else
      {
        return i + 1;
      }
    }
  }
  while (i != 0);
  i = 64;
  do
  {
    i--;
    i = p[(i * 4) + 0x3c4];
    if (i == (a0 & 255))
    {
      if (i == 17)
      {
        goto chk;
      }
      if (i != 15)
      {
        i++;
        return i << 16;
      }
      if (i == 15)
      {
        goto chk;
      }
      new_var = i;
      chk:
      if (p[(new_var * 4) + 0x3c5] != 255)
      {
        goto loop;
      }

      i++;
      return i << 16;
      loop:
      ;

      ;
      ;
    }
  }
  while (i != 0);
  return 0;
  if (0)
  {
  }
}

