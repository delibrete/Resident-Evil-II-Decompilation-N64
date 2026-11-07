extern s32 D_800C7650;
extern s32 D_800E10D0;
void func_8017362C_overlay_040(s32 arg0)
{
  s32 *var_v1;
  int new_var;
  new_var = 4;
  if (arg0 != 0)
  {
    var_v1 = *((s32 **) (((char *) (&D_800C7650)) + 0x19D3C));
  }
  else
  {
    var_v1 = &D_800E10D0;
  }
  *((s8 *) (((char *) var_v1) + new_var)) = 3;
  *((s8 *) (((char *) var_v1) + 5)) = 0;
  *((s8 *) (((char *) var_v1) + 6)) = 0;
  *((s8 *) (((char *) var_v1) + 7)) = 0;
}

