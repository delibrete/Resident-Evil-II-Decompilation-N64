s32 func_800AC5B4_ovl_01(s32, s32, u8, s32);
s32 func_800AF074_ovl_01();
extern s32 D_801443E8;
s32 func_800A77F4_ovl_01(s32 arg1)
{
  s32 temp_s0;
  s32 temp_s0_2;
  s32 temp_s1;
  s32 var_a1;
  s32 var_s0;
  s32 var_v0;
  s32 var_v1;
  u32 temp_s4;
  u8 var_a2;
  void *temp_s2;
  var_s0 = -1;
  var_v1 = func_800AF074_ovl_01();
  if (var_v1 != (-1))
  {
    temp_s4 = ((u32) (arg1 & 0xFFFF)) >> 7;
    loop_2:
    temp_s1 = var_v1 & 0xFF;

    temp_s2 = (char *) (temp_s1 * 0x1A0);
    temp_s2 += (s32) (&D_801443E8);
    var_v0 = var_s0;
    if ((*((s32 *) (((char *) temp_s2) + 0x60))) == var_v1)
    {
      if (!((*((s32 *) (((char *) temp_s2) + 0x24))) & 2))
      {
        temp_s0_2 = temp_s1 & 0xFF;
        func_800AC5B4_ovl_01(0x84, temp_s0_2, *((u8 *) (((char *) temp_s2) + 0x4B)), temp_s4 & 0xFF);
        var_a1 = temp_s0_2;
        var_a2 = *((u8 *) (((char *) temp_s2) + 0x4B));
      }
      else
      {
        temp_s0 = temp_s1 & 0xFF;
        func_800AC5B4_ovl_01(0x84, temp_s0, *((u8 *) (((char *) temp_s2) + 0x55)), (((u32) (arg1 & 0xFFFF)) >> 7) & 0xFF);
        var_a2 = *((u8 *) (((char *) temp_s2) + 0x55));
        var_a1 = temp_s0;
      }
      do
      {
        func_800AC5B4_ovl_01(0x85, temp_s0_2, var_a2, (arg1 & 0x7F) & 0xFF);
      }
      while (0);
      var_v1 = *((s32 *) (((char *) ((temp_s1 * 0x1A0) + (&D_801443E8))) + 0x10));
      var_s0 = 0;
      if (var_v1 == (-1))
      {
        goto block_7;
      }
      goto loop_2;
    }
  }
  else
  {
    block_7:
    var_v0 = var_s0;

  }
  return var_s0;
}

