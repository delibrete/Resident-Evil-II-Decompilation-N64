extern s32 D_800E10D0_ovl_01;
void func_8016756C_ovl_30(void)
{
  s8 *new_var;
  new_var = (s8 *) (((char *) (&D_800E10D0_ovl_01)) + 4);
  *((s8 *) (((char *) (&D_800E10D0_ovl_01)) + 4)) = 3;
  new_var = ((char *) (&D_800E10D0_ovl_01)) + 6;
  *((s8 *) new_var) = 0;
  *((s8 *) (((char *) (&D_800E10D0_ovl_01)) + 7)) = 0;
  new_var = (s8 *) (((char *) (&D_800E10D0_ovl_01)) + 5);
  *new_var = 0;
}

