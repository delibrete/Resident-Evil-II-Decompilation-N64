s32 func_80033634_ovl_01();
s32 func_800662B8_ovl_01();
extern s8 D_801762FA_overlay_057;
extern s8 D_801762FB_overlay_057;
void func_80175D28_overlay_057(void *arg0, void *arg1, u32 arg2)
{
  s32 temp_v0_2;
  s32 temp_v0_3;
  u32 var_a2;
  u8 temp_v1;
  void *temp_a0;
  void *temp_v0;
  void *temp_v1_2;
  void *temp_v1_3;
  var_a2 = arg2;
  temp_v1 = *((u8 *) (((char *) arg0) + 0x2BD));
  switch (temp_v1)
  {
    case 0:
      temp_v0 = *((void **) (((char *) arg1) + 0x120));
      *((u16 *) (((char *) temp_v0) + 0xC)) += 0x400;
      temp_v1_2 = *((void **) (((char *) arg1) + 0x120));
      if (((s16) (*((u16 *) (((char *) temp_v1_2) + 0xC)))) >= 0x1001)
    {
      *((u16 *) (((char *) temp_v1_2) + 0xC)) = 0x1000U;
      *((u8 *) (((char *) arg0) + 0x2BD)) = 1U;
      *((u16 *) (((char *) arg0) + 0x2BE)) = 0U;
      temp_v0_2 = func_80033634_ovl_01(arg0);
      var_a2 = temp_v0_2 & 0xFF;
      D_801762FB_overlay_057 = 7 - (var_a2 % 14);
      var_a2 = temp_v0_2 & 0xFF;
      temp_v0_3 = func_80033634_ovl_01((void *) (var_a2 / 14), &D_801762FB_overlay_057, MULTU_HI(((u32) (temp_v0_2 & 0xFF)) >> 1, 0x92492493));
      var_a2 = MULTU_HI(((u32) (temp_v0_3 & 0xFF)) >> 1, (unsigned char) 0x92492493);
      D_801762FA_overlay_057 = 7 - ((temp_v0_3 & 0xFF) % 14);
    }
      break;

    case 1:
      temp_a0 = *((void **) (((char *) arg1) + 0x120));
      *((u16 *) (((char *) temp_a0) + 0xC)) -= *((u16 *) (((char *) arg0) + 0x2BE));
      *((u16 *) (((char *) arg0) + 0x2BE)) += 0x64;
      temp_v1_3 = *((void **) (((char *) arg1) + 0x120));
      if (((s16) (*((u16 *) (((char *) temp_v1_3) + 0xC)))) < 0)
    {
      *((u16 *) (((char *) temp_v1_3) + 0xC)) = 0U;
      *((s8 *) (((char *) arg0) + 0x2BC)) = 0;
      *((u8 *) (((char *) arg0) + 0x2BD)) = 0U;
      D_801762FB_overlay_057 = 0;
      D_801762FA_overlay_057 = 0;
    }
      break;

  }

  func_800662B8_ovl_01(arg0);
}

