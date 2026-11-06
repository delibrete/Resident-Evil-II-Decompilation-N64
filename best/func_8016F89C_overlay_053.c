extern s32 D_8016FB30_overlay_053;
void func_8016F89C_overlay_053(void *arg0, s32 arg1, s32 arg2)
{
  s32 *temp_v1;
  s32 temp_v0;
  char *new_var;
  s32 var_a3;
  s32 var_v0;
  s32 var_v0_2;
  var_a3 = 7;
  var_v0 = 7 & 0xFF;
  new_var = (char *) arg0;
  do
  {
    temp_v1 = (char *)((*((s32 *) (new_var + 0x234)))); temp_v1 += (s32)(((*((var_v0 + (((arg1 & 0xFF) * 7) - 1)) + (&D_8016FB30_overlay_053))) * 0x178));
    if (arg2 & 0xFF)
    {
      var_v0_2 = (*temp_v1) | 1;
    }
    else
    {
      var_v0_2 = (*temp_v1) & (~1);
    }
    *temp_v1 = var_v0_2;
    temp_v0 = var_a3 - 1;
    var_a3 = temp_v0;
    var_v0_2 = var_a3 & 0xFF;
    var_v0 = var_v0_2;var_v0_2=0;
  }
  while (temp_v0 & 0xFF);
  if (arg2 & 0xFF)
  {
    *((s32 *) (new_var + 0)) = (s32) ((*((s32 *) (new_var + 0))) & (~2));
    return;
  }
  *((s32 *) (new_var + 0)) = (s32) ((*((s32 *) (new_var + 0))) | 2);
}

