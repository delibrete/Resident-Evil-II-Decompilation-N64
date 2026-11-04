s32 func_80033634_ovl_01();
s32 func_80089D34_ovl_01();
static inline static char *inline_fn(char *arg0, int arg1)
{
  return arg0 + arg1;
}

void func_8016ED34_overlay_055(void *arg0, s32 arg1, s32 arg2)
{
  int *new_var2;
  int new_var;
  *((u8 *) (((char *) arg0) + 6)) += 1;
  new_var = (func_80033634_ovl_01() & 3) + 1;
  new_var2 = &new_var;
  *((s16 *) inline_fn((char *) arg0, 0x1F4)) = (s16) (((*((u8 *) (((char *) arg0) + 0x2B4))) * 2) + (*new_var2));
  func_80089D34_ovl_01(arg0, arg1, arg2);
}

