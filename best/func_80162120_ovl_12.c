extern s32 func_80032B8C_ovl_01(void *, s32);
extern s32 func_80032DEC_ovl_01(void *, s16, s16, s32);
extern s32 func_80033634_ovl_01(void *);
extern s32 func_80065400_ovl_01(void *, s32, u8, s32);
extern s32 func_80089D34_ovl_01(void *, s32, s32, s32);
extern s32 func_80166458_ovl_12(void *);
extern s32 func_80166900_ovl_12(void *, s32, s32);
extern u8 func_80166C00_ovl_12[];
s32 func_80162120_ovl_12(void *a, s32 b, s32 c)
{
  int new_var2;
  char *__repair_addr;
  s32 r = 0;
  u8 st = *((u8 *) (((u8 *) a) + 6));
  int new_var;
  u8 *x = ((u8 *) a) + 0x2b4;
  switch (st)
  {
    __repair_addr = (char *) (((u8 *) a) + 0x1e0);
    case 0:
      *((s16 *) __repair_addr) = 30;
      *((u8 *) (((u8 *) a) + 6)) = 1;
      *((s16 *) (((u8 *) a) + 0x1e4)) = 0;
      *((u8 *) (((u8 *) a) + 0x25c)) |= 2;
      new_var = (*((u32 *) a)) & 0xefffffff;
      *((u32 *) a) = new_var | 0x4000000;
      x[1] = 0;
      x[0x15] = 0;
      *((u8 *) (((u8 *) a) + 0x26f)) &= 0x7f;
      break;

    case 1:
      func_80032B8C_ovl_01(a, 0);
      if ((*((u32 *) (((u8 *) a) + 0x1ac))) & 1)
    {
      u8 v = (func_80033634_ovl_01(a) & 0x1f) ? (3) : (2);
      *((u8 *) (((u8 *) a) + 6)) = v;
      new_var2 = 0x2b4;
      *((u8 *) (((u8 *) a) + new_var2)) = func_80065400_ovl_01(a, 0, v, 0);
      if ((*((u8 *) (((u8 *) a) + 6))) == 2)
      {
        *((u16 *) (((u8 *) a) + 0x1f6)) = 90;
        *((s32 *) (((u8 *) a) + 0x1e8)) = 0xf00;
      }
    }
      break;

    case 2:
    {
      u16 v = --(*((u16 *) (((u8 *) a) + 0x1f6)));
      if ((v << 16) == 0)
      {
        *((u8 *) (((u8 *) a) + 6)) = 3;
        *((s32 *) (((u8 *) a) + 0x1e8)) = 0x1000f00;
      }
      break;
    }

    case 3:
      r = func_80065400_ovl_01(a, 0, x[0], 1) & 255;
      do
    {
      func_80032DEC_ovl_01(a, *((s16 *) (((u8 *) a) + 0x260)), *((s16 *) (((u8 *) a) + 0x262)), 16);
    }
    while (0);
      new_var = !((*((u32 *) (((u8 *) a) + 0x1ac))) & 1);
      do { func_80032B8C_ovl_01(a, 0); } while (0);
      if (new_var)
    {
      *((u8 *) (((u8 *) a) + 6)) = 1;
    }
      break;

  }

  func_80089D34_ovl_01(a, b, c, 0x100);
  func_80166458_ovl_12(a);
  if ((x[7] == 0) && (!(func_80033634_ovl_01(a) & 0x3f)))
  {
    x[7] = func_80166C00_ovl_12[func_80033634_ovl_01(a) & 7];
  }
  func_80166900_ovl_12(a, 4, 6);
  return r;
}

