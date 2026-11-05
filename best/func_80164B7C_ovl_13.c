extern s32 func_80033634_ovl_01(void);
extern void func_80035AAC_ovl_01_108(void *);
extern void func_80077D48_ovl_01(s32, void *);
extern s32 func_80089D34_ovl_01(void *, s32, s32, s32);
extern void func_80165BD8_ovl_13(void *, s32, s32);
extern void func_80166080_ovl_13(void *);
extern void func_80166158_ovl_13(void *, s32);
extern void func_80166214_ovl_13(void *, s32);
extern u32 jtbl_80166458_ovl_13[];
void func_80164B7C_ovl_13(u8 *p, s32 a1, s32 a2)
{
  unsigned int state = p[6];
  s16 *new_var;
  s32 x;
  s32 y;
  unsigned char new_var3;
  u8 *new_var2;
  s32 z;
  volatile s32 pad[2];
  if (state >= 6)
  {
    return;
  }
  switch (state)
  {
    case 0:
      func_80035AAC_ovl_01_108(p);
      func_80077D48_ovl_01(3, p);
      func_80166214_ovl_13(p, 100);
      *((s16 *) (p + 0x1f2)) = -1;
      func_80166080_ovl_13(p);
      y = func_80033634_ovl_01() & 3;
      func_80166158_ovl_13(p, y + 3);
      *((u32 *) (p + 0x1e8)) = 0x09000700;
      new_var = (s16 *) (p + 0x1e0);
      p[6] = 1;
      x = (s16) (*((u16 *) (p + 0x1e0)));
      y = (s16) (*((u16 *) (p + 0x1e4)));
      *new_var = x >> 1;
      *((s16 *) (p + 0x1e4)) = y >> 1;
      if (func_80089D34_ovl_01(p, a1, a2, 0x200))
    {
      p[6] = 2;
    }
      *((s32 *) (p + 0x28)) += *new_var;
      *((s32 *) (p + 0x2c)) += *((s16 *) (p + 0x1e2));
      *(p + 0x30) += *((s16 *) (p + 0x1e4));
      *((u16 *) (p + 0x1e2)) += 0x14;
      break;

    case 1:
      func_80089D34_ovl_01(p, a1, a2, 0x200);
      break;
      new_var2 = p + 0x1e4;

    case 2:
      func_80165BD8_ovl_13(p, 7, 2);
      break;

    case 3:
    {
      s32 z1 = *new_var;
      *((s32 *) (p + 0x28)) += z1;
      *((s32 *) (p + 0x30)) += *((s16 *) new_var2);
      new_var3 = 0x2b5;
      *new_var = (*new_var) >> 1;
      p[0x2b5]--;
      if (((u8) p[new_var3]) == 0xff)
      {
        *((u32 *) (p + 0x1e8)) = 0x0b000700;
        p[0x2b5] = 11;
        p[6] = 4;
      }
      break;
    }

    case 4:
      func_80089D34_ovl_01(p, a1, a2, 0x200);
      if ((--p[0x2b5]) == 0xff)
    {
      func_80165BD8_ovl_13(p, 7, 0);
    }
      break;

    case 5:
      func_80165BD8_ovl_13(p, 7, 2);
      break;

  }

}

