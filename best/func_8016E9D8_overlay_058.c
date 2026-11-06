extern int D_800E108C;
s32 func_80033A0C_ovl_01();
s32 func_80089D34_ovl_01();
s32 func_801746E8_overlay_058();
extern char D_800C7650[];
extern char D_800E10D0[];
extern s8 D_80174870_overlay_058;
extern s8 D_80174871_overlay_058;
extern s16 D_80174872_overlay_058;
extern s16 D_80174874_overlay_058;
extern s16 D_80174876_overlay_058;
extern s16 D_80174878_overlay_058;
extern s8 D_8017487A_overlay_058;
extern s8 D_8017487B_overlay_058;
extern s32 func_80173504_overlay_058;
extern s32 func_8017376C_overlay_058;
void func_8016E9D8_overlay_058(void *arg0, s32 arg1, s32 arg2)
{
  s16 var_v1_2;
  char *var_v1_3;
  volatile int temp_v1_2;
  u32 var_a0;
  u32 var_a0_2;
  void *temp_v1;
  void *var_v1;
  var_a0 = 0;
  var_v1 = arg0;
  *((s32 *) (((char *) arg0) + 4)) = 0x01000000;
  *((s16 *) (((char *) arg0) + 0x26C)) = 0;
  *((s16 *) (((char *) arg0) + 0x268)) = 0;
  *((s16 *) (((char *) arg0) + 0x264)) = 0;
  do
  {
    *((s32 *) (((char *) var_v1) + 0x2B4)) = 0;
    var_a0 += 1;
    var_v1 += 4;
  }
  while (var_a0 < 0xCU);
  *((s16 *) (((char *) arg0) + 0x1E0)) = 0;
  *((s16 *) (((char *) arg0) + 0x1E2)) = 0;
  *((s16 *) (((char *) arg0) + 0x1E4)) = 0;
  var_v1_2 = 0x384;
  if (D_800E108C & 0x20)
  {
    var_v1_2 = 0x2EE;
    if (1)
    {
    }
  }
  *((s16 *) (((char *) arg0) + 0x1F2)) = var_v1_2;
  *((s16 *) (((char *) (arg0 + 0x2B4)) + 0xE)) = 0x28;
  *((s32 *) (((char *) arg0) + 0)) |= 0x1C000000;
  func_80033A0C_ovl_01(arg0 + 0x208, 0, 0x06400640, 0, arg0 + 0x28);
  var_a0_2 = 0;
  *((s32 **) (((char *) arg0) + 0x250)) = &D_800E10D0;
  *((s8 *) (((char *) arg0) + 0x25D)) = 3;
  *((s8 *) (((char *) arg0) + 0x25C)) = 0;
  temp_v1 = (*((s32 **) (((char *) arg0) + 0x234))) + 0x468;
  *((s16 *) (((char *) temp_v1) + 0x134)) = 0x40;
  *((s16 *) (((char *) temp_v1) + 0x136)) = 0x10;
  *((s16 *) (((char *) temp_v1) + 0x138)) = 0x100;
  *((s16 *) (((char *) temp_v1) + 0x130)) = 0;
  *((s16 *) (((char *) temp_v1) + 0x132)) = 0;
  *((s16 *) (((char *) temp_v1) + 0x13A)) = 0x20;
  var_v1_3 = *((s32 **) (((char *) arg0) + 0x234));
  do
  {
    var_a0_2 += 1;
    *((s32 *) var_v1_3) |= 0x8000;
    var_v1_3 += 0x178;
  }
  while (var_a0_2 < 0x1DU);
  *((s16 *) (((char *) arg0) + 0x134)) = -0x7D0;
  *((s16 *) (((char *) arg0) + 0x136)) = 0x44C;
  *((s16 *) (((char *) arg0) + 0x138)) = 0x44C;
  *((s16 *) (((char *) arg0) + 0x13A)) = 0x7D0;
  *((s16 *) (((char *) arg0) + 0x12C)) = 0x4B0;
  *((s16 *) (((char *) arg0) + 0x12E)) = 0x4B0;
  *((s16 *) (((char *) arg0) + 0x28A)) = 0x384;
  D_80174870_overlay_058 = 0;
  D_80174871_overlay_058 = 0;
  D_80174872_overlay_058 = 0;
  D_80174874_overlay_058 = 0;
  D_80174876_overlay_058 = 0;
  D_80174878_overlay_058 = 0;
  D_8017487A_overlay_058 = 0;
  *((s32 *) (((char *) arg0) + 0x284)) = 1;
  *((s16 *) (((char *) arg0) + 0x130)) = 0;
  *((s16 *) (((char *) arg0) + 0x132)) = 0;
  D_8017487B_overlay_058 = 0;
  *((s32 *) (((char *) arg0) + 0x1E8)) = 0;
  func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
  *((s32 **) (D_800C7650 + 0x18324)) = &func_80173504_overlay_058;
  *((s32 **) (D_800C7650 + 0x18424)) = &func_8017376C_overlay_058;
  temp_v1_2 = *((u16 *) (((char *) arg0) + 0x1AA));
  switch (temp_v1_2)
  {
    case 0:
      break;

    case 0x1:
      *((s8 *) (((char *) arg0) + 5)) = (s8) temp_v1_2;
      break;

    case 0x6002:
      *((s32 *) (((char *) arg0) + 4)) = 0x04000000;
      break;

  }

  func_801746E8_overlay_058(arg0, 0xB, 0, 0);
}

