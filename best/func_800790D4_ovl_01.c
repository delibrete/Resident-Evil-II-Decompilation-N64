s32 func_800A1EE0_ovl_01(s32);
s32 func_800A2148_ovl_01(s32);
extern s32 D_8011A31C_ovl_01;
void func_800790D4_ovl_01(s16 arg0)
{
  s32 var_s1;
  s32 var_s2;
  void *temp_s0;
  var_s2 = arg0 * 0x3C;
  if (((0, *((s8 *) (((char *) (var_s2 + (&D_8011A31C_ovl_01))) + 0x28)))) != 0)
  {
    var_s2 = 0;
    var_s1 = var_s2;
    loop_2:
    temp_s0 = (char *) var_s1;

    temp_s0 += (s32) (&D_8011A31C_ovl_01);
    if ((*((s32 *) (((char *) temp_s0) + 0x14))) != 0)
    {
      if (func_800A2148_ovl_01(*((s32 *) (((char *) temp_s0) + 4))) & 0xFF)
      {
        var_s2 = *((s32 *) (((char *) temp_s0) + 4));
        func_800A1EE0_ovl_01(var_s2);
      }
      *((s32 *) (((char *) temp_s0) + 4)) = -1;
      var_s2 += 1;
      var_s1 += 4;
      if (var_s2 >= 4)
      {
      }
      else
      {
        goto loop_2;
      }
    }
    *((s8 *) (((char *) ((arg0 * 0x3C) + (&D_8011A31C_ovl_01))) + 0x28)) = 1;
  }
}

