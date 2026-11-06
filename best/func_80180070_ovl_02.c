extern s32 D_80187020_ovl_02;
extern s32 *D_80187420_ovl_02;
void func_8017FF94_ovl_02(void);
extern s32 D_801853E0_ovl_02[64];
extern s32 D_801853E4_ovl_02;
extern s32 D_801853E8_ovl_02;
s32 func_8017FFF0_ovl_02(s32 arg0);
extern s32 D_8010B69C_ovl_01;
void func_80180070_ovl_02(void)
{
  u32 count = 0;
  s32 *p = D_801853E0_ovl_02;
  D_801853E4_ovl_02 = 0;
  D_801853E8_ovl_02 = 0;
  *p = count;
  do
  {
    s32 v = *p;
    s32 rem = v & 0x3f;
    if (rem == 0)
    {
      *p = v;
    }
    else
    {
      v += 0x40;
      v -= rem;
      *p = v;
    }
    count++;
    p++;
  }
  while (count == 0);
}

void func_80180364_ovl_02(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
