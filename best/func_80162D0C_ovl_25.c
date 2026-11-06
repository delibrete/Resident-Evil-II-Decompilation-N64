extern u32 D_8016307C_ovl_25[];
void func_80162BA8_ovl_25(void *p);
s32 func_80033634_ovl_01();
s32 func_800377B0_ovl_01(s32, s16, s32, s16 *);
s32 func_80077D48_ovl_01(s32, void *);
extern u8 D_80162FA0_ovl_25[];
void func_80162BDC_ovl_25(void *p);
extern u8 D_80162FA0_ovl_25[];
inline static int inline_fn(s32 arg0)
{
  return (arg0 & 255) * 7;
}

void func_80162D0C_ovl_25(void *p, s32 a1, s32 a2)
{
  s32 i = 7;
  do
  {
    s32 idx = D_80162FA0_ovl_25[(inline_fn(a1) - 1) + (i & 255)];
    s32 *v = (s32 *) ((*((s32 *) (((u8 *) p) + 0x234))) + (idx * 0x178));
    idx = a2 & 255;
    if (idx)
    {
      *v |= 1;
    }
    else
    {
      *v &= ~1;
    }
    i--;
  }
  while (i & 255);
  if (a2 & 255)
  {
    *((s32 *) p) &= ~2;
  }
  else
  {
    *((s32 *) p) |= 2;
  }
}

