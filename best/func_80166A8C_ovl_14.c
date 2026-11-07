void func_80166A8C_ovl_14(void *p)
{
  int new_var2;
  u16 a = *((u16 *) (((u8 *) p) + 0x2c8));
  void *new_var;
  u32 v;
  void *new_var3;
  new_var2 = 0x2cb;
  if (a & 0x40)
  {
    goto Z;
  }
  if (a & 0x200)
  {
    goto S7;
  }
  if (*((u32 *) (((u8 *) p) + 0x2bc)))
  {
    goto T;
  }
  if ((*((s32 *) (((u8 *) p) + 0x2c))) < (*((s16 *) (((u8 *) p) + 0x25e))))
  {
    goto T;
  }
  goto N;
  T:
  if (a & 0x80)
  {
    goto S5;
  }

  *(((u8 *) p) + 0x26e) = 2;
  return;
  N:
  v = func_80033174_ovl_01(p, *((u32 *) (((u8 *) p) + 0x2c4)));

  a = v & 255;
  new_var3 = p;
  switch (*(((u8 *) p) + new_var2))
  {
    case 2:
      if ((func_80033634_ovl_01() & 15) < 5)
    {
      goto S1;
    }
      if (!a)
    {
      goto S3;
    }
      break;

    default:
      goto C;

    case 1:
      if ((func_80033634_ovl_01() & 15) < 5)
    {
      goto S1;
    }
      if (a)
    {
      goto S4;
    }
      goto S3;

  }

  *((u16 *) (((u8 *) new_var3) + 0x26c)) = (*((u16 *) (((u8 *) p) + 0x26c))) | 0x20;
  goto S6;
  C:
  if (a)
  {
    *((u16 *) (((u8 *) p) + 0x26c)) |= 0x20;
  }
  else
  {
    *((u16 *) (((u8 *) p) + 0x26c)) &= 0xffdf;
  }

  S6:
  *(((u8 *) p) + 0x26e) = 6;

  return;
  new_var = p;
  Z:
  *(((u8 *) p) + 0x26e) = 0;

  return;
  S7:
  *(((u8 *) new_var) + 0x26e) = 7;

  return;
  S5:
  *(((u8 *) p) + 0x26e) = 5;

  S1:
  *(((u8 *) p) + 0x26e) = 1;

  return;
  return;
  S4:
  *(((u8 *) p) + 0x26e) = 4;

  return;
  S3:
  *(((u8 *) p) + 0x26e) = 3;

}

