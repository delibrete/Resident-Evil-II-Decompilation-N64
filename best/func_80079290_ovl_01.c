s32 func_800A2148_ovl_01(s32);
s32 func_800A21B8_ovl_01(s32, s32, s32, s32);
extern s32 D_8011A31C_ovl_01;
void func_80079290_ovl_01(s16 arg0)
{
  s32 temp_a0;
  s32 var_s2;
  s32 var_s3;
  u32 temp_s0;
  void *temp_s1;
  void *temp_v1;
  temp_a0 = arg0 * 0x3C;
  temp_v1 = &D_8011A31C_ovl_01;
  temp_v1 = temp_a0 + temp_v1;
  var_s2 = 0;
  if ((*((s8 *) (((char *) temp_v1) + 0x28))) != 0)
  {
    var_s3 = temp_a0;
    loop_2:
    temp_s1 = (char *)(var_s3); temp_s1 += (s32)((&D_8011A31C_ovl_01));

    if ((*((s32 *) (((char *) temp_s1) + 0x14))) != 0)
    {
      temp_s0 = ((u32) ((*((u16 *) (((char *) temp_v1) + 2))) * (*((u8 *) (((char *) ((var_s2 + temp_a0) + (&D_8011A31C_ovl_01))) + 0x24))))) >> 7;
      if (func_800A2148_ovl_01(*((s32 *) (((char *) temp_s1) + 4))) & 0xFF)
      {
 do { func_800A21B8_ovl_01(temp_s0 & 0xFF, 0, *((s32 *) (((char *) temp_s1) + 4)), 0); } while (0);
      }/*__repair_loop_weight*/do {do {do {
      var_s2 += 1;} while (0);} while (0);} while (0);
      var_s3 += 4;
      if (var_s2 < 4)
      {
        goto loop_2;
      }
    }
  }
}
