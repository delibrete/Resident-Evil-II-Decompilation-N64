s32 func_80033634_ovl_01();
s32 func_80173E84_overlay_058(void *, u8, s32);
extern s32 D_801748C0_overlay_058;
void func_801720A8_overlay_058(void *arg0)
{
  s32 temp_s1;
  volatile int new_var;
  u32 var_s0;
  new_var = ((*((u8 *) (((char *) arg0) + 0x26E))) % 3) & 0xFF;
  temp_s1 = (new_var != 0) * 4;
  var_s0 = 0;
  if ((*((u8 *) (((char *) arg0) + 4))) == 2)
  {
    do
    {
      var_s0 += 1;
      func_80173E84_overlay_058(arg0, *((temp_s1 + (func_80033634_ovl_01() & 7)) + (&D_801748C0_overlay_058)), 4);
    }
    while (var_s0 < 3U);
  }
  else
  {
    do
    {
      var_s0 += 1;
      func_80173E84_overlay_058(arg0, *((temp_s1 + (func_80033634_ovl_01() & 7)) + (&D_801748C0_overlay_058)), 5);
    }
    while (var_s0 < 4U);
  }
}

