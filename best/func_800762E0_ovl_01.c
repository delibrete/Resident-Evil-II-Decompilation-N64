extern s32 D_800C7650_ovl_01;
extern s32 D_80119DC0_ovl_01;
extern s32 D_80119DC8_ovl_01;
extern s32 D_8011A6B8_ovl_01;
static inline int inline_fn(int arg0, int arg1)
{
  return arg0 - arg1;
}

static inline int inline_fn2(int arg0, unsigned int arg1)
{
  return ((*((s32 *) (((char *) (&D_800C7650_ovl_01)) + 0x19A5C))) < (((inline_fn(0, 1) + 1) - arg0) + 1)) * arg1;
}

void func_800762E0_ovl_01(void)
{
  int new_var2;
  s32 *new_var3;
  char *new_var;
  D_80119DC8_ovl_01 = 1;
  new_var = (char *) (&D_800C7650_ovl_01);
  D_80119DC8_ovl_01 = 0;
  new_var2 = 4;
  new_var3 = &D_80119DC0_ovl_01;
  D_8011A6B8_ovl_01 = *((s32 *) (((char *) (((*((s16 *) (new_var + 0x215F8))) * new_var2) + (*(inline_fn2(1, new_var2) + new_var3)))) + new_var2));
}

