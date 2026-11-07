s32 func_80033634_ovl_01(s32, s32);
s32 func_80033A0C_ovl_01(void *, s32, s32, s32, s32);
s32 func_800662B8_ovl_01(void *, void *);
s32 func_80089D34_ovl_01(void *, s32, s32, s32);
extern s32 D_800C7650;
extern s8 D_801762F0_overlay_057;
extern s8 D_801762F1_overlay_057;
extern s16 D_801762F2_overlay_057;
extern s16 D_801762F4_overlay_057;
extern s16 D_801762F6_overlay_057;
extern s16 D_801762F8_overlay_057;
extern s8 D_801762FA_overlay_057;
extern s8 D_801762FB_overlay_057;
extern s32 func_801754B0_overlay_057;
extern s32 func_801755C0_overlay_057;
void func_8016EBC8_overlay_057(void *arg0, s32 arg1, long long arg2)
{
  s32 *temp_v1;
  s32 *temp_v1_3;
  s32 *temp_v1_4;
  s32 *temp_v1_5;
  s32 *temp_v1_6;
  s32 *temp_v1_7;
  s32 *new_var2;
  s32 *temp_v1_8;
  s32 *temp_v1_9;
  s32 *var_t0;
  s32 *var_t0_2;
  s32 *var_t0_3;
  volatile unsigned int new_var;
  s32 var_a0;
  s32 var_a0_2;
  s32 var_a0_3;
  void *temp_t0;
  void *temp_t0_2;
  void *temp_t0_3;
  void *temp_t0_4;
  void *temp_t0_5;
  void *temp_t0_6;
  void *temp_t0_7;
  void *temp_t0_8;
  void *temp_t0_9;
  new_var2 = (s32 *) (((char *) arg0) + 0);
  *((s32 *) (((char *) arg0) + 4)) = 0x01000000;
  *((s16 *) (((char *) arg0) + 0x1F2)) = 0x2BC;
  *((s16 *) (((char *) arg0) + 0x26C)) = 0;
  *((s16 *) (((char *) arg0) + 0x268)) = 0;
  *((s16 *) (((char *) arg0) + 0x264)) = 0;
  *((s8 *) (((char *) arg0) + 0x26F)) = 0;
  if ((*((s32 *) (((char *) (&D_800C7650)) + 0x19A3C))) & 0x20)
  {
    *((s16 *) (((char *) arg0) + 0x1F2)) = 0x258;
  }
  *((s8 *) (((char *) arg0) + 0x25D)) = 3;
  *((s8 *) (((char *) arg0) + 0x1ED)) = 0;
  *((s8 *) (((char *) arg0) + 0x1EE)) = 0;
  *((s8 *) (((char *) arg0) + 0x1EF)) = 0;
  *((s8 *) (((char *) arg0) + 0x25C)) = 0;
  temp_t0 = (*((s32 **) (((char *) arg0) + 0x234))) + 0x468;
  *((s16 *) (((char *) temp_t0) + 0x134)) = 0x20;
  *((s16 *) (((char *) temp_t0) + 0x136)) = 0x20;
  *((s16 *) (((char *) temp_t0) + 0x138)) = 0x264;
  *((s16 *) (((char *) temp_t0) + 0x13A)) = 0x138;
  *((s16 *) (((char *) temp_t0) + 0x130)) = 0;
  *((s16 *) (((char *) temp_t0) + 0x132)) = 0;
  *((s8 *) (((char *) arg0) + 0x2B7)) = 5;
  *((s16 *) (((char *) arg0) + 0x2C0)) = 0x7D0;
  *((s8 *) (((char *) arg0) + 0x2B4)) = 0;
  *((s8 *) (((char *) arg0) + 0x2B5)) = 0;
  *((s8 *) (((char *) arg0) + 0x2B6)) = 0;
  *((s8 *) (((char *) arg0) + 0x2BA)) = 0;
  *((s8 *) (((char *) arg0) + 0x2BC)) = 0;
  *((s8 *) (((char *) arg0) + 0x2BD)) = 0;
  *((s8 *) (((char *) arg0) + 0x2C2)) = 0;
  *((u8 *) (((char *) arg0) + 0x2C3)) = 0U;
  *((s8 *) (((char *) arg0) + 0x2C4)) = 0;
  D_801762F0_overlay_057 = 0;
  D_801762F1_overlay_057 = 0;
  D_801762F2_overlay_057 = 0;
  D_801762F4_overlay_057 = 0;
  D_801762F6_overlay_057 = 0;
  D_801762F8_overlay_057 = 0;
  D_801762FA_overlay_057 = 0;
  D_801762FB_overlay_057 = 0;
  *((s32 *) (((char *) arg0) + 0x284)) = 1;
  *((s16 *) (((char *) arg0) + 0x2B8)) = 0;
  *((s16 *) (((char *) arg0) + 0x130)) = 0;
  *((s16 *) (((char *) arg0) + 0x134)) = -0x5DC;
  *((s16 *) (((char *) arg0) + 0x13A)) = 0x5DC;
  *((s16 *) (((char *) arg0) + 0x28A)) = 0x320;
  *((s16 *) (((char *) arg0) + 0x136)) = 0x384;
  *((s16 *) (((char *) arg0) + 0x138)) = 0x384;
  *((s16 *) (((char *) arg0) + 0x12C)) = 0x384;
  *((s16 *) (((char *) arg0) + 0x12E)) = 0x384;
  *((s16 *) (((char *) arg0) + 0x132)) = 0;
  *((s32 *) (((char *) arg0) + 0x1E8)) = 0;
  *((s32 *) (((char *) arg0) + 0)) = (s32) ((*((s32 *) (((char *) arg0) + 0))) | 0x0C000000);
  func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
  func_80033A0C_ovl_01(arg0 + 0x208, 0, 0x03200384, 0, (*((s32 **) (((char *) arg0) + 0x234))) + 0x4C);
  var_a0 = 0x12;
  *((s32 **) (((char *) ((((*((u8 *) (((char *) arg0) + 8))) - 0x10) * 4) + (&D_800C7650))) + 0x18298)) = &func_801754B0_overlay_057;
  *((s32 **) (((char *) ((((*((u8 *) (((char *) arg0) + 8))) - 0x10) * 4) + (&D_800C7650))) + 0x18398)) = &func_801755C0_overlay_057;
  var_t0 = *((s32 **) (((char *) arg0) + 0x234));
  *((s32 *) (((char *) arg0) + 0)) = (s32) ((*((s32 *) (((char *) arg0) + 0))) | 4);
  do
  {
    *((s32 *) (((char *) var_t0) + 0x60)) = 0x808080;
    var_a0 -= 1;
    var_t0 += 0x178;
  }
  while (var_a0 != 0);
  temp_t0_2 = (*((s32 **) (((char *) arg0) + 0x234))) + 0x178;
  *((s16 *) (((char *) (*((void **) (((char *) temp_t0_2) + 0x120)))) + 0xC)) = 0;
  func_800662B8_ovl_01(arg0, temp_t0_2);
  temp_t0_3 = (*((s32 **) (((char *) arg0) + 0x234))) + 0x2F0;
  *((s16 *) (((char *) (*((void **) (((char *) temp_t0_3) + 0x120)))) + 0xC)) = 0;
  *((s16 *) (((char *) (*((void **) (((char *) temp_t0_3) + 0x120)))) + 0x10)) = 0;
  func_800662B8_ovl_01(arg0, temp_t0_3);
  *((s8 *) (((char *) arg0) + 5)) = 7;
  *((s32 *) (((char *) arg0) + 0x1E8)) = 0x13000000;
  func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
  temp_t0_4 = (*((s32 **) (((char *) arg0) + 0x234))) + 0x2F0;
  *((s16 *) (((char *) (*((void **) (((char *) temp_t0_4) + 0x120)))) + 0xC)) = 0x1000;
  *((s16 *) (((char *) (*((void **) (((char *) temp_t0_4) + 0x120)))) + 0x10)) = 0;
  func_800662B8_ovl_01(arg0, temp_t0_4);
  temp_t0_5 = (*((s32 **) (((char *) arg0) + 0x234))) + 0x5E0;
  *((s16 *) (((char *) (*((void **) (((char *) temp_t0_5) + 0x120)))) + 0xC)) = 0x1000;
  func_800662B8_ovl_01(arg0, temp_t0_5);
  temp_v1 = *((s32 **) (((char *) arg0) + 0x234));
  temp_t0_6 = temp_v1 + 0x8D0;
  *((s32 *) (((char *) temp_v1) + 0x8D0)) = (s32) ((*((s32 *) (((char *) temp_v1) + 0x8D0))) | 0x400);
  temp_v1 = 0;
  *((s16 *) (((char *) temp_t0_6) + 0x124)) = 0x800;
  *((s16 *) (((char *) temp_t0_6) + 0x126)) = 0x200;
  *((s16 *) (((char *) temp_t0_6) + 0x128)) = 0x800;
  temp_v1 = *((s32 **) (((char *) arg0) + 0x234));
  temp_t0_7 = temp_v1 + 0xA48;
  *((s32 *) (((char *) temp_v1) + 0xA48)) = (s32) ((*((s32 *) (((char *) temp_v1) + 0xA48))) | 0x400);
  *((s16 *) (((char *) temp_t0_7) + 0x124)) = 0x800;
  *((s16 *) (((char *) temp_t0_7) + 0x126)) = 0x200;
  *((s16 *) (((char *) temp_t0_7) + 0x128)) = 0x800;
  temp_v1_3 = *((s32 **) (((char *) arg0) + 0x234));
  temp_t0_8 = temp_v1_3 + 0xBC0;
  *((s32 *) (((char *) temp_v1_3) + 0xBC0)) = (s32) ((*((s32 *) (((char *) temp_v1_3) + 0xBC0))) | 0x400);
  *((s16 *) (((char *) temp_t0_8) + 0x124)) = 0x800;
  *((s16 *) (((char *) temp_t0_8) + 0x126)) = 0x200;
  *((s16 *) (((char *) temp_t0_8) + 0x128)) = 0x800;
  temp_v1_4 = *((s32 **) (((char *) arg0) + 0x234));
  temp_t0_9 = temp_v1_4 + 0x468;
  *((s32 *) (((char *) temp_v1_4) + 0x468)) = (s32) ((*((s32 *) (((char *) temp_v1_4) + 0x468))) | 0x400);
  temp_v1_4 = 0;
  *((s16 *) (((char *) temp_t0_9) + 0x124)) = 0x1000;
  new_var = 0x1388;
  *((s16 *) (((char *) temp_t0_9) + 0x126)) = 0x200;
  *((s16 *) (((char *) temp_t0_9) + 0x128)) = 0x1000;
  if (((*((u16 *) (((char *) arg0) + 0x1AA))) & 0xFFF) == 2)
  {
    *((s16 *) (((char *) arg0) + 0x1F4)) = 0x3C;
    *((s16 *) (((char *) arg0) + 0x1F2)) = new_var;
    *((s32 *) (((char *) arg0) + 0)) = (s32) ((*((s32 *) (((char *) arg0) + 0))) | 2);
    *((u8 *) (((char *) arg0) + 0x2C3)) = (u8) ((*((u8 *) (((char *) arg0) + 0x2C3))) | ((func_80033634_ovl_01(0x800, 0x200) & 1) * 0x10));
    *((s8 *) (((char *) (*((void **) (((char *) arg0) + 0x208)))) + 0xE)) = 0;
    var_a0_2 = 0x12;
    var_t0_2 = *((s32 **) (((char *) arg0) + 0x234));
    *((s8 *) (((char *) arg0) + 5)) = 0;
    *((s8 *) (((char *) arg0) + 6)) = 3;
    do
    {
      var_a0_2 -= 1;
      *var_t0_2 |= 0x4000;
      var_t0_2 += 0x178;
    }
    while (var_a0_2 != 0);
    temp_v1_5 = *((s32 **) (((char *) arg0) + 0x234));
    *((s32 *) (((char *) temp_v1_5) + 0x8D0)) = (s32) ((*((s32 *) (((char *) temp_v1_5) + 0x8D0))) & (~0x400));
    temp_v1_6 = *((s32 **) (((char *) arg0) + 0x234));
    *((s32 *) (((char *) temp_v1_6) + 0xA48)) = (s32) ((*((s32 *) (((char *) temp_v1_6) + 0xA48))) & (~0x400));
    temp_v1_7 = *((s32 **) (((char *) arg0) + 0x234));
    *((s32 *) (((char *) temp_v1_7) + 0xBC0)) = (s32) ((*((s32 *) (((char *) temp_v1_7) + 0xBC0))) & (~0x400));
  }
  var_a0_3 = 0x12;
  if (((*((u16 *) (((char *) arg0) + 0x1AA))) & 0xFFF) == 3)
  {
    *((s16 *) (((char *) arg0) + 0x1F2)) = new_var;
    *((s32 *) (((char *) arg0) + 0)) = (s32) ((*new_var2) | 0xA);
    *((s8 *) (((char *) (*((void **) (((char *) arg0) + 0x208)))) + 0xE)) = 0;
    var_t0_3 = *((s32 **) (((char *) arg0) + 0x234));
    *((s8 *) (((char *) arg0) + 5)) = 9;
    *((s8 *) (((char *) arg0) + 6)) = 0;
    do
    {
      var_a0_3 -= 1;
      *var_t0_3 |= 0x4000;
      var_t0_3 += 0x178;
    }
    while (var_a0_3 != 0);
    temp_v1_8 = *((s32 **) (((char *) arg0) + 0x234));
    *((s32 *) (((char *) temp_v1_8) + 0x8D0)) = (s32) ((*((s32 *) (((char *) temp_v1_8) + 0x8D0))) & (~0x400));
    temp_v1_9 = *((s32 **) (((char *) arg0) + 0x234));
    *((s32 *) (((char *) temp_v1_9) + 0xA48)) = (s32) ((*((s32 *) (((char *) temp_v1_9) + 0xA48))) & (~0x400));
    temp_v1 = *((s32 **) (((char *) arg0) + 0x234));
    *((s32 *) (((char *) temp_v1) + 0xBC0)) = (s32) ((*((s32 *) (((char *) temp_v1) + 0xBC0))) & (~0x400));
  }
}

