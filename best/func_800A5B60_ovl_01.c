extern s32 D_80143F08;
extern s32 (*D_80143FAC)(s32);
s32 func_800A56F0_ovl_01(void);
void func_800A5B60_ovl_01(void)
{
  s32 *p = &D_80143F08;
  if (*p)
  {
    func_800A56F0_ovl_01();
    D_80143FAC(*p);
    *p = 0;
  }
}
