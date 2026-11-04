s32 func_80089D34_ovl_01(void *, s32, s32, s32);
void func_800334F8_ovl_01(void *, s32, s32, s32);
void func_80032B8C_ovl_01(void *, s32);
void func_80162F18_overlay_026(void *);
extern u8 D_800C7650_ovl_01[];
void func_80162DE0_ovl_26(void *p, s32 a1, s32 a2)
{
  u8 *x = p;
  u8 *new_var;
  if (x[7] == 0)
  {
 do { x[7] = 1; x[0x25c] |= 2; *((s32 *) (x + 0x1e8)) = ((7 + ((*((u8 *) (x + 0x2cd))) * 0xd)) << 24) + 0x3f00; { func_800334F8_ovl_01(p, a1, a2, 0); } do { func_80089D34_ovl_01(p, a1, a2, 0x40); } while (0); *((u16 *) (D_800C7650_ovl_01 + 0x19a78)) &= 0xffbf; *((s32 *) x) &= ~4; } while (0);
    new_var = x;
    *((u8 *) (new_var + 0x2b6)) = 1;
  }
  else
  {
    func_800334F8_ovl_01(p, a1, a2, 0);
    if (func_80089D34_ovl_01(p, a1, a2, 0x40))
    {
      func_80162F18_overlay_026(p);
    }
    else
    {
      func_80032B8C_ovl_01(p, 0);
    }
  }
  *((u16 *) (0x130 + new_var)) -= *((u16 *) (new_var + 0x1e0));
}
