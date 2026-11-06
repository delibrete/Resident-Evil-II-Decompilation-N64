s32 func_8004A26C_ovl_01(s32, s32 *, u8, s16);
s32 func_80082D7C_ovl_01(s32 *, s32 *);
extern s32 D_800C7650_ovl_01;
void func_8004A584_ovl_01(void)
{
  s32 sp50;
  s16 new_var3;
  s32 sp54;
  char *new_var;
  s32 sp60;
  int new_var2;
  new_var3 = *((s16 *) (((char *) (&D_800C7650_ovl_01)) + 0x215FC));
  new_var = (char *) (&D_800C7650_ovl_01);
  new_var2 = 5;
  func_8004A26C_ovl_01((*((s32 *) (((char *) (*((void **) (((char *) (&D_800C7650_ovl_01)) + 0x1827C)))) + 0x24))) + (new_var3 << new_var2), &sp50, *((u8 *) (((char *) (&D_800C7650_ovl_01)) + 0x19A41)), *((s16 *) (new_var + 0x19A42)));
  func_80082D7C_ovl_01(&sp54, &sp60);
}

