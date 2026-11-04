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
s32 func_800AC5B4_overlay_001();
s32 func_800AF074_overlay_001();
extern s32 D_801443E8;
s32 func_800A7A2C_ovl_01(s32 arg0, s32 arg1)
{
  s32 temp_s0;
  s32 var_a0;
  s32 __repair_result_var_a0;
  s32 var_s1;
  s32 var_v0;
  u8 var_a2;
  void *temp_v1;
  var_v0 = -1;
  var_s1 = -1;
  __repair_result_var_a0 = func_800AF074_overlay_001();
  if (__repair_result_var_a0 != var_v0)
  {
    loop_2:
    temp_s0 = __repair_result_var_a0 & 0xFF;

    temp_v1 = (char *) (temp_s0 * 0x1A0);
    temp_v1 += (s32) (&D_801443E8);
    var_v0 = var_s1;
    if ((*((s32 *) (((char *) temp_v1) + 0x60))) == __repair_result_var_a0)
    {
      if ((*((s32 *) (((char *) temp_v1) + 0x24))) & 2)
      {
        var_a2 = *((u8 *) (((char *) temp_v1) + 0x55));
        do { func_800AC5B4_overlay_001(7, temp_s0, var_a2, arg1 & 0xFF); } while (0);
      }
      else
      {
        var_a2 = *((u8 *) (((char *) temp_v1) + 0x4B));
        do { func_800AC5B4_overlay_001(7, temp_s0, var_a2, arg1 & 0xFF); } while (0);
      }
      var_a0 = *((s32 *) (((char *) ((temp_s0 * 0x1A0) + (&D_801443E8))) + 0x10));
      var_s1 = 0;
      if (var_a0 == var_v0)
      {
        goto block_7;
      }
      goto loop_2;
    }
  }
  else
  {
    block_7:
    var_v0 = var_s1;

  }
  return var_s1;
}

