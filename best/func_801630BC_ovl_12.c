s32 func_80032B8C_ovl_01(void *, s32);
s32 func_80032C08_ovl_01(void *, s32, s32);
s32 func_80077D48_ovl_01(s32);
s32 func_80089D34_ovl_01(void *, s32, s32, s32);
s32 func_801664DC_overlay_012(void *p, void *, s32, s32);
s32 func_801630BC_ovl_12(void *p, s32 a, s32 b)
{
  s16 *new_var;
  s32 r;
  if ((*((u8 *) (((u8 *) p) + 7))) == 0)
  {
    func_80032C08_ovl_01(p, 0, 0);
    *((u16 *) (((u8 *) p) + 0x1e2)) += 0x28;
    if ((*((s32 *) (((u8 *) p) + 0x2c))) >= (*(new_var = (s16 *) (((u8 *) p) + 0x25e))))
    {
      s16 t = *((s16 *) (((u8 *) p) + 0x25e));
      r = (*((u32 *) p)) & 0xefffffff;
      *((u8 *) (((u8 *) p) + 7)) = 1;
      *((u8 *) (((u8 *) p) + 0x2b5)) = 0;
      *((s32 *) (((u8 *) p) + 0x2c)) = t;
      *((u32 *) p) = r | 0x04000000;
      func_80077D48_ovl_01(10);
    }
    if ((*((u8 *) (((u8 *) p) + 0x1e9))) != 8)
    {
      func_80089D34_ovl_01(p, a, b, 0x100);
    }
    return 0;
  }
  func_80032B8C_ovl_01(p, 0);
  func_801664DC_overlay_012(p, p, 0x40, 0xf0);
  r = func_80089D34_ovl_01(p, a, b, 0x100);
  if (r != 0)
  {
    r = 1;
  }
  else
  {
    r = 0;
  }
  return r;
}

