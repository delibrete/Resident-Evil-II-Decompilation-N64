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
s32 func_800A7B04_overlay_001();
extern s32 D_8013BC30;
void func_800A1364_ovl_01(s8 arg0, u16 arg1, s32 arg2, s32 arg3)
{
  char *var_a0;
  s32 *new_var;
  s32 temp_a2;
  s32 temp_a3;
  s32 temp_v0;
  s32 var_a2;
  s32 var_v0;
  s8 var_v0_2;
  u32 var_s0;
  
  u8 temp_v1;
  void *temp_v0_2;
  void *var_v1_2;
  var_s0 = 0;
  var_a0 = &D_8013BC30;
  loop_1:
  if (((*((u8 *) (((char *) var_a0) + 0xFC1))) != 0) || ((*((s32 *) (((char *) var_a0) + 0))) != (arg2 & 0x7FFFFFFF)))
  {/*__repair_loop_weight*/do {
    var_s0 += 1;} while (0);
    var_a0 += 0xFF8;
    if (var_s0 >= 8U)
    {
      var_a2 = -1;
    }
    else
    {
      goto loop_1;
    }
  }
  else
  {
    var_a2 = arg2 & 0x80000000;
    var_a2 = var_s0 | var_a2;
  }

  if (var_a2 != (-1))
  {
    if (var_a2 >= 0)
    {
      var_s0 = 0;
      temp_v0 = var_a2 * 0xFF8;
      temp_v0_2 = (char *) temp_v0;
      temp_v0_2 += (s32) (&D_8013BC30);
      func_800A7B04_overlay_001(arg0 & 0xFF, arg1 & 0xFFFF, *((u8 *) (((char *) temp_v0_2) + 0xFC4)), arg3 & 0xFF, arg2);
      var_v0 = var_a2 * 0xFF8;
      do
      {
        temp_v1 = *((u8 *) (((char *) (var_v0 + (&D_8013BC30))) + 0x528));
        if (temp_v1 != (*((u8 *) (((char *) temp_v0_2) + 0xFC4))))
        {
          func_800A7B04_overlay_001(arg0 & 0xFF, arg1 & 0xFFFF, temp_v1, 0, 0);
        }
        var_s0 += 1;
        var_v0 = var_s0 + temp_v0;
      }
      while (var_s0 < 0x40U);
      return;
    }
    temp_a2 = var_a2 & 0x7FFFFFFF;
    temp_a3 = arg3 & 0xF;
    switch (temp_a3)
    {
      new_var = &D_8013BC30;
      case 0:
        *((s8 *) (((char *) ((temp_a2 * 0xFF8) + new_var)) + 0xFE0)) = arg0;
        return;

      case 1:
        *((s32 *) (((char *) ((temp_a2 * 0xFF8) + (&D_8013BC30))) + 0xFF0)) = 0;
        return;

      case 2:
        var_v1_2 = (char *) (temp_a2 * 0xFF8);
        var_v1_2 += (s32) (&D_8013BC30);
        *((s8 *) (((char *) var_v1_2) + 0xFE0)) = arg0;
        var_v0_2 = (*((u8 *) (((char *) var_v1_2) + 0xFEE))) | 8;
        block_26:
      *((s8 *) (((char *) var_v1_2) + 0xFEE)) = var_v0_2;

        break;

      case 3:
        var_v1_2 = (char *) (temp_a2 * 0xFF8);
        var_v1_2 += (s32) (&D_8013BC30);
        *((s8 *) (((char *) var_v1_2) + 0xFE0)) = arg0;
        var_v0_2 = (*((u8 *) (((char *) var_v1_2) + 0xFEE))) | 0x80;
        goto block_26;

    }

  }
}

