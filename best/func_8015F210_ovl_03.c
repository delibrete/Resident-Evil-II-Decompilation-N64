extern s32 func_800439B8_ovl_01(s32, void *, s32, s32);
extern u8 D_800C7650_ovl_01[];
extern u8 D_800DF650_ovl_01[];
extern u8 D_8016040C_ovl_03[];
extern u16 D_80160B94_ovl_03[];
extern u8 D_80160B9C_ovl_03[];
extern u8 D_80160BB8_ovl_03[];
void func_8015F210_ovl_03(s32 arg0)
{
  s32 sp10;
  s32 sp14;
  s32 *new_var;
  s32 sp18;
  s32 sp1C;
  s32 sp20;
  s32 s0;
  s32 s1 = 0;
  s32 t1;
  s32 a2off = 0x4B0;
  s32 a1off = 0x2D0;
  s32 count;
  s32 idx;
  s32 j;
  u16 *a2;
  u8 *base;
  u8 *t0;
  u8 *d;
  u8 *p;
  u8 *q;
  u8 v;
  sp10 = *((s32 *) (&D_8016040C_ovl_03[0]));
  sp14 = *((s32 *) (&D_8016040C_ovl_03[4]));
  sp18 = *((s32 *) (&D_8016040C_ovl_03[8]));
  sp1C = *((s32 *) (&D_8016040C_ovl_03[12]));
  sp20 = *((s32 *) (&D_8016040C_ovl_03[16]));
  a2 = D_80160B94_ovl_03;
  base = D_80160BB8_ovl_03;
  t0 = base - 0x1C;
  d = D_800DF650_ovl_01;
  do
  {
    s0 = 0;
    do
    {
      p = base + (((*a2) + s0) * 0x28);
      v = t0[0xB];
      s0++;
      p[2] = v;
      p[1] = v;
      p[0] = v;
    }
    while (((s8) s0) == 0);
    s1++;
    a2++;
  }
  while (s1 < 4);
  count = 0;
  s0 = 0;
  do
  {
    t1 = 0;
    if (!arg0)
    {
      idx = d[0x538];
      p = (D_80160B9C_ovl_03 + (idx * 0x14)) + a2off;
      *((s16 *) (&p[0x26])) = 0x100;
      if (!s0)
      {
        p = D_80160B9C_ovl_03 + (idx * 0x14);
        *((s16 *) (&p[0x2F6])) = 0;
      }
      else
      {
        p = (D_80160B9C_ovl_03 + (idx * 0x14)) + (*(new_var = &a1off));
        *((s16 *) (&p[0x26])) = 0x100;
      }
    }
    else
    {
      idx = d[0x538];
      p = (D_80160B9C_ovl_03 + (idx * 0x14)) + (*new_var);
      *((s16 *) (&p[0x26])) = 0x100;
      if (!s0)
      {
        p = D_80160B9C_ovl_03 + (idx * 0x14);
        *((s16 *) (&p[0x4D6])) = 0;
      }
      else
      {
        p = (D_80160B9C_ovl_03 + (idx * 0x14)) + a2off;
        *((s16 *) (&p[0x26])) = 0x100;
      }
      t1 = 1;
    }
    a2off += 0x28;
    s0++;
    a1off += 0x28;/*__repair_loop_weight*/do {
    count++;} while (0);
  }
  while (count < 2);
  for (j = 0; j < 2; j++)
  {
    s1 = j;
    p = base + (D_80160B94_ovl_03[t1] * 0x28);
    v = t0[0xB] + t0[7];
    p[2] = v;
    p[1] = v;
    p[0] = v;
    s0 = 0;
    do
    {
      q = base + ((D_80160B94_ovl_03[(unsigned short) s1] + s0) * 0x28);
      *((s32 *) (&d[0x204])) = func_800439B8_ovl_01(*((s32 *) (&d[0x204])), q, 0, 0);
      s0++;
    }
    while (((s8) s0) == 0);
  }

  *((s16 *) (&D_800C7650_ovl_01[0x1A])) = (D_800C7650_ovl_01[0x21962] & 3) << 5;
  q = D_800C7650_ovl_01 + 0x18204;
  *((s32 *) q) = func_800439B8_ovl_01(*((s32 *) q), &sp10, 0, 0);
}

