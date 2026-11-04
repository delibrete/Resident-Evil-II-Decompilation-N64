s32 func_80043650_ovl_01();
s32 func_800439B8_ovl_01(s32,  void *);
extern s32 D_800DF650_ovl_01;
extern s32 D_80160848_ovl_03;
extern u8 D_80160BA5_ovl_03;
extern s32 D_80160BB8_ovl_03;
void func_8015E2EC_ovl_03(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
  int *__repair_home2 = &arg2;
  s32 sp10;
  s32 sp18;
  s32 *sp1C;
  s32 *var_t1;
  s32 temp_s5;
  s32 var_s0;
  s32 var_s1;
  s32 var_s2;
  s32 var_t0;
  u8 *new_var;
  s32 var_v1;
  u16 temp_v1;
  u32 temp_fp;
  u32 var_s6;
  u8 temp_v0;
  u8 temp_v0_2;
  u8 var_s7;
  void *temp_a1;
  void *temp_s3;
  func_80043650_ovl_01();
  if (arg3 != 0)
  {
    var_s7 = D_80160BA5_ovl_03;
    var_s6 = 0;
  }
  else
  {
    var_s7 = 8 - D_80160BA5_ovl_03;
    var_s6 = 0;
  }
  var_t1 = &D_80160BB8_ovl_03;
  temp_s3 = (&D_80160BB8_ovl_03) - 0x1C;
  var_s2 = 2;
  sp10 = (*__repair_home2) * var_s7;
  do
  {
    var_s1 = 0;
    temp_s5 = var_s6 * 2;
    temp_fp = (((u32) (sp18 = ((sp10 * var_s7) * var_s7) * var_s7)) >> 1) >> 11;
    var_s0 = 2;
    var_t0 = *__repair_home2;
    var_t0 = var_t0 - temp_fp;
    var_v1 = var_s2;
    loop_5:
    temp_a1 = (char *) (var_s2 * 0x28);

    temp_a1 += (s32) var_t1;
    temp_v1 = *((u16 *) (((char *) (((temp_s5 + var_s0) * 0xC) + (&D_80160848_ovl_03))) + 2));
    *((u8 *) (((char *) temp_a1) + 2)) = 0x80U;
    *((u8 *) (((char *) temp_a1) + 1)) = 0x80U;
    *((u8 *) (((char *) temp_a1) + 0)) = 0x80U;
    new_var = (u8 *) (((char *) temp_s3) + 7);
    *((u16 *) (((char *) temp_a1) + 6)) = temp_v1;
    if ((*((u8 *) (((char *) temp_s3) + 9))) != 0)
    {
      if (arg1 == var_s6)
      {
        if (arg3 != 0)
        {
          *((u16 *) (((char *) temp_a1) + 6)) = (u16) (temp_v1 - temp_fp);
        }
        else
        {
          *((u16 *) (((char *) temp_a1) + 6)) = (u16) ((*((u16 *) (((char *) temp_a1) + 6))) - var_t0);
        }
      }
      else
      {
        temp_v0 = *((u8 *) (((char *) temp_s3) + 0xA));
        *((u8 *) (((char *) temp_a1) + 2)) = temp_v0;
        *((u8 *) (((char *) temp_a1) + 1)) = temp_v0;
        *((u8 *) (((char *) temp_a1) + 0)) = temp_v0;
      }
    }
    if (var_s6 == arg0)
    {
      if ((*((u8 *) (temp_s3 + 9))) == 8)
      {
        if (var_s1 == 0)
        {
          *((s16 *) (((((*((u8 *) (((char *) (&D_800DF650_ovl_01)) + 0x538))) * 0x14) + (var_s2 * 0x28)) + temp_s3) + 0x26)) = 0;
        }
        else
        {
          {
            char *__repair_store_address = (char *) temp_s3;
            __repair_store_address += ((*((u8 *) (((char *) (&D_800DF650_ovl_01)) + 0x538))) * 0x14) + ((temp_s5 + var_s0) * 0x28);
            *((s16 *) (__repair_store_address + 0x26)) = 0;
          }
        }
      }
      else
      {
        if (var_s1 == 0)
        {
          if (1)
          {
          }
          *((s16 *) (((char *) ((((*((u8 *) (((char *) (&D_800DF650_ovl_01)) + 0x538))) * 0x14) + (var_s2 * 0x28)) + temp_s3)) + 0x26)) = 0;
        }
        else
        {
          *((s16 *) (((char *) ((((*((u8 *) (((char *) (&D_800DF650_ovl_01)) + 0x538))) * 0x14) + ((temp_s5 + var_s0) * 0x28)) + temp_s3)) + 0x26)) = 0;
        }
 do { temp_v0_2 = (*new_var) + 0x80; *((u8 *) (((char *) temp_a1) + 2)) = temp_v0_2; *((u8 *) (((char *) temp_a1) + 1)) = temp_v0_2; *((u8 *) (((char *) temp_a1) + 0)) = temp_v0_2; } while (0);
      }
    }
    else
    {
      *((s16 *) (((char *) ((((*((u8 *) (((char *) (&D_800DF650_ovl_01)) + 0x538))) * 0x14) + ((temp_s5 + var_s0) * 0x28)) + temp_s3)) + 0x26)) = 0x100;
    }
    do
    {
      var_s0 += 1;
    }
    while (0);
    do
    {
      do
      {
        do
        {
          var_s1 += 1;
        }
        while (0);
      }
      while (0);
    }
    while (0);
    sp18 = var_t0;
    sp1C = var_t1;
    *((s32 *) (((char *) (&D_800DF650_ovl_01)) + 0x204)) = func_800439B8_ovl_01(*((s32 *) (((char *) (&D_800DF650_ovl_01)) + 0x204)),  temp_a1);
    var_v1 = var_s2 + var_s1;
    if (var_s1 == 0)
    {
      goto loop_5;
    }
    var_s6 += 1;
    var_s2 += 2;
  }
  while (var_s6 < 3U);
}
