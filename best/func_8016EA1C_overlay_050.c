s16 func_80032D44_ovl_01(s16, s16, s16, s16);
s32 func_80040BE4_ovl_01(s32, s32);
extern s32 D_800E10D0;
s32 func_8016EA1C_overlay_050(void *arg0, s32 arg1, u16 arg2, u16 arg3, s32 arg4, s32 arg5)
{
  s16 temp_v0_3;
  s16 var_s0;
  s16 var_s1;
  s32 temp_a2;
  s32 temp_lo;
  s32 temp_s0_2;
  s32 temp_v0;
  s32 temp_v0_2;
  s32 temp_v0_4;
  s32 temp_v1_2;
  s32 temp_v1_3;
  s32 var_s0_2;
  u16 temp_s0;
  u16 temp_s3;
  u32 temp_s0_3;
  u8 temp_v1;
  void *temp_s1;
  temp_s0 = *((u16 *) (((char *) arg0) + 0x2B8));
  temp_s3 = *((u16 *) (((char *) arg0) + 0x2BA));
  temp_s1 = (arg1 * 0x178) + (*((s32 *) (((char *) arg0) + 0x234)));
  temp_v1 = *((u8 *) (((char *) arg0) + 0x1E9));
  *((u16 *) (((char *) arg0) + 0x2B8)) = (u16) (*((u16 *) (((char *) temp_s1) + 0x4E)));
  temp_a2 = temp_v1 < ((u32) (arg2 & 0xFFFF));
  *((u16 *) (((char *) arg0) + 0x2BA)) = (u16) (*((u16 *) (((char *) temp_s1) + 0x56)));
  if (temp_a2 == 0)
  {
    temp_s0_3 = (*((s32 *) (((char *) arg0) + 0x30))) - (*((s32 *) (((char *) temp_s1) + 0x54)));
    if (((u32) (arg3 & 0xFFFF)) >= temp_v1)
    {
      temp_v0 = (*((s32 *) (((char *) arg0) + 0x28))) - (*((s32 *) (((char *) temp_s1) + 0x4C)));
      temp_v0_2 = temp_s0_3;
      temp_v1_2 = (*((s32 *) (((char *) arg0) + 0x28))) - ((s16) temp_s0);
      temp_lo = temp_v1_2 * temp_v1_2;
      temp_v1_3 = (*((s32 *) (((char *) arg0) + 0x30))) - ((s16) temp_s3);
      temp_s0_2 = func_80040BE4_ovl_01((temp_v0 * temp_v0) + (temp_v0_2 * temp_v0_2), temp_a2);
      temp_s0_3 = ((u32) (temp_s0_2 + (func_80040BE4_ovl_01(temp_lo + (temp_v1_3 * temp_v1_3), temp_lo) + (arg5 + 0x1F4)))) >> 1;
      if (((*((s16 *) (((char *) arg0) + 0x1F4))) == 0) && (((u32) (*((u32 *) (((char *) arg0) + 0x28C)))) < temp_s0_3))
      {
        var_s1 = func_80032D44_ovl_01(*((s16 *) (((char *) arg0) + 0x2A)), *((s16 *) (((char *) arg0) + 0x32)), (s16) temp_s0, (s16) temp_s3);
        var_s0 = func_80032D44_ovl_01(*((s16 *) (((char *) arg0) + 0x2A)), *((s16 *) (((char *) arg0) + 0x32)), (s16) (*((u16 *) (((char *) temp_s1) + 0x4E))), (s16) (*((u16 *) (((char *) temp_s1) + 0x56))));
        temp_v0_3 = var_s1;
        if (var_s0 < var_s1)
        {
          var_s1 = var_s0;
          var_s0 = temp_v0_3;
        }
        var_s0_2 = (temp_v0_3 - var_s1) & 0xFFF;
        if (var_s0_2 >= 0x800)
        {
          var_s1 = (var_s0_2 + var_s1) - 0x1000;
          var_s0_2 = 0x1000 - var_s0_2;
        }
        temp_v0_4 = (func_80032D44_ovl_01(*((s16 *) (((char *) arg0) + 0x2A)), *((s16 *) (((char *) arg0) + 0x32)), *((s16 *) (((char *) (&D_800E10D0)) + 0x2A)), *((s16 *) (((char *) (&D_800E10D0)) + 0x32))) - (var_s1 - arg4)) & 0xFFF;
        if ((temp_v0_4 > 0) && (temp_v0_4 < (var_s0_2 + (arg4 * 2))))
        {
          *((s16 *) (((char *) arg0) + 0x1F4)) = 1;
          return 1;
        }
        goto block_11;
      }
      goto block_11;
    }
    return 0;
  }
  block_11:
  return 0;

}

