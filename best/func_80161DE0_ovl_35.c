s32 func_80033A0C_ovl_01();
s32 func_80089D34_ovl_01();
s32 func_80166520_overlay_035();
extern char D_800C7650_ovl_01[];
extern char D_800E10D0_ovl_01[];
extern s32 func_8016590C_ovl_35;
void func_80161DE0_ovl_35(void *arg0, s32 arg1, s32 arg2)
{
  s16 var_v1;
  char *var_v1_2;
  s8 temp_hi;
  u32 var_a0;
  u32 var_a0_2;
  int new_var;
  void *temp_v1;
  void *var_a1;
  var_a0 = 0;
  var_a1 = arg0;
  *((s32 *) (((char *) arg0) + 4)) = 0x01000000;
  *((s16 *) (((char *) arg0) + 0x26C)) = 0;
  new_var = 0x19A3C;
  *((s16 *) (((char *) arg0) + 0x268)) = 0;
  *((s16 *) (((char *) arg0) + 0x264)) = 0;
  *((s32 *) (((char *) arg0) + 0)) |= 0xC00000;
  do
  {
    *((s32 *) (((char *) var_a1) + 0x2B4)) = 0;
    do
    {
      var_a0 += 1;
    }
    while (0);
    var_a1 += 4;
  }
  while (var_a0 < 0xCU);
  *((s16 *) (((char *) arg0) + 0x1E0)) = 0;
  *((s16 *) (((char *) arg0) + 0x1E2)) = 0;
  *((s16 *) (((char *) arg0) + 0x1E4)) = 0;
  var_v1 = 0xFA;
  if ((*((s32 *) (D_800C7650_ovl_01 + new_var))) & 0x20)
  {
    var_v1 = 0xC8;
  }
  temp_hi = var_v1 / 3;
  *((s16 *) (((char *) arg0) + 0x1F2)) = var_v1;
  *((s32 *) (((char *) arg0) + 0)) |= 0x0C000000;
  *((s8 *) (((char *) arg0) + 0x1EF)) = temp_hi;
  *((s8 *) (((char *) arg0) + 0x1EE)) = temp_hi;
  *((s8 *) (((char *) arg0) + 0x1ED)) = temp_hi;
  func_80033A0C_ovl_01(arg0 + 0x208, 0, 0x057807D0, 0, arg0 + 0x28);
  *((s32 **) (((char *) arg0) + 0x250)) = &D_800E10D0_ovl_01;
  *((s8 *) (((char *) arg0) + 0x25C)) = 1;
  temp_v1 = *((void **) (((char *) arg0) + 0x234));
  *((s8 *) (((char *) arg0) + 0x25D)) = 0;
  *((s16 *) (((char *) temp_v1) + 0x134)) = 8;
  *((s16 *) (((char *) temp_v1) + 0x138)) = 0x100;
  *((s16 *) (((char *) temp_v1) + 0x130)) = 0;
  *((s16 *) (((char *) temp_v1) + 0x132)) = 0;
  *((s16 *) (((char *) temp_v1) + 0x136)) = 0;
  *((s16 *) (((char *) temp_v1) + 0x13A)) = 0;
  *((s32 *) (((char *) arg0) + 0x284)) = 1;
  *((s16 *) (((char *) arg0) + 0x134)) = -0x320;
  *((s16 *) (((char *) arg0) + 0x13A)) = 0x3E8;
  *((s16 *) (((char *) arg0) + 0x130)) = 0;
  *((s16 *) (((char *) arg0) + 0x132)) = 0;
  *((s16 *) (((char *) arg0) + 0x136)) = 0x320;
  *((s16 *) (((char *) arg0) + 0x138)) = 0x578;
  *((s16 *) (((char *) arg0) + 0x12C)) = 0x320;
  *((s16 *) (((char *) arg0) + 0x12E)) = 0x578;
  *((s16 *) (((char *) arg0) + 0x28A)) = 0x384;
  func_80166520_overlay_035(arg0, 0, 0x320);
  var_a0_2 = 0;
  var_v1_2 = (*((void **) (((char *) arg0) + 0x234))) + 0x1318;
  do
  {
    var_a0_2 += 1;
    *((s32 *) var_v1_2) |= 0x4000;
    var_v1_2 += 0x178;
  }
  while (var_a0_2 < 4U);
  *((s8 *) (((char *) arg0) + 0x2C9)) = 2;
  *((s8 *) (((char *) arg0) + 0x2BD)) = 1;
  *((s8 *) (((char *) arg0) + 0x2CB)) = 0x1E;
  if ((*((u16 *) (((char *) arg0) + 0x1AA))) & 0x10)
  {
    *((s8 *) (((char *) arg0) + 5)) = 0xA;
    *((s32 *) (((char *) arg0) + 0x1E8)) = 0x08000000;
    func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
    *((s8 *) (((char *) arg0) + 0x2C5)) = 1;
    *((s8 *) (((char *) arg0) + 0x2BC)) = 1;
    *((s16 *) (((char *) arg0) + 0x270)) = 0;
  }
  else
  {
    *((s32 *) (((char *) arg0) + 0x1E8)) = 0;
    func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
  }
  *((s32 **) (D_800C7650_ovl_01 + 0x18340)) = &func_8016590C_ovl_35;
}

