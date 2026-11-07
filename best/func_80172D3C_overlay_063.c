extern s32 D_800C7650;
extern s32 D_800E10D0;
void func_80172D3C_overlay_063(s32 arg0)
{
  int new_var2;
  s8 *new_var;
  s32 *var_v1;
  new_var2 = 0;
  if (arg0 == new_var2)
  {
    var_v1 = &D_800E10D0;
  }
  else
  {
    var_v1 = *((s32 **) (((char *) (&D_800C7650)) + 0x19D3C));
  }
  *((s8 *) (((char *) var_v1) + 4)) = 3;
  *((s8 *) (((char *) var_v1) + 5)) = new_var2;
  *((s8 *) (((char *) var_v1) + 6)) = 0;
  new_var = (s8 *) (((char *) var_v1) + 7);
  *new_var = 0;
}

