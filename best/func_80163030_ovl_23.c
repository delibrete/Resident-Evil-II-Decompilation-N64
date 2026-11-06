s32 func_80032D44_ovl_01(s16, s16, s16, s16);
s32 func_80083800_ovl_01(s16, u16 *, u16 *);
extern u8 D_800E10D0_ovl_01[];
void func_80163030_ovl_23(void *p, u16 a)
{
  s16 dx;
  s16 dy;
  u16 x = a;
  u16 y = 0;
  s32 r;
  dx = 0;
  dy = 0;
  func_80083800_ovl_01(*((s16 *) (((u8 *) p) + 0x66)), &x, &dx);
  x += *((u16 *) (((u8 *) p) + 0x2a));
  *((s32 *) (D_800E10D0_ovl_01 + 0x28)) = (s16) x;
  *((s32 *) (D_800E10D0_ovl_01 + 0x30)) = (s16) y;
  y += ((S_func_80163254_ovl_33_arg0 *) p)->unk_32;
  r = func_80032D44_ovl_01(*(D_800E10D0_ovl_01 + 0x2a), *((s16 *) (D_800E10D0_ovl_01 + 0x32)), *((s16 *) (((u8 *) p) + 0x2a)), *((s16 *) (((u8 *) p) + 0x32)));
  *((s16 *) (D_800E10D0_ovl_01 + 0x66)) = r - 0x32;
}

void func_80163620_ovl_23(void *p);
