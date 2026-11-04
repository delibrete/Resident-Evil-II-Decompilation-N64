s32 func_8006D2B4_ovl_01();
s32 func_8006D658_ovl_01(s32, s32);
s32 func_8006D8C0_ovl_01();
s32 func_8006DA44_ovl_01();
extern s32 D_800C7650_ovl_01;
extern s32 D_80113A70_ovl_01;
static inline s32 inline_fn(int arg0)
{
  return *((s32 *) (((char *) (&D_800C7650_ovl_01)) + arg0));
}

static inline int inline_fn2(int arg0)
{
  return arg0;
}

void func_8006D9C8_ovl_01(void)
{
  void *new_var2;
  int new_var;
  func_8006D8C0_ovl_01();
  new_var2 = *((void **) (((char *) (&D_800C7650_ovl_01)) + 0x1827C));
  new_var = inline_fn(inline_fn2(0x19A60));
  if (!(new_var & 0x02000000))
  {
    do
    {
      func_8006D2B4_ovl_01();
    }
    while (0);
    *((s8 *) (((char *) (&D_80113A70_ovl_01)) + 0x1464)) = 0;
    *((s32 *) (((char *) (&D_80113A70_ovl_01)) + 0x145C)) = (s32) (*((s32 *) (((char *) new_var2) + 0x4C)));
    do
    {
      func_8006D658_ovl_01(0, 1);
    }
    while (0);
    func_8006DA44_ovl_01();
  }
}

