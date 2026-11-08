#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif
s32 func_800755F0_overlay_001();
s32 func_80078B70_overlay_001();
s32 func_80078B8C_overlay_001();
s32 func_800790D4_overlay_001();
s32 func_80079448_overlay_001();
s32 func_800B1FCC_overlay_001();
extern s32 D_80119E18_ovl_01;
extern s8 D_80119E48_ovl_01;
extern s32 D_80119E84_ovl_01;
extern s8 D_8011A22E_ovl_01;
extern s32 D_8011A230_ovl_01;
inline static char *inline_fn(s32 *arg0, int arg1)
{
  return ((char *) arg0) + arg1;
}

void func_80075CCC_ovl_01(void)
{
  int __repair_constant = -1;
  char *var_s0;
  s8 *var_v1;
  s8 temp_a0;
  u32 var_a0;
  do
  {
    func_800B1FCC_overlay_001(0x7F, 0, 0xFF);
  }
  while (0);
  var_s0 = &D_80119E84_ovl_01;
  D_8011A230_ovl_01 = 0;
  D_80119E18_ovl_01 = 0;
  D_8011A22E_ovl_01 = 0;
  __repair_rows: {
    if ((*((u8 *) (((char *) var_s0) + 0))) != 0)
    {
      if ((func_80079448_overlay_001(*((s8 *) (((char *) var_s0) + 2)), 0) << 0x10) != 0)
      {
        func_800790D4_overlay_001(*((s8 *) (((char *) var_s0) + 2)));
      }
      if (var_s0)
      {
        *((u8 *) inline_fn(var_s0, 0)) = 0U;
      }
      else
      {
        *((u8 *) inline_fn(var_s0, 0)) = 0U;
      }
    }
    temp_a0 = *((s8 *) (((char *) var_s0) + 2));
    if (temp_a0 >= 0)
    {
      func_80078B8C_overlay_001(temp_a0);
      *((s8 *) (((char *) var_s0) + 2)) = __repair_constant;
    }
    var_s0 += 8;
  }
if (((u32) var_s0) < ((u32) ((&D_80119E84_ovl_01) + 0x18))) goto __repair_rows;
  func_80078B70_overlay_001(0);
  var_a0 = 0;
  var_v1 = &D_80119E48_ovl_01;
  do
  {
    if ((*var_v1) >= 0)
    {
      do
      {
        *var_v1 = __repair_constant;
      }
      while (0);
    }
    var_a0 += 1;
    var_v1 = &(&D_80119E48_ovl_01)[var_a0];
  }
  while (var_a0 < 8U);
  func_800755F0_overlay_001(var_a0, -1, &D_80119E48_ovl_01);
}

