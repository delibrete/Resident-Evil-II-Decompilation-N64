s32 func_80166CD8_ovl_17(void *p, s32 a)
{
  s32 f = ((u8 *) p)[0x2cc];
  s32 ang = *((s32 *) (((char *) p) + 0x2c4));
  s32 v;
  int new_var2;
  s32 __repair_phase_v;
  int new_var;
  if (f & 1)
  {
    ;
    if (((s16) (((f << 10) + a) - 0x400)) == 0x400)
    {
      v = func_8006A81C_ovl_01(0);
      new_var2 = v + 0x9c4;
      new_var = (*((s32 *) (((char *) p) + 0x28))) < new_var2;
      return new_var;
    }
    v = func_8006A81C_ovl_01(2, ang);
    return (v - 0x9c4) < (*((s32 *) (((char *) p) + 0x28)));
  }
  __repair_phase_v = (s16) a;
  if (__repair_phase_v == 0x400)
  {
    v = func_8006A81C_ovl_01(3, ang);
    return (v - 0x9c4) < (*((s32 *) (((char *) p) + 0x30)));
  }
  v = func_8006A81C_ovl_01(1, ang);
  return (*((s32 *) (((char *) p) + 0x30))) < (v + 0x9c4);
}

