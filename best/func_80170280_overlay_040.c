s32 func_80032B8C_ovl_01(void *, s32);
s32 func_80032DEC_ovl_01(void *, s32, s32, s32);
s32 func_80089D34_ovl_01(void *, s32, s32, s32);
s32 func_80172FE8_overlay_040(void *);
s32 func_8017306C_overlay_040(void *, s32, s32);
extern s32 D_800C7650;
extern s32 D_800E10D0;
inline static char *inline_fn(void *arg0)
{
  return (char *) arg0;
}

void func_80170280_overlay_040(void *arg0, s32 arg1, s32 arg2)
{
  s32 *var_s1;
  u8 temp_v1;
  if ((*((u8 *) (inline_fn(arg0) + 0x2C3))) != 0)
  {
    var_s1 = *((s32 **) (inline_fn(&D_800C7650) + 0x19D3C));
  }
  else
  {
    var_s1 = &D_800E10D0;
  }
  if ((*((u8 *) (inline_fn(arg0) + 6))) == 0)
  {
    *((u8 *) (inline_fn(arg0) + 6)) = 1U;
    *((s16 *) (inline_fn(arg0) + 0x1E0)) = 0x32;
    *((s32 *) (inline_fn(arg0) + 0x1E8)) = 0x09000300;
    *((u8 *) (inline_fn(arg0) + 0x25C)) = (u8) ((*((u8 *) (inline_fn(arg0) + 0x25C))) & 0xFD);
  }
  temp_v1 = *((u8 *) (inline_fn(arg0) + 0x1E9));
  if (temp_v1 < 0xFU)
  {
    if (temp_v1 >= 8U)
    {
      func_8017306C_overlay_040(arg0, 0x20, 0x1E);
    }
    do
    {
      func_80032B8C_ovl_01(arg0, 0x800);
    }
    while (0);
    func_80032DEC_ovl_01(arg0, *((s32 *) (inline_fn(var_s1) + 0x28)), *((s32 *) (inline_fn(var_s1) + 0x30)), 0x40);
  }
  if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x400) != 0)
  {
    *((s32 *) (inline_fn(arg0) + 4)) = 0x01020000;
  }
  func_80172FE8_overlay_040(arg0);
}

