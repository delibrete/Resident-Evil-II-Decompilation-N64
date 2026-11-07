inline static int __repair_inline(s32 a, s32 b)
{
  return a > b;
}

s32 func_800AEC6C_overlay_001();
s32 func_800AF020_overlay_001();
s32 func_800B1A38_overlay_001();
extern s32 D_80143FD0;
extern s32 D_801443E4;
extern s32 D_801443E8;
extern s32 D_80147A40;
extern s32 D_80147F44;
extern s8 D_80147F49;
extern s32 D_80147F50;
inline static s32 *inline_fn(s32 arg0)
{
  return arg0 + (&D_80147A40);
}

void func_800A8068_ovl_01(s32 arg0)
{
  char *var_a1;
  char *var_v0;
  s32 *new_var;
  s32 var_a2;
  s32 var_a2_3;
  s32 var_v1_2;
  var_a2 = 0;
  var_a1 = &D_801443E8;
  D_80147F44 = arg0;
  D_801443E4 = 0x2800;
  D_80143FD0 = 0x1800;
  D_80147F49 = 0;
  do
  {
    *((s32 *) (((char *) var_a1) + 0x60)) = -1;
    *((s32 *) (((char *) var_a1) + 0)) = 0;
    *((s32 *) (((char *) var_a1) + 0x24)) = 0;
    *((s32 *) (((char *) var_a1) + 0x28)) = 0;
    *((s8 *) (((char *) var_a1) + 0x2E)) = 0;
    *((s16 *) (((char *) var_a1) + 0x68)) = 0;
    *((s8 *) (((char *) var_a1) + 0x4A)) = 0xFF;
    *((s32 *) (((char *) var_a1) + 0x30)) = 0;
    *((s8 *) (((char *) var_a1) + 0x99)) = 0x80;
    *((s8 *) (((char *) var_a1) + 0x9A)) = 0;
    *((s32 *) (((char *) var_a1) + 0x38)) = 0x3F0000;
    *((s32 *) (((char *) var_a1) + 0x40)) = 0;
    *((s32 *) (((char *) var_a1) + 0x44)) = 0;
    *((s8 *) (((char *) var_a1) + 0x48)) = 0;
    *((s8 *) (((char *) var_a1) + 0x49)) = 0;
    *((s8 *) (((char *) var_a1) + 0xBD)) = 0;
    *((s8 *) (((char *) var_a1) + 0xBE)) = 0x17;
    *((s32 *) (((char *) var_a1) + 0x16C)) = 0;
    *((s16 *) (((char *) var_a1) + 0x170)) = 0;
    *((s32 *) (((char *) var_a1) + 0x178)) = 0;
    *((s16 *) (((char *) var_a1) + 0x17C)) = 0;
    *((s32 *) (((char *) var_a1) + 0x8C)) = 0x1F4;
    *((s8 *) (((char *) var_a1) + 0x98)) = 0;
    do
    {
      var_a2 += 1;
    }
    while (0);
    var_a1 += 0x1A0;
  }
  while (__repair_inline(0x20, var_a2));
  var_a2 = 0;
  var_a1 = &D_80147A40;
  do
  {
    *((s32 *) (((char *) var_a1) + 0)) = 0;
    *((s32 *) (((char *) var_a1) + 4)) = 0;
    *((s32 *) (((char *) var_a1) + 0xC)) = 0;
    *((s8 *) (((char *) var_a1) + 0x14)) = 4;
    *((s32 *) (((char *) var_a1) + 0x18)) = 0x7F0000;
    var_a2 += 1;
    var_a1 += 0x28;
  }
  while (__repair_inline(0x20, var_a2));
  *((s8 *) (((char *) (&D_80147A40)) + 0x4EC)) = 1;
  var_a2_3 = 0;
  var_v1_2 = 0x398;
  new_var = &D_80147A40;
  do
  {
    *((s8 *) (((char *) inline_fn(var_v1_2)) + 0x14)) = 0;
    var_a2_3 += 1;
    var_v1_2 += 0x28;
  }
  while (__repair_inline(8, var_a2_3));
  *((s32 *) (((char *) new_var) + 0x348)) = 0x7F0000;
  *((s32 *) (((char *) new_var) + 0x370)) = 0x7F0000;
  func_800AF020_overlay_001(new_var, 4);
  func_800AEC6C_overlay_001();
  var_a2_3 = 0xF;
  var_v0 = (&D_80147F50) + 0x1E;
  do
  {
    *((s16 *) var_v0) = 0;
    var_a2_3 -= 1;
    var_v0 -= 2;
  }
  while (var_a2_3 >= 0);
  func_800B1A38_overlay_001();
}

