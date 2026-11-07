s32 func_800824A4_ovl_01(s32, s32 *, s32);
extern s32 D_800C7650_ovl_01;
extern s32 D_80131728_ovl_01;
inline static char *inline_fn(char *arg0, int arg1)
{
  return arg0 + arg1;
}

void func_8009B118_ovl_01(void)
{
  void *temp_s0;
  u8 *new_var;
  do { func_800824A4_ovl_01((*((s32 *) (((char *) (*((void **) inline_fn((char *) (&D_800C7650_ovl_01), (float) 0x1827C)))) + 0x2C))) + ((*((s16 *) inline_fn((char *) (&D_800C7650_ovl_01), 0x215FC))) * 0x28), &D_80131728_ovl_01, 0x28); } while (0);
 do { temp_s0 = (&D_80131728_ovl_01) - 8; new_var = &(*((u8 *) (((char *) temp_s0) + 2))); } while (0);
  if (((u8) (*new_var)) >= 2U)
  {
    *((s8 *) inline_fn((char *) temp_s0, 1)) = 0;
    *((u8 *) inline_fn((char *) temp_s0, 2)) = 0U;
  }
}
