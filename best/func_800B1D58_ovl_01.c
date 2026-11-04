#ifndef M2C_DEFINES
#define M2C_DEFINES
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
s32 func_800A5618_overlay_001();
s32 func_800A5660_overlay_001(s32 arg0);
s32 func_800AC5B4_overlay_001();
s32 func_800AF074_overlay_001();
extern u8 D_801362B0_ovl_01;
extern s32 D_801443E8;
s32 func_800B1D58_ovl_01(s32 arg0, u8 arg1)
{
  s32 temp_s0;
  s32 var_s1;
  int new_var;
  s32 __repair_result_var_s1;
  s32 var_s2;
  u8 var_a2;
  void *temp_v1;
  new_var = -1;
  var_s2 = new_var;
  if (D_801362B0_ovl_01 != 0)
  {
    func_800A5618_overlay_001();
    __repair_result_var_s1 = func_800AF074_overlay_001(arg0);
    if (__repair_result_var_s1 != (-1))
    {
      loop_3:
      temp_s0 = __repair_result_var_s1 & 0xFF;

      temp_v1 = (char *) (temp_s0 * 0x1A0);
      temp_v1 += (s32) (&D_801443E8);
      if ((*((s32 *) (((char *) temp_v1) + 0x60))) == __repair_result_var_s1)
      {
        if ((*((s32 *) (((char *) temp_v1) + 0x24))) & 2)
        {
          var_a2 = *((u8 *) (((char *) temp_v1) + 0x55));
          if (1)
          {
          }
          do { func_800AC5B4_overlay_001(0x5B, temp_s0, var_a2, arg1 & 0xFF); } while (0);
        }
        else
        {
          var_a2 = *((u8 *) (((char *) temp_v1) + 0x4B));
          func_800AC5B4_overlay_001(0x5B, temp_s0, var_a2, arg1 & 0xFF);
        }
        var_s1 = *((s32 *) (((char *) ((temp_s0 * 0x1A0) + (&D_801443E8))) + 0x10));
        var_s2 = 0;
        if (var_s1 != new_var)
        {
          goto loop_3;
        }
      }
    }
    if (__repair_result_var_s1)
    {
      func_800A5660_overlay_001(arg0);
    }
    else
    {
      func_800A5660_overlay_001(arg0);
    }
  }
  return var_s2;
}

