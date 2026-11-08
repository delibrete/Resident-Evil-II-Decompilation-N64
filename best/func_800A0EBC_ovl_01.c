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
s32 func_800AEE20_overlay_001();
extern s32 *D_8013BC20;
extern s32 D_8013BC30;
void func_800A0EBC_ovl_01(s32 arg0)
{
  s32 *temp_v0;
  s32 *temp_v0_2;
  s32 *var_a0_2;
  s32 *var_a0_3;
  char *var_a1;
  s32 *new_var;
  s32 var_a0;
  s32 var_v1_2;
  u32 var_v1;
  void *temp_v1;
  void *temp_v1_2;
  void *temp_v1_3;
  void *var_s0;
  void *var_s0_2;
  var_a1 = &D_8013BC30;
  var_v1 = 0;
  loop_1:
  if (((*((u8 *) (((char *) var_a1) + 0xFC1))) != 0) || ((*((s32 *) (((char *) var_a1) + 0))) != (arg0 & 0x7FFFFFFF)))
  {
    var_v1 += 1;
    var_a1 += 0xFF8;
    if (var_v1 >= 8U)
    {
      var_a0 = -1;
    }
    else
    {
      goto loop_1;
    }
  }
  else
  {
    var_a0 = var_v1 | (arg0 & 0x7fffffff);
  }

  if (var_a0 != (-1))
  {
    if (var_a0 >= 0)
    {
      temp_v1 = (char *) (var_a0 * 0xFF8);
      temp_v1 += (s32) (&D_8013BC30);
      if (((*((u8 *) (((char *) temp_v1) + 0xFC0))) != 0) && ((*((u8 *) (((char *) temp_v1) + 0xFC1))) == 0))
      {
        *((u8 *) (((char *) temp_v1) + 0xFC0)) = 0U;
        var_s0 = *((void **) (((char *) temp_v1) + 0xF78));
        if (var_s0 != NULL)
        {
          do
          {
            func_800AEE20_overlay_001(*((s32 *) (((char *) var_s0) + 8)));
            var_s0 = *((void **) (((char *) var_s0) + 0));
          }
          while (var_s0 != NULL);
        }
        var_s0_2 = *((void **) (((char *) temp_v1) + 0xF7C));
        var_v1_2 = var_a0 << 9;
        if (var_s0_2 != NULL)
        {
          __repair_rows: {
            func_800AEE20_overlay_001(*((s32 *) (((char *) var_s0_2) + 8)));
            var_s0_2 = *((void **) (((char *) var_s0_2) + 0));
            var_v1_2 = var_a0 << 9;
          }
if (var_s0_2 != NULL) goto __repair_rows;
        }
        temp_v1_2 = (char *) ((var_v1_2 - var_a0) * 8);
        temp_v1_2 += (s32) (&D_8013BC30);
        var_a0_2 = *((s32 **) (((char *) temp_v1_2) + 0xF78));
        if (var_a0_2 != NULL)
        {
          if ((*var_a0_2) != NULL)
          {
            do
            {
              var_a0_2 = *var_a0_2;
            }
            while ((*var_a0_2) != NULL);
          }
          if (D_8013BC20 != NULL)
          {
            *var_a0_2 = (new_var = D_8013BC20);
            *((s32 **) (((char *) new_var) + 4)) = var_a0_2;
          }
          temp_v0 = *((s32 **) (((char *) temp_v1_2) + 0xF78));
          *((s32 **) (((char *) temp_v1_2) + 0xF78)) = NULL;
          D_8013BC20 = temp_v0;
        }
        var_a0_3 = *((s32 **) (((char *) temp_v1_2) + 0xF7C));
        if (var_a0_3 != NULL)
        {
          if ((*var_a0_3) != NULL)
          {
            do
            {
              var_a0_3 = *var_a0_3;
            }
            while ((*var_a0_3) != NULL);
          }
          if (D_8013BC20 != NULL)
          {
            *var_a0_3 = D_8013BC20;
            *((s32 **) (((char *) D_8013BC20) + 4)) = var_a0_3;
          }
          temp_v0_2 = *((s32 **) (((char *) temp_v1_2) + 0xF7C));
          *((s32 **) (((char *) temp_v1_2) + 0xF7C)) = NULL;
          D_8013BC20 = temp_v0_2;
        }
      }
      *((s8 *) (((char *) ((var_a0 * 0xFF8) + (&D_8013BC30))) + 0xFC1)) = 1;
      return;
    }
    temp_v1_3 = ((var_a0 & 0x7FFFFFFF) * 0xFF8) + (&D_8013BC30);
    if (((*((u8 *) (((char *) temp_v1_3) + 0xFC0))) != 0) && ((*((u8 *) (((char *) temp_v1_3) + 0xFC1))) == 0))
    {
      *((s32 *) (((char *) temp_v1_3) + 0xFF0)) = 0;
    }
  }
}

