extern s32 D_80148C20;
extern s32 D_8014CF20;
s32 func_800AC068_ovl_01(s32 arg0, s32 arg1, s32 arg2)
{
  s32 temp_a0;
  s32 temp_a0_2;
  s32 __repair_phase_temp_a0_2;
  s32 *new_var3;
  s32 temp_a3;
  s32 temp_v0;
  s32 temp_v0_2;
  unsigned char new_var;
  s32 temp_v1;
  int new_var2;
  s32 temp_v1_2;
  s32 var_a0_2;
  s32 var_v0_2;
  s32 var_v0_3;
  s32 var_v1;
  s32 var_v1_2;
  u32 temp_a1;
  u32 temp_a1_2;
  u8 *var_a0;
  u8 var_v0;
  temp_v0_2 = arg2 & 0xFF;
  if (temp_v0_2 != 0xFF)
  {
    temp_a1_2 = arg0 & 0xFF;
    if (temp_a1_2 < 0x40U)
    {
      u8 *var_a1;
      var_a0_2 = arg0 & 0x1F;
      temp_v1 = (arg1 & 0xFF) * 0x86;
      var_v0_2 = temp_v0_2 * 0x860;
      var_a1 = ((var_a0_2 + temp_v1) + var_v0_2) + (&D_80148C20);
      var_v1_2 = temp_v1 + 0x20;
      goto block_3;
    }
    new_var3 = &D_80148C20;
    if (((u32) ((arg0 + 0x80) & 0xFF)) < 2U)
    {
      u8 *var_a1;
      var_a0_2 = arg0 & 0xFE;
      temp_v1_2 = (arg1 & 0xFF) * 0x86;
      var_v0_2 = temp_v0_2 * 0x860;
      var_a1 = ((temp_v1_2 + var_v0_2) + (&D_80148C20)) + var_a0_2;
      temp_v0_2 = temp_v1_2 + 1;
      new_var2 = (var_a0_2 + temp_v0_2) + var_v0_2;
      var_v1 = new_var2;
      block_3:
      var_a0 = var_v1 + (&D_80148C20);

      var_v0 = *var_a1;
      return (*var_a0) | (var_v0 << 7);
    }
    if (temp_a1_2 < 0x46U)
    {
      var_v0_3 = ((u8) (*(((temp_a1_2 + ((arg1 & 0xFF) * 0x86)) + (temp_v0_2 * 0x860)) + new_var3))) < 0x40U;
      goto block_9;
    }
    new_var = (u32) ((arg0 - 0x60) & 0xFF);
    if (new_var < 6U)
    {
      return 0;
    }
    return (*(((temp_a1_2 + ((arg1 & 0xFF) * 0x86)) + (temp_v0_2 * 0x860)) + (&D_80148C20))) << 7;
  }
  var_v0_2 = arg0 & 0x1F;
  temp_a1 = arg0 & 0xFF;
  if (temp_a1 >= 0x40U)
  {
    if (((u32) ((arg0 + 0x80) & 0xFF)) >= 2U)
    {
      if (temp_a1 < 0x46U)
      {
        var_v0_3 = ((u8) (*((temp_a1 + ((arg1 & 0xFF) * 0x86)) + (&D_8014CF20)))) < 0x40U;
        block_9:
        var_v1 = 0;

        if (var_v0_3 == 0)
        {
          var_v1 = 0x3FFF;
        }
        return var_v1;
      }
      if (((u32) ((arg0 - 0x60) & 0xFF)) >= 6U)
      {
        return (*((temp_a1 + ((arg1 & 0xFF) * 0x86)) + (&D_8014CF20))) << 7;
      }
      return 0;
    }
    temp_a0_2 = arg0 & 0xFE;
    temp_v0 = (arg1 & 0xFF) * 0x86;
    var_v0 = *((temp_a0_2 + temp_v0) + (&D_8014CF20));
    var_a0 = (temp_a0_2 + (temp_v0 + 1)) + (&D_8014CF20);
    return (*var_a0) | (var_v0 << 7);
  }
  __repair_phase_temp_a0_2 = var_v0_2;
  temp_v0_2 = (0xFF & arg1) * 0x86;
  var_v0 = *((__repair_phase_temp_a0_2 + temp_v0_2) + (&D_8014CF20));
  var_a0 = (__repair_phase_temp_a0_2 + (temp_v0_2 + 0x20)) + (&D_8014CF20);
  return (*var_a0) | (var_v0 << 7);
}

