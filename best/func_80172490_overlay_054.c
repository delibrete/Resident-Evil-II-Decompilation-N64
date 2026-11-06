s32 func_8017212C_overlay_054();
s32 func_80172280_overlay_054();
volatile char func_801736A8_overlay_054();
void func_80172490_overlay_054(void *arg0)
{
  s32 var_s3;
  s32 temp_s0;
  s32 var_s1;
  func_8017212C_overlay_054();
  *((u8 *) (((char *) arg0) + 0x25C)) |= 1;
  var_s1 = 0xC;
  if (!(((*((u8 *) (((char *) arg0) + 0x26E))) % 3) & 0xFF))
  {
 do { if ((*((u8 *) (((char *) arg0) + 0x2D9))) == 0) { var_s1 = 6; var_s3 = 9; } else { goto block_4; } } while (0);
  }
  else
  {
    block_4:
    var_s3 = 0xE;

  }
  temp_s0 = (var_s1 - 1) & 0xFF;
  func_801736A8_overlay_054(arg0, temp_s0, 0, MULTU_HI(*((u8 *) (((char *) arg0) + 0x26E))));
  func_801736A8_overlay_054(arg0, temp_s0, 3);
  func_80172280_overlay_054(arg0, var_s1, var_s3);
}
