s32 func_80033174_ovl_01(s32 *);
extern s32 D_800E10D0_ovl_01;
long long func_80162C78_ovl_23(s32 arg0)
{
  s32 new_var;
  s32 *new_var2;
  new_var2 = (s32 *) (((char *) (&D_800E10D0_ovl_01)) + 4);
  *((s32 *) (((char *) (&D_800E10D0_ovl_01)) + 0x250)) = arg0;
  *new_var2 = 0x02000000;
  new_var2 = 0;
  new_var = func_80033174_ovl_01(&D_800E10D0_ovl_01);
  new_var2 = ((char *) (&D_800E10D0_ovl_01)) + 5;
  *((u8 *) (((char *) (&D_800E10D0_ovl_01)) + 5)) = (u8) ((*((u8 *) new_var2)) + new_var);
}

