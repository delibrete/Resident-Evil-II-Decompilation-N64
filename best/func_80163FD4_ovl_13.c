void func_80163FD4_ovl_13(void *arg0, void *arg1, void *arg2)
{
  int new_var2;
  unsigned short new_var;
  volatile unsigned char *p = arg0;
  short s = *((volatile short *) 0x800f9c72);
  new_var = s;
  s = 0x2b4;
  p[s] = new_var > 0;
  new_var2 = 6;
  switch (p[6])
  {
    case 2:
      p[0x2b7] = 3;
      p[6] = 3;
      break;

    case 1:
      p[0x2b7] = 2;
      p[new_var2] = 2;
      break;

    case 0:
      p[0x2b5] = 100;
      p[0x2b6] = 0;
      p[6] = 1;
      p[0x2b7] = 4;
      break;

    case 5:
      p[0x2b5] = 0;
      break;

    case 4:
      s = 6;
      p[0x2b7] = 5;
      p[s] = 5;
      break;

    case 3:
      p[0x2b7] = 4;
      p[s] = 4;
      break;

  }

}

