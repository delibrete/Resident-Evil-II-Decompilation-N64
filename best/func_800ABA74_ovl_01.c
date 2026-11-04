s32 func_800AC63C_ovl_01(s32, s32, s32, s32);
s32 func_800AC6D4_ovl_01(s32, s32, s32);
extern s32 D_80148C20;
extern s32 D_8014CF20;
static inline int inline_fn(s32 arg0, int arg1)
{
  return ((arg0 & 0xFF) * 0x86) + arg1;
}

void func_800ABA74_ovl_01(s32 arg0, s32 arg1, s32 arg3)
{
  int __repair_constant = 0x40;
  s32 temp_a2;
  s32 new_var;
  s32 temp_s0;
  s32 temp_s1;
  s32 temp_v1;
  s32 temp_v1_2;
  s32 var_a2_2;
  s32 var_a2_3;
  s32 var_a2_4;
  s32 var_a2_5;
  s32 var_a3;
  s32 var_v0;
  s32 var_v0_2;
  u32 var_a0;
  u32 var_a0_2;
  var_a3 = arg3;
  temp_a2 = arg1 & 0xFF;
  if (temp_a2 != 0xFF)
  {
    var_a0 = 0;
    new_var = arg0 & 0xFF;
    var_a3 = new_var * 0x86;
    var_v0 = new_var * 0x86;
    do
    {
      *((var_v0 + (temp_a2 * 0x860)) + (&D_80148C20)) = 0;
      var_a0 += 1;
      var_v0 = var_a0 + var_a3;
    }
    while (var_a0 < 0x86U);
    temp_a2 = arg1 & 0xFF;
  }
  else
  {
    var_a0_2 = 0;
    temp_v1_2 = 0xFF;
    temp_v1_2 = arg0 & temp_v1_2;
    var_v0_2 = temp_v1_2 * 0x86;
    do
    {
      *(var_v0_2 + (&D_8014CF20)) = 0;
      var_a0_2 += 1;
      var_v0_2 = var_a0_2 + (temp_v1_2 * 0x86);
    }
    while (var_a0_2 < 0x86U);
    temp_a2 = arg1 & 0xFF;
  }
  if (temp_a2 != 0xFF)
  {
    *(((((arg0 & 0xFF) * 0x86) + 7) + (temp_a2 * 0x860)) + (&D_80148C20)) = 0x7F;
  }
  else
  {
    *((s8 *) (((char *) (((arg0 & 0xFF) * 0x86) + (&D_8014CF20))) + 7)) = 0x7F;
  }
  var_a2_2 = arg1 & 0xFF;
  if (var_a2_2 != 0xFF)
  {
    *(((((arg0 & 0xFF) * 0x86) + 0xA) + (var_a2_2 * 0x860)) + (&D_80148C20)) = __repair_constant;
  }
  else
  {
    *((s8 *) (((char *) (((arg0 & 0xFF) * 0x86) + (&D_8014CF20))) + 0xA)) = __repair_constant;
    var_a2_2 = arg1 & 0xFF;
  }
  if (var_a2_2 != 0xFF)
  {
    *(((((arg0 & 0xFF) * 0x86) + 0x80) + (var_a2_2 * 0x860)) + (&D_80148C20)) = __repair_constant;
  }
  else
  {
    *((s8 *) (((char *) (((arg0 & 0xFF) * 0x86) + (&D_8014CF20))) + 0x80)) = __repair_constant;
  }
  var_a2_3 = arg1 & 0xFF;
  if (var_a2_3 != 0xFF)
  {
    *(((((arg0 & 0xFF) * 0x86) + 0x81) + (var_a2_3 * 0x860)) + (&D_80148C20)) = 0;
  }
  else
  {
    *((s8 *) (((char *) (((arg0 & 0xFF) * 0x86) + (&D_8014CF20))) + 0x81)) = 0;
    var_a2_3 = arg1 & 0xFF;
  }
  if (var_a2_3 != 0xFF)
  {
    *(((((arg0 & 0xFF) * 0x86) + 0x40) + (var_a2_3 * 0x860)) + (&D_80148C20)) = 0;
  }
  else
  {
    *((s8 *) (((char *) (((arg0 & 0xFF) * 0x86) + (&D_8014CF20))) + 0x40)) = 0;
  }
  var_a2_4 = arg1 & 0xFF;
  if (var_a2_4 != 0xFF)
  {
    *((inline_fn(arg0, 0x41) + (var_a2_4 * 0x860)) + (&D_80148C20)) = 0;
  }
  else
  {
    *((s8 *) (((char *) (((arg0 & 0xFF) * 0x86) + (&D_8014CF20))) + 0x41)) = 0;
    var_a2_4 = arg1 & 0xFF;
  }
  if (var_a2_4 != 0xFF)
  {
    *(((((arg0 & 0xFF) * 0x86) + 0x5B) + (var_a2_4 * 0x860)) + (&D_80148C20)) = 0;
  }
  else
  {
    *((s8 *) (((char *) (((arg0 & 0xFF) * 0x86) + (&D_8014CF20))) + 0x5B)) = 0;
  }
  var_a2_5 = arg1 & 0xFF;
  if (var_a2_5 != 0xFF)
  {
    *(((((arg0 & 0xFF) * 0x86) + 0x83) + (var_a2_5 * 0x860)) + (&D_80148C20)) = 0;
  }
  else
  {
    *((s8 *) (((char *) (((arg0 & 0xFF) * 0x86) + (&D_8014CF20))) + 0x83)) = 0;
    var_a2_5 = arg1 & 0xFF;
  }
  if (var_a2_5 != 0xFF)
  {
    *(((((arg0 & 0xFF) * 0x86) + 0x84) + (var_a2_5 * 0x860)) + (&D_80148C20)) = __repair_constant;
  }
  else
  {
    *((s8 *) (((char *) (((arg0 & 0xFF) * 0x86) + (&D_8014CF20))) + 0x84)) = __repair_constant;
  }
  temp_a2 = arg1 & 0xFF;
  if (temp_a2 != 0xFF)
  {
    *(((((arg0 & 0xFF) * 0x86) + 0x85) + (temp_a2 * 0x860)) + (&D_80148C20)) = 0;
  }
  else
  {
    *((s8 *) (((char *) (((arg0 & 0xFF) * 0x86) + (&D_8014CF20))) + 0x85)) = 0;
  }
  temp_s1 = arg0 & 0xFF;
  new_var = var_a3;
  temp_s0 = arg1 & 0xFF;
  func_800AC63C_ovl_01(temp_s1, temp_s0, 0xFF, new_var);
  func_800AC6D4_ovl_01(temp_s1, temp_s0, 0);
}

