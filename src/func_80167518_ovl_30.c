extern s32 D_800E10D0_ovl_01;
void func_80167518_ovl_30(s32 arg0)
{
  char *new_var2;
  s8 new_var;
  new_var = (s8) (arg0 + 2);
  new_var2 = (char *) (&D_800E10D0_ovl_01);
  *((s8 *) (new_var2 + 4)) = 2;
  do
  {
    *((s8 *) (new_var2 + 5)) = new_var;
  }
  while (0);
  *((s8 *) (new_var2 + 6)) = 0;
  arg0 = 0;
  *((s8 *) (new_var2 + 7)) = arg0;
}

