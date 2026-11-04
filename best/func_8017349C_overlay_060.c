extern s32 D_80173A64_overlay_060;
void func_8017349C_overlay_060(s32 arg0, s8 arg1, s8 arg2)
{
  char *new_var;
  int new_var2;
  void *temp_v1;
  if (temp_v1)
  {
    new_var2 = (arg0 & 0xFF) * 0x1C;
    temp_v1 = (char *) new_var2;
    temp_v1 += (s32) (&D_80173A64_overlay_060);
    new_var = (char *) temp_v1;
    *((s8 *) (new_var - -2)) = arg1;
    *((s8 *) (new_var + 3)) = arg2;
  }
  else
  {
    new_var2 = (arg0 & 0xFF) * 0x1C;
    temp_v1 = (char *) new_var2;
    temp_v1 += (s32) (&D_80173A64_overlay_060);
    new_var = (char *) temp_v1;
    *((s8 *) (new_var - -2)) = arg1;
    *((s8 *) (new_var + 3)) = arg2;
  }
}

