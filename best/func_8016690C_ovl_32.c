extern s32 D_80166ED4_overlay_032;
void func_8016690C_ovl_32(s32 arg0, s8 arg1, s8 arg2)
{
  int new_var;
  void *temp_v1;
  new_var = (arg0 & 0xFF) * 0x1C;
  if (temp_v1)
  {
    temp_v1 = new_var + (&D_80166ED4_overlay_032);
    *((s8 *) (((char *) temp_v1) + 2)) = arg1;
    *((s8 *) (((char *) temp_v1) + 3)) = arg2;
  }
  else
  {
    temp_v1 = new_var + (&D_80166ED4_overlay_032);
    *((s8 *) (((char *) temp_v1) + 2)) = arg1;
    *((s8 *) (((char *) temp_v1) + 3)) = arg2;
  }
}

