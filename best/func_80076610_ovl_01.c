s32 func_8004CDB8_ovl_01(s32);
s32 func_80076CB4_ovl_01();
s32 func_80077000_ovl_01();
s32 func_80078C78_ovl_01(s8, s32);
s32 func_80078F14_ovl_01(s8, s32, s32);
s32 func_80079374_ovl_01(s8, s16, s16);
extern s32 D_800C7650_ovl_01;
extern s32 D_800E8AFC_ovl_01;
extern s32 D_801124DC_ovl_01;
extern u8 D_801124F5_ovl_01;
extern s32 D_801170B8_ovl_01;
extern s32 D_80119D24_ovl_01;
extern u8 D_80119E10_ovl_01;
extern s32 D_80119E3C_ovl_01;
extern u8 D_80119E3D_ovl_01;
extern void *D_80119E40_ovl_01;
extern s32 D_80119E84_ovl_01;
extern unsigned char D_80119E85_ovl_01;
void func_80076610_ovl_01(void)
{
  int __repair_constant = 0xFF;
  s32 var_s4;
  u32 temp_v1_6;
  u32 var_v0;
  u8 *temp_a1;
  char *new_var;
  u8 *temp_v1;
  u8 *temp_v1_2;
  u8 *temp_v1_5;
  u8 temp_s2;
  u8 temp_s3;
  void *temp_v1_3;
  void *temp_v1_4;
  temp_v1 = (char *) D_801124F5_ovl_01;
  temp_v1 += (s32) (&D_801124DC_ovl_01);
  *temp_v1 += 1;
  if (!((*((s32 *) (((char *) (&D_800C7650_ovl_01)) + 0x19A3C))) & 0x2000))
  {
    temp_v1_2 = (char *) D_801124F5_ovl_01;
    temp_v1_2 += (s32) (&D_801124DC_ovl_01);
    *temp_v1_2 += 1;
    temp_a1 = D_801124F5_ovl_01 + (&D_801124DC_ovl_01);
    temp_v1_3 = (char *) ((*((*((s16 *) (((char *) (&D_800C7650_ovl_01)) + 0x215F8))) + (&D_801170B8_ovl_01))) * 2);
    temp_v1_3 += (s32) (&D_800E8AFC_ovl_01);
    D_80119E40_ovl_01 = temp_v1_3;
    temp_v1_4 = temp_v1_3 + ((*((s16 *) (((char *) (&D_800C7650_ovl_01)) + 0x215FA))) * 2);
    D_80119E40_ovl_01 = temp_v1_4;
    temp_s2 = *((u8 *) (((char *) temp_v1_4) + 0));
    temp_s3 = *((u8 *) (((char *) temp_v1_4) + 1));
    *temp_a1 += 1;
    if (D_80119E10_ovl_01 != 0)
    {
      do
      {
        func_8004CDB8_ovl_01(1);
      }
      while (D_80119E10_ovl_01 != 0);
    }
    temp_v1_5 = (char *) D_801124F5_ovl_01;
    temp_v1_5 += (s32) (&D_801124DC_ovl_01);
    temp_v1_6 = *((u8 *) (((char *) (&D_80119E3C_ovl_01)) + 0));
    *temp_v1_5 += 1;
    D_801124F5_ovl_01 += 1;
    var_s4 = 1;
    if ((temp_s2 & 0x3F) != (temp_v1_6 & 0x3F))
    {
      *(D_801124F5_ovl_01 + (&D_801124DC_ovl_01)) = 0;
      if ((func_80076CB4_ovl_01() << 0x18) != 0)
      {
        var_v0 = __repair_constant;
      }
      else
      {
        var_v0 = temp_s2 >> 6;
      }
      D_80119E85_ovl_01 = (s8) var_v0;
      *(D_801124F5_ovl_01 + (&D_801124DC_ovl_01)) = 1;
    }
    else
    {
      *(D_801124F5_ovl_01 + (&D_801124DC_ovl_01)) = 2;
      var_s4 = 0;
      if ((temp_s2 >> 6) != 0)
      {
        if (((*((u8 *) (((char *) (&D_80119E84_ovl_01)) + 0))) != 0) && ((*((u8 *) (((char *) (&D_80119E84_ovl_01)) + 0))) != 0xFF))
        {
          *(D_801124F5_ovl_01 + (&D_801124DC_ovl_01)) = 3;
          func_80078F14_ovl_01(*((s8 *) (((char *) (&D_80119E84_ovl_01)) + 2)), 0x7F, 0x5A);
          *(D_801124F5_ovl_01 + (&D_801124DC_ovl_01)) = 4;
          *((u8 *) (((char *) (&D_80119E84_ovl_01)) + 0)) = 0xFU;
        }
      }
      else
        if ((*((u8 *) (((char *) (&D_80119E84_ovl_01)) + 0))) == 2)
      {
        if ((*((s8 *) (((char *) (&D_80119E84_ovl_01)) + 2))) >= 0)
        {
          if (D_80119D24_ovl_01 != 0)
          {
            *(D_801124F5_ovl_01 + (&D_801124DC_ovl_01)) = 5;
            temp_v1 = &D_801124DC_ovl_01;
            func_80078C78_ovl_01(*((s8 *) (((char *) (&D_80119E84_ovl_01)) + 2)), 0);
            *(D_801124F5_ovl_01 + temp_v1) = 6;
          }
          *(D_801124F5_ovl_01 + (&D_801124DC_ovl_01)) = 7;
          func_80079374_ovl_01(*((s8 *) (((char *) (&D_80119E84_ovl_01)) + 2)), *((s16 *) (((char *) (&D_80119E84_ovl_01)) + 4)), *((s16 *) (((char *) (&D_80119E84_ovl_01)) + 4)));
          *(D_801124F5_ovl_01 + (&D_801124DC_ovl_01)) = 8;
        }
        D_80119E85_ovl_01 = 0;
      }
    }
    if ((temp_s3 & 0x3F) == (D_80119E3D_ovl_01 & 0x3F))
    {
      if (var_s4 == 1)
      {
        goto block_22;
      }
      new_var = (char *) (&D_80119E84_ovl_01);
      if (((temp_s3 >> 6) & 1) && ((*((u8 *) (((char *) (&D_80119E84_ovl_01)) + 8))) != 0))
      {
        *(D_801124F5_ovl_01 + (&D_801124DC_ovl_01)) = 0xB;
        func_80078F14_ovl_01(*((s8 *) (((char *) (&D_80119E84_ovl_01)) + 0xA)), 0x7F, 0x5A);
        *(D_801124F5_ovl_01 + temp_v1) = 0xC;
      }
      if (((temp_s3 >> 7) != 0) && ((*((u8 *) (new_var + 0x10))) != 0))
      {
        *(D_801124F5_ovl_01 + (&D_801124DC_ovl_01)) = 0xD;
        func_80078F14_ovl_01(*((s8 *) (((char *) (&D_80119E84_ovl_01)) + 0x12)), 0x7F, 0x5A);
        *(D_801124F5_ovl_01 + temp_v1) = 0xE;
      }
    }
    else
    {
      block_22:
      *(D_801124F5_ovl_01 + (&D_801124DC_ovl_01)) = 9;

      if ((func_80077000_ovl_01() << 0x18) != 0)
      {
        *((s8 *) (((char *) (&D_80119E84_ovl_01)) + 9)) = __repair_constant;
        *((s8 *) (((char *) (&D_80119E84_ovl_01)) + 0x11)) = __repair_constant;
      }
      else
      {
        u32 __repair_branch_temp_v1_6_0;
        __repair_branch_temp_v1_6_0 = temp_s3 & 0xFFFF;
        *((s8 *) (((char *) (&D_80119E84_ovl_01)) + 9)) = (s8) ((__repair_branch_temp_v1_6_0 >> 6) & 1);
        *((s8 *) (((char *) (&D_80119E84_ovl_01)) - (-0x11))) = (s8) (__repair_branch_temp_v1_6_0 >> 7);
      }
      *(D_801124F5_ovl_01 + (&D_801124DC_ovl_01)) = 0xA;
    }
    D_801124F5_ovl_01 -= 1;
    *((u8 *) (((char *) (&D_80119E3C_ovl_01)) + 0)) = (u8) (*((s8 *) (((char *) D_80119E40_ovl_01) + 0)));
    *((s8 *) (((char *) (&D_80119E3C_ovl_01)) + 1)) = (s8) (*((s8 *) (D_80119E40_ovl_01 + 1)));
  }
}

