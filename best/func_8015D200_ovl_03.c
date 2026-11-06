extern u8 D_80160B9C_ovl_03[0x81c];
extern u8 D_80160BA2_ovl_03;
extern u8 D_80160B9F_ovl_03;
extern u32 D_80161488_ovl_03;
extern u8 D_800C7650_ovl_01[];
void func_80077B0C_ovl_01(float, s32);
void func_8015F4C8_ovl_03(s32);
void func_8015E2EC_ovl_03(s32, s32);
s32 func_80076074_ovl_01(s32);
s32 func_8015D200_ovl_03(void)
{
short __repair_constant = 2;

  u8 *a = D_80160B9C_ovl_03;
  u8 v = a[3];
  u8 *q;
  u16 *p;
  u8 st = v;
  if (v == 1)
  {
    goto state1;
  }
  if (v < 2)
  {
    a[10] = 128;
    a[8] = __repair_constant;
    a[9] = 0;
    a[11] = 0;
    a[7] = 0;
    D_80161488_ovl_03 = 0;
    a[3] = 1;
    v = 1;
  }
  state1:
  if (v == 1)
  {
    a[10] -= 16;
    v = ++a[9];
    a[11] += 16;
    if (v == 8)
    {
      a[10] = 0;
      a[11] = 128;
      a[3]++;
      goto done;
    }
    goto done;
  }

  if (v == 2)
  {
    p = (u16 *) ((D_800C7650_ovl_01 + 0x18000) + 0x25e);
    if (((*p) & 0x4000) && (!a[6]))
    {
      a[6]++;
      do
      {
        func_80077B0C_ovl_01(3.0f, 0);
      }
      while (0);
    }
    if ((*p) & 0x1000)
    {
      if (a[6])
      {
        a[6]--;
        do
        {
          func_80077B0C_ovl_01(3.0f, 0);
        }
        while (0);
      }
    }
    if (!D_80160BA2_ovl_03)
    {
      if ((*p) & 0x8000)
      {
        q = (D_800C7650_ovl_01 + 0x18000) + 0x539;
        if (*q)
        {
          do
          {
            *q = 0;
          }
          while (0);
          func_80077B0C_ovl_01(3.0f, 0);
        }
      }
      if ((*p) & 0x2000)
      {
        v = 0x18000;
        q = (D_800C7650_ovl_01 + v) + 0x539;
        if (!(*q))
        {
          do
          {
            *q = 1;
          }
          while (0);
          func_80077B0C_ovl_01(3.0f, 0);
        }
      }
    }
    a[7] += a[8];
    if (((u8) (a[7] - 1)) >= 0x30)
    {
      a[8] = -a[8];
    }
    q = D_800C7650_ovl_01 + v;
    p = q + 0x268;
    if ((*((u32 *) p)) & 0x2000)
    {
      func_80077B0C_ovl_01(4.0f, 0);
      a[3] = 3;
      q[0x539] = a[4];
    }
    if (((*((u32 *) p)) & 0x1000) || ((*((u32 *) (q + 0x258))) & 0x800))
    {
      func_80076074_ovl_01(q[0x539]);
      func_80077B0C_ovl_01((a[6]) ? (4.0f) : (6.0f), 0);
      D_80160B9F_ovl_03 = 3;
    }
  }
  if (st == 3)
  {
    a[7] = 0;
    D_80161488_ovl_03 = 0;
    a[10] += 16;
    a[9]--;
    a[11] -= 16;
    if (!a[9])
    {
      a[10] = 128;
      a[11] = 0;
      a[6] = __repair_constant;
      a[2] = 0;
      a[3] = 0;
    }
  }
  done:
  func_8015F4C8_ovl_03(D_80160BA2_ovl_03);

  func_8015E2EC_ovl_03(2, 2);
  return 0;
}

