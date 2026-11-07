s32 func_800377B0_ovl_01(s32, s32, void *, s16 *);
extern s32 D_800C7650_ovl_01;
extern s32 D_800E1898_ovl_01;
void func_8006D7DC_ovl_01(void)
{
  s16 sp10;
  s16 sp12;
  s16 sp14;
  s32 *var_a2;
  s32 var_v0;
  u32 var_a0;
  u32 var_s0;
  u8 temp_a0;
  u8 temp_s2;
  temp_s2 = *((u8 *) (((char *) (*((void **) (((char *) (&D_800C7650_ovl_01)) + 0x1827C)))) + 2));
  var_s0 = 0;
  if (temp_s2 != 0)
  {
    var_a2 = &D_800E1898_ovl_01;
    do
    {
      do
      {
        do
        {
          do
          {
            var_s0 += 1;
          }
          while (0);
        }
        while (0);
      }
      while (0);
      if ((*((s32 *) (((char *) var_a2) + 0))) & 1)
      {
        temp_a0 = *((u8 *) (((char *) var_a2) + 0x1E1));
        var_v0 = var_s0 < temp_s2;
        if (temp_a0 & 0x80)
        {
          var_a0 = (u32) (temp_a0 & 0x60);
          var_a0 = var_a0 >> 5;
          sp10 = 0;
          sp12 = -0x5A;
          sp14 = 0;
          if (var_a0 == 0)
          {
            var_a0 = 1;
          }
          func_800377B0_ovl_01((((var_a0 * 8) + 7) << 0x10) | 0x05002800, 0, var_a2 + 0x14, &sp10);
          goto block_7;
        }
      }
      else
      {
        block_7:
        var_v0 = var_s0 < temp_s2;

      }
      var_a2 += 0x368;
    }
    while (var_v0 != 0);
  }
}

