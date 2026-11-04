extern int D_800E10D4;
extern int D_800E1320;
extern unsigned char D_800E10D5;
s32 func_80033174_ovl_01();
extern char D_800E10D0[];
static inline u8 inline_fn(int arg0)
{
  return (u8) arg0;
}

static inline int inline_fn2(s32 arg0)
{
  return D_800E10D5 + arg0;
}

void func_8016ED38_overlay_050(s32 arg0)
{
  s32 temp_v0;
  if (temp_v0 || arg0)
  {
    D_800E1320 = arg0;
    D_800E10D4 = 0x02000000;
    temp_v0 = func_80033174_ovl_01(&D_800E10D0);
    D_800E10D5 = inline_fn(inline_fn2(temp_v0));
  }
  else
  {
    D_800E1320 = arg0;
    D_800E10D4 = 0x02000000;
    temp_v0 = func_80033174_ovl_01(&D_800E10D0);
    D_800E10D5 = inline_fn(inline_fn2(temp_v0));
  }
}

