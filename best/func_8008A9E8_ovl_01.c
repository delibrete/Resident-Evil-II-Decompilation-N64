s32 func_80040E88_ovl_01(void *, s32 *);
s32 func_80041D9C_ovl_01(s32 *, s32 *);
s32 func_80089C1C_ovl_01(s32 *, s32 *, void *, s32);
extern s32 D_800C7650_ovl_01;
extern s32 D_8012BD10_ovl_01;
s32 func_8008A9E8_ovl_01(void *arg0, s32 arg1, s32 *arg2, s32 arg3)
{
  s32 sp10;
  s32 sp14;
  s32 sp18;
  s32 sp1C;
  s32 sp20;
  s32 sp30;
  s32 *temp_s0;
  s16 temp_a0;
  s32 temp_a1;
  s32 temp_a3;
  s32 temp_a3_2;
  s32 temp_a3_3;
  unsigned long long temp_a3_4;
  
  
  volatile unsigned int temp_a3_7;
  s32 temp_v0_2;
  
  s32 var_a3;
  s32 var_s4;
  s32 var_v0;
  u16 temp_s7;
  u16 var_s3;
  u32 temp_a0_2;
  u32 temp_a0_3;
  u32 temp_v0;
  u32 temp_v1_2;
  
  u32 temp_v1_4;
  u8 temp_t3;
  u8 temp_v0_3;
  void *temp_a0_4;
  void *temp_a1_2;
  void *temp_a1_3;
  void *temp_a1_4;
  void *temp_a1_5;
  void *temp_a1_6;
  void *temp_a1_7;
  void *temp_a1_8;
  void *temp_a2;
  void *temp_a2_2;
  void *temp_a2_3;
  void *temp_a2_4;
  void *temp_a2_5;
  void *temp_a2_6;
  void *temp_a2_7;
  void *temp_a2_8;
  void *temp_s5;
  void *var_a1;
  void *var_a2;
  void *var_s0;
  void *var_s1;
  temp_s5 = *((void **) (((char *) (&D_800C7650_ovl_01)) + 0x18288));
  var_s1 = *((void **) (((char *) temp_s5) + 0x234));
  temp_a2 = (arg0 + (*((u16 *) (((char *) arg0) + 0)))) + (((((u32) (*((u32 *) (((char *) arg0) + 4)))) >> 0x12) * ((*arg2) & 0xFFF)) * 4);
  temp_s7 = *((u16 *) (((char *) (((*((u8 *) (((char *) temp_s5) + 0x1E8))) * 4) + arg1)) + 2));
  *((s32 *) (((char *) var_s1) + 0x1C)) = (s32) (*((s16 *) (((char *) temp_a2) + 2)));
  var_s4 = (*((s16 *) (((char *) temp_a2) + 0))) * (*((s16 *) (((char *) temp_s5) + 0x27A)));
  *((s32 *) (((char *) var_s1) + 0x20)) = (s32) (var_s4 >> 0xC);
  *((s32 *) (((char *) var_s1) + 0x24)) = (s32) (*((s16 *) (((char *) temp_a2) + 6)));
  temp_t3 = *((u8 *) (((char *) temp_s5) + 0x1EA));
  var_s3 = *((u16 *) (((char *) arg0) + 6));
  if (temp_t3 != 0)
  {
    temp_a0 = *((s16 *) (((char *) var_s1) + 0x28));
    *((s32 *) (((char *) (&D_8012BD10_ovl_01)) + 0)) = (s32) temp_a0;
    *((s32 *) (((char *) (&D_8012BD10_ovl_01)) + 4)) = (s32) (*((s16 *) (((char *) var_s1) + 0x2A)));
    *((s32 *) (((char *) (&D_8012BD10_ovl_01)) + 8)) = (s32) (*((s16 *) (((char *) var_s1) + 0x2C)));
    var_s4 = (arg3 & 0xFFFF) * temp_t3;
    temp_a1 = 0x1000 - var_s4;
    *((s32 *) (((char *) var_s1) + 0x1C)) = (s32) (((s32) (((*((s32 *) (((char *) var_s1) + 0x1C))) * temp_a1) + (temp_a0 * var_s4))) >> 0xC);
    *((s32 *) (((char *) var_s1) + 0x20)) = (s32) (((s32) (((*((s32 *) (((char *) var_s1) + 0x20))) * temp_a1) + ((*((s32 *) (((char *) (&D_8012BD10_ovl_01)) + 4))) * var_s4))) >> 0xC);
    *((s32 *) (((char *) var_s1) + 0x24)) = (s32) (((s32) (((*((s32 *) (((char *) var_s1) + 0x24))) * temp_a1) + ((*((s32 *) (((char *) (&D_8012BD10_ovl_01)) + 8))) * var_s4))) >> 0xC);
  }
  var_a1 = var_s1 + 0x290;
  *((s16 *) (((char *) var_s1) + 0x28)) = (s16) (*((u16 *) (((char *) var_s1) + 0x1E)));
  *((s16 *) (((char *) var_s1) + 0x2A)) = (s16) (*((u16 *) (((char *) var_s1) + 0x22)));
  *((s16 *) (((char *) var_s1) + 0x2C)) = (s16) (*((u16 *) (((char *) var_s1) + 0x26)));
  temp_a1 = *((s32 *) (((char *) temp_a2) + 0xC));
  var_a3 = var_s3 - 1;
  *((s32 *) (((char *) var_s1) + 0x114)) = (s32) (((temp_a1 & 0xFFF) << 0x10) | (((u32) (temp_a1 & 0xFFF000)) >> 0xC));
  var_a2 = (temp_a2 + 0xC) + 4;
  *((s16 *) (((char *) var_s1) + 0x118)) = (s16) (((u8) (*((s32 *) (((char *) temp_a2) + 0xC)))) | (((*((u16 *) (((char *) var_a2) + 2))) & 0xF) << 8));
  if (var_a3 != 0)
  {
    loop_3:
    temp_v1_2 = *((u32 *) (((char *) var_a2) + 0));

    temp_a3 = var_a3 - 1;
    *((s32 *) (((char *) var_a1) + (-4))) = ((temp_v1_2 & 0xFFF0) << 0xC) | (((u32) (temp_v1_2 & 0x0FFF0000)) >> 0x10);
    temp_a2_2 = var_a2 + 4;
    *((s16 *) (((char *) var_a1) + 0)) = (s16) ((((u32) (*((u32 *) (((char *) var_a2) + 0)))) >> 0x1C) | ((*((u8 *) (((char *) temp_a2_2) + 3))) * 0x10));
    temp_a1_2 = var_a1 + 0x178;
    if (temp_a3 != 0)
    {
      temp_v0 = *((u32 *) (((char *) var_a2) + 4));
      temp_a2_3 = temp_a2_2 + 4;
      *((s32 *) (((char *) temp_a1_2) + (-4))) = (s32) (((temp_v0 & 0xFFF00) << 8) | (temp_v0 >> 0x14));
      temp_a3_2 = temp_a3 - 1;
      *((s16 *) (((char *) var_a1) + 0x178)) = (s16) ((*((u16 *) (((char *) temp_a2_3) + 2))) & 0xFFF);
      temp_a1_3 = temp_a1_2 + 0x178;
      if (temp_a3_2 != 0)
      {
        temp_v1_2 = *((u32 *) (((char *) temp_a2_2) + 4));
        temp_a2_4 = temp_a2_3 + 4;
        *((s32 *) (((char *) temp_a1_3) + (-4))) = (s32) (((temp_v1_2 & 0xFFF000) * 0x10) | ((temp_v1_2 >> 0x18) | (((*((u32 *) (((char *) temp_a2_3) + 4))) & 0xF) << 8)));
        temp_a3_3 = temp_a3_2 - 1;
        *((s16 *) (((char *) temp_a1_2) + 0x178)) = (s16) (((u32) ((*((u32 *) (((char *) temp_a2_3) + 4))) & 0xFFF0)) >> 4);
        temp_a1_4 = temp_a1_3 + 0x178;
        if (temp_a3_3 != 0)
        {
          temp_v1_4 = *((u32 *) (((char *) temp_a2_3) + 4));
          temp_a2_5 = temp_a2_4 + 4;
          *((s32 *) (((char *) temp_a1_4) + (-4))) = (s32) ((temp_v1_4 & 0x0FFF0000) | ((temp_v1_4 >> 0x1C) | ((*((u8 *) (((char *) temp_a2_5) + 3))) * 0x10)));
          temp_a3_4 = temp_a3_3 - 1;
          *((s16 *) (((char *) temp_a1_3) + 0x178)) = (s16) (((u32) ((*((u32 *) (((char *) temp_a2_4) + 4))) & 0xFFF00)) >> 8);
          temp_a1_5 = temp_a1_4 + 0x178;
          if (temp_a3_4 != 0)
          {
            temp_a2_6 = temp_a2_5 + 4;
            *((s32 *) (((char *) temp_a1_5) + (-4))) = (s32) (((((u32) (*((u32 *) (((char *) temp_a2_4) + 4)))) >> 4) & 0x0FFF0000) | ((*((u32 *) (((char *) temp_a2_5) + 4))) & 0xFFF));
            temp_a3_3 = temp_a3_4 - 1;
            *((s16 *) (((char *) temp_a1_4) + 0x178)) = (s16) (((u32) ((*((u32 *) (((char *) temp_a2_5) + 4))) & 0xFFF000)) >> 0xC);
            temp_a1_6 = temp_a1_5 + 0x178;
            if (temp_a3_3 != 0)
            {
              temp_a2_7 = temp_a2_6 + 4;
              temp_a0_2 = *((u32 *) (((char *) temp_a2_6) + 4));
              *((s32 *) (((char *) temp_a1_6) + (-4))) = (s32) ((((((u32) (*((u32 *) (((char *) temp_a2_5) + 4)))) >> 8) & 0x0FFF0000) | ((temp_a0_2 & 0xF) << 0x18)) | (((u32) (temp_a0_2 & 0xFFF0)) >> 4));
              temp_a3_2 = temp_a3_3 - 1;
              *((s16 *) (((char *) temp_a1_5) + 0x178)) = (s16) (((u32) ((*((u32 *) (((char *) temp_a2_6) + 4))) & 0x0FFF0000)) >> 0x10);
              temp_a1_7 = temp_a1_6 + 0x178;
              if (temp_a3_2 != 0)
              {
                temp_a2_8 = temp_a2_7 + 4;
                temp_a3_7 = temp_a3_2 - 1;
                temp_a0_3 = *((u32 *) (((char *) temp_a2_7) + 4));
                *((s32 *) (((char *) temp_a1_7) + (-4))) = (s32) ((((((u32) (*((u32 *) (((char *) temp_a2_6) + 4)))) >> 0xC) & 0x0FFF0000) | ((temp_a0_3 & 0xFF) << 0x14)) | (((u32) (temp_a0_3 & 0xFFF00)) >> 8));
                *((s16 *) (((char *) temp_a1_6) + 0x178)) = (s16) (((u32) (*((u32 *) (((char *) temp_a2_7) + 4)))) >> 0x14);
                temp_a1_8 = temp_a1_7 + 0x178;
                if (temp_a3_7 != 0)
                {
                  temp_v0_2 = *((s32 *) (((char *) temp_a2_8) + 4));
                  *((s32 *) (((char *) temp_a1_8) + (-4))) = (s32) (((temp_v0_2 & 0xFFF) << 0x10) | (((u32) (temp_v0_2 & 0xFFF000)) >> 0xC));
                  var_a2 = (temp_a2_8 + 4) + 4;
                  var_a3 = temp_a3_7 - 1;
                  *((s16 *) (((char *) temp_a1_7) + 0x178)) = (s16) (((u8) (*((s32 *) (((char *) temp_a2_8) + 4)))) | (((*((u16 *) (((char *) var_a2) + 2))) & 0xF) << 8));
                  var_a1 = temp_a1_8 + 0x178;
                  if (var_a3 != 0)
                  {
                    goto loop_3;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (temp_t3 == 0)
  {
    do
    {
      temp_s0 = var_s1 + 8;
      func_80040E88_ovl_01(var_s1 + 0x114, temp_s0);
      func_80041D9C_ovl_01(temp_s0, temp_s0);
      var_s3 -= 1;
      var_s1 += 0x178;
    }
    while (var_s3 != 0);
  }
  else
  {
    var_s0 = var_s1 + 8;
    *((u8 *) (((char *) temp_s5) + 0x1EA)) = (u8) ((*((u8 *) (((char *) temp_s5) + 0x1EA))) - 1);
    do
    {
      sp10 = *((s32 *) (((char *) var_s0) + 0));
      temp_a0_4 = var_s1 + 0x114;
      sp14 = *((s32 *) (((char *) var_s0) + 4));
      sp18 = *((s32 *) (((char *) var_s0) + 8));
      var_s1 += 0x178;
      sp1C = *((s32 *) (((char *) var_s0) + 0xC));
      var_s3 -= 1;
      sp20 = *((s32 *) (((char *) var_s0) + 0x10));
      func_80040E88_ovl_01(temp_a0_4, &sp30);
      func_80089C1C_ovl_01(&sp10, &sp30, var_s0, 0xFFF - var_s4);
      var_s0 += 0x178;
    }
    while (var_s3 != 0);
  }
  temp_v0_3 = (*((u8 *) (((char *) temp_s5) + 0x1E9))) + 1;
  *((u8 *) (((char *) temp_s5) + 0x1E9)) = temp_v0_3;
  var_v0 = 0;
  if (((u32) (temp_v0_3 & 0xFF)) >= temp_s7)
  {
    *((u8 *) (((char *) temp_s5) + 0x1E9)) = 0U;
    var_v0 = 1;
  }
  return var_v0;
}

