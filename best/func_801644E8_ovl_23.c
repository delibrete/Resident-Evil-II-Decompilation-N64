s32 func_80033174_ovl_01(void *);
s32 func_80032F24_ovl_01(void *, s32, s32);
s32 func_800385D4_ovl_01(s32, s32, s32, void *);
s16 func_80032D44_ovl_01(s16, s16, s16, s16);
extern u32 D_800E10D0_ovl_01;
extern u32 D_801664A8_ovl_12;
extern u32 D_800C7650_ovl_01;
void func_80162C78_ovl_23(void *a);
void func_80162CBC_ovl_23(void *a);
void func_80162E5C_ovl_23(void *a);
s16 func_80032D44_ovl_01(s16, s16, s16, s16);
s32 func_80036764_ovl_01(void *, s32, s32, s32);
static inline static u8 *inline_fn(u8 *arg0)
{
  return arg0;
}

void func_801644E8_ovl_23(void *a)
{
  u8 new_var2;
  int new_var;
  s16 z = func_80032D44_ovl_01(*((s16 *) (inline_fn((u8 *) (&D_800C7650_ovl_01)) + 0x19aaa)), *((s16 *) (((u8 *) (&D_800C7650_ovl_01)) + 0x19ab2)), *((s16 *) (((u8 *) a) + 0x2a)), *((s16 *) (((u8 *) a) + 0x32)));
  new_var2 = *(((u8 *) (&D_800C7650_ovl_01)) + 0x18538);
  if (!(*(((u8 *) a) + 6)))
  {
    if (new_var2 != 0)
    {
      func_80036764_ovl_01(a, 1, 3, 0);
    }
    if ((!a) && (new_var = !a))
    {
    }
    func_80032F24_ovl_01(a, z, 8);
  }
}

