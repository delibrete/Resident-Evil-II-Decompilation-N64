s32 func_80009170(void *);
s32 func_80042AC0_ovl_01();
extern f32 D_800B8814_ovl_01;
extern f32 D_800B8818_ovl_01;
extern s32 D_801314F0_ovl_01;
void func_80042A54_ovl_01(void)
{
  char *new_var;
  func_80042AC0_ovl_01();
  new_var = ((char *) (&D_801314F0_ovl_01)) + 0x1C4;
  do
  {
    func_80009170((&D_801314F0_ovl_01) + 0xF0);
  }
  while (0);
  *((s32 *) new_var) = 0;
  *((s32 *) (((char *) (&D_801314F0_ovl_01)) + 0x1C8)) = 0;
  *((s32 *) (((char *) (&D_801314F0_ovl_01)) + 0x1CC)) = 0;
  *((s32 *) (((char *) (&D_801314F0_ovl_01)) + 0x1D4)) = 0;
  *((s32 *) (((char *) (&D_801314F0_ovl_01)) + 0x1D8)) = 0;
  *((s32 *) (((char *) (&D_801314F0_ovl_01)) + 0x228)) = 0;
  *((s32 *) (((char *) (&D_801314F0_ovl_01)) + 0x1E4)) = 0;
  *((s32 *) (((char *) (&D_801314F0_ovl_01)) + 0x1E0)) = 1;
  *((f32 *) (((char *) (&D_801314F0_ovl_01)) + 0x1D0)) = (f32) D_800B8814_ovl_01;
  *((f32 *) (((char *) (&D_801314F0_ovl_01)) + 0x1DC)) = (f32) D_800B8818_ovl_01;
}

