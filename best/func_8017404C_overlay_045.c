extern unsigned char D_800E8FB2;
s32 func_80033634_ovl_01();
s32 func_80173B4C_overlay_045();
extern char D_800E7650[];
s32 func_8017404C_overlay_045(void *arg0)
{
  s32 temp_a0;
  s32 temp_a2;
  s32 var_a2;
  u32 temp_a0_2;
  u32 temp_a1;
  u32 var_t0;
  unsigned short var_a3;
  void *temp_s0;
  void *temp_v1;
  int new_var;
  temp_s0 = arg0 + 0x2B4;
  if ((*((u8 *) (((char *) temp_s0) + 0x24))) != 0xE)
  {
    temp_a2 = func_80033634_ovl_01() & 7;
    var_a2 = 8;
    if (((u8) (*((u8 *) (((char *) temp_s0) + 9)))) >= 3U)
    {
      var_a3 = *((u8 *) (((char *) temp_s0) + var_a2));
      new_var = 4;
      if (!((((s32) var_a3) >> temp_a2) & 1))
      {
        temp_a0 = temp_a2 * 2;
        temp_a1 = temp_a0;
        temp_a1 += 3;
        var_t0 = temp_a1;
        temp_a0_2 = temp_a0 + new_var;
        *((u8 *) (((char *) temp_s0) + var_a2)) = (u8) (var_a3 | (1 << temp_a2));
        *((u8 *) (((char *) temp_s0) + 9)) -= 1;
        if (temp_a0_2 >= temp_a1)
        {
          var_a3 = temp_a1 * 0x178;
          do
          {
            temp_v1 = (*((s32 *) (((char *) arg0) + 0x234))) + var_a3;
            var_a2 = *((s32 *) (((char *) temp_v1) + 0));
            if (D_800E8FB2 & var_a2)
            {
              var_a2 |= 0x4A;
            }
            *((s32 *) (((char *) temp_v1) + 0)) = var_a2;
            do
            {
              var_t0 += 1;
            }
            while (0);
            *((s16 *) (((char *) temp_v1) + 0x138)) = 0;
            *((s16 *) (((char *) temp_v1) + 0x134)) = 0x258;
            *((s16 *) (((char *) temp_v1) + 0x132)) = -0x78;
            *((s16 *) (((char *) temp_v1) + 0x136)) = 0xA;
            *((s16 *) (((char *) temp_v1) + 0x13C)) = -0x64;
            *((s32 *) (((char *) temp_v1) + 0x60)) = 0x2F2F2F;
            *((s16 *) (((char *) temp_v1) + 0x130)) = (s16) ((*((u16 *) (((char *) arg0) + 0x66))) + 0x800);
            var_a3 += 0x178;
          }
          while (temp_a0_2 >= var_t0);
        }
        do
        {
          func_80173B4C_overlay_045(arg0, temp_a1, 1, var_a3);
        }
        while (0);
        return 0;
      }
      goto block_10;
    }
    block_10:
    func_80173B4C_overlay_045(arg0, 0x13U, 1);

    return 1;
  }
  return 1;
}

