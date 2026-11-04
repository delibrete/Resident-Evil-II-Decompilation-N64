extern u8 D_801856B4_ovl_02[];
extern s32 D_801856C0_ovl_02;
extern s32 D_801856D4_ovl_02;
extern s32 D_801856DC_ovl_02;
extern s32 D_801856E0_ovl_02;
extern s32 D_80185720_ovl_02;
extern s32 D_80186C14_ovl_02;
void func_8017EE54_ovl_02(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4)
{
  s32 t0 = D_801856C0_ovl_02 + ((a4 == 0) ? (0x80) : (0));
  s32 t1 = 0;
  s32 step = 0;
  s32 base = 0;
  s32 dx;
  u8 *dst;
  s16 *src;
  s32 i;
  s32 j;
  s32 v;
  if (a0 >= 4)
  {
    t1 = (a0 & 1) + 1;
  }
  if (t1 == 0)
  {
    s32 d = D_801856D4_ovl_02;
    if (D_80185720_ovl_02 == 3)
    {
      if (a3)
      {
        step = d * 2;
        base = ((d * (a2 + ((a0 & 2) >> 1))) + a1) + D_801856B4_ovl_02;
      }
      else
      {
        step = d;
        base = ((d * (a2 + ((a0 & 2) * 4))) + a1) + D_801856B4_ovl_02;
      }
    }
    else
    {
      step = d * 2;
      base = (D_801856B4_ovl_02 + (step * (a2 + ((a0 & 2) * 4)))) + a1;
    }
    dx = (a0 & 1) * 8;
  }
  else
  {
    if (D_801856DC_ovl_02 != 3)
    {
      a1 >>= 1;
    }
    if (D_801856DC_ovl_02 == 1)
    {
      a2 >>= 1;
    }
    if ((D_80185720_ovl_02 != 3) || (!a3))
    {
      step = D_801856E0_ovl_02;
      base = D_801856B4_ovl_02 + (t1 * 4);
    }
    else
    {
      step = D_801856E0_ovl_02 * 2;
      base = D_801856B4_ovl_02 + (t1 * 4);
    }
    base += (step * (a2 + ((a0 & 2) * 4))) + a1;
 do { dx = a0 & 8; } while (0);
  }
  dst = (u8 *) (base + dx);
  src = (s16 *) ((D_80186C14_ovl_02 + (a0 << 7)) + 0x438);
  for (; 0 < 8; i++)
  {
    for (j = 0; j < 8; j++)
    {
      v = src[j * 8] + dst[j * step];
      dst[j * step] = (u8) (t0 + v);
    }

    src += 8;
    dst += step;
  }

}
