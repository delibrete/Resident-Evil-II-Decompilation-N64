s32 func_80007450(s32 *, s32, s32);
s32 func_8000DCB0(s32);
extern s32 D_8010B2C8_ovl_01;
extern s32 D_80139AD0;
void func_8004CE70_ovl_01(s32 arg0)
{
  s32 *new_var;
  unsigned long long new_var2;
  if ((*((void **) (((char *) (&D_8010B2C8_ovl_01)) + 0x390))) != NULL)
  {
    *((s16 *) (((char *) (*((void **) (((char *) (&D_8010B2C8_ovl_01)) + 0x390)))) + 0)) = 2;
    new_var = &D_8010B2C8_ovl_01;
    *((s32 *) (((char *) (*((void **) (((char *) new_var) + 0x390)))) + 0x1B8)) = arg0;
    func_80007450(&D_80139AD0, 0, new_var2 = 0);
    func_8000DCB0(new_var2);
  }
}

