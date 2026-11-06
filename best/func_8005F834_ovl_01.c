s32 func_8004251C_overlay_001();
extern u16 D_800E8FE8_overlay_001;
s32 func_8005F834_ovl_01(void *arg0, s32 arg1)
{
  char *var_s1;
  int new_var;
  s32 temp_v0;
  s32 temp_v0_3;
  s32 temp_v1;
  char *new_var2;
  s32 var_a0;
  s32 var_a0_2;
  s32 var_t1;
  s32 var_v1;
  char *var_a1;
  char *var_a2;
  char *var_a2_2;
  char *var_a3;
  char *var_a3_2;
  char *var_t0_2;
  char *var_v1_2;
  char *var_v1_3;
  u16 temp_v0_2;
  u16 temp_v0_4;
  u16 temp_v0_5;
  u16 var_s3;
  void *temp_s1;
  void *temp_s4;
  void *var_s0;
  var_v1 = 6;
  var_s3 = 0;
  new_var2 = (char *) arg0;
  temp_v0 = *((s32 *) (((char *) arg0) + 0x234));
  var_s1 = temp_v0 + 0x1D60;
  temp_s4 = temp_v0 + 0x1028;
  var_s0 = temp_v0 + 0x1E8C;
  loop_1:
  if ((*((u8 *) (((char *) var_s0) + 4))) != 0xFF)
  {
    var_s0 += 0x2F0;
    var_s1 += 0x2F0;
    var_v1 -= 1;
    var_s3 += 1;
    if (var_v1 == 0)
    {
      temp_v0_2 = (*((u16 *) (((char *) temp_s4) + 0x11C))) + 1;
      *((u16 *) (((char *) temp_s4) + 0x11C)) = temp_v0_2;
      if (((s16) temp_v0_2) >= 3)
      {
        *((u16 *) (((char *) temp_s4) + 0x11C)) = 0U;
      }
      var_t1 = 2;
      var_s1 = &D_800E8FE8_overlay_001;
      temp_s1 = (*((s32 *) (((char *) arg0) + 0x234))) + ((((s16) (*((u16 *) (((char *) temp_s4) + 0x11C)))) * 0x2F0) + 0x1D60);
      new_var = 0;
      *((s8 *) (((char *) temp_s1) + 0x130)) = 0;
      *((s32 *) (((char *) temp_s1) + 0)) = 1;
      *((s32 *) (((char *) temp_s1) + 0x178)) = 1;
      var_a3 = temp_s1 + 8;
      *((u16 *) (((char *) temp_s1) + 0x116)) = (u16) (*((u16 *) (((char *) arg0) + 0x66)));
      temp_v0_3 = *((s32 *) (((char *) arg0) + 0x234));
      *((s32 *) (((char *) temp_s1) + 0)) = (s32) (1 | 0x40);
      *((s32 *) (((char *) temp_s1) + 0x64)) = (s32) (temp_v0_3 + 0x1060);
      *((s32 *) (((char *) temp_s1) + 0x12C)) = (s32) (temp_v0_3 + 0x1028);
      do
      {
        var_a2 = var_a3;
        var_a0 = 2;
        var_v1_2 = var_s1;
        do {
        temp_v0_4 = *((u16 *) var_v1_2);

        var_v1_2 += 2;
        var_a0 -= 1;
        *((u16 *) var_a2) = temp_v0_4;
        var_a2 += 2;
        } while (var_a0 != (-1));
        var_a3 += 6;
        var_t1 -= 1;
        var_s1 += 6;
      }
      while (var_t1 != (-1));
      *((s32 *) (((char *) temp_s1) + 0x1C)) = 0xC8;
      *((s32 *) (((char *) temp_s1) + 0x20)) = 0x390;
      *((s32 *) (((char *) temp_s1) + 0x24)) = new_var;
      if (arg1 == 1)
      {
        *((s32 *) (((char *) temp_s1) + 0x24)) = 0x64;
      }
      if (arg1 == 2)
      {
        *((s32 *) (((char *) temp_s1) + 0x24)) = -0x64;
      }
      func_8004251C_overlay_001(*((s32 *) (((char *) temp_s1) + 0x64)), temp_s1 + 8, temp_s1 + 0x38, var_a3);
      return 0;
    }
    goto loop_1;
  }

  *((u8 *) (((char *) var_s0) + 4)) = 0U;
  *((s32 *) var_s1) = 1;
  *((s32 *) (((char *) var_s0) + (-0x110))) = 0xC8;
  *((s32 *) (((char *) var_s0) + 0x4C)) = 1;
  *((s32 *) (((char *) var_s0) + (-0x10C))) = 0x390;
  *((s32 *) (((char *) var_s0) + (-0x108))) = 0;
  if (arg1 == 1)
  {
    *((s32 *) (((char *) var_s0) + (-0x108))) = 0x64;
  }
  var_t0_2 = var_s1 + 8;
  if (arg1 == 2)
  {
    *((s32 *) (((char *) var_s0) + (-0x108))) = -0x64;
  }
  var_a3_2 = (u16 *) 2;
  var_a2_2 = &D_800E8FE8_overlay_001;
  do
  {
    var_a1 = var_t0_2;
    var_a0_2 = 2;
    var_v1_3 = var_a2_2;
    do
    {
      temp_v0_5 = *((u16 *) var_v1_3);
      var_v1_3 += 2;
      var_a0_2 -= 1;
      *((u16 *) var_a1) = temp_v0_5;
      var_a1 += 2;
    }
    while (var_a0_2 != (-1));
    var_t0_2 += 6;
    var_a3_2 -= 1;
    var_a2_2 += 6;
  }
  while (var_a3_2 != ((u16 *) (-1)));
  func_8004251C_overlay_001(*((s32 *) (((char *) var_s0) + (-0xC8))), var_s1 + 8, var_s1 + 0x38, var_a3_2);
  *((u16 *) (((char *) var_s0) + (-0x16))) = (u16) (*((u16 *) (((char *) arg0) + 0x66)));
  temp_v1 = *((s32 *) (new_var2 + 0x234));
  *((s32 *) var_s1) = 1;
  *((s32 *) (((char *) var_s0) + (-0xC8))) = (s32) (temp_v1 + 0x1060);
  *((s32 *) (((char *) var_s0) + 0)) = (s32) (temp_v1 + 0x1028);
  *((u16 *) (((char *) temp_s4) + 0x11C)) = var_s3;
  return 1;
}

