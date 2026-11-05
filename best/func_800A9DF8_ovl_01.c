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
extern s32 D_801484D0;
extern u8 D_80148650;
extern s32 D_80148660;
extern u8 D_801489E0;
typedef struct { unsigned char pad[56]; int value; } __repair_field_38;
s32 func_800A9DF8_ovl_01(void *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5)
{
  s32 *temp_v0_2;
  s32 *temp_v1;
  s32 *var_a1_2;
  char *var_v1;
  s32 var_a1;
  u8 temp_a0;
  void *temp_a2;
  void *temp_v0;
  void *temp_v1_2;
  var_a1 = 0;
  if (D_80148650 != 0)
  {
    var_v1 = &D_801484D0;
    loop_2:
    if ((((__repair_field_38 *)arg0)->value) != (*(s32 *)var_v1))
    {
      var_a1 += 1;
      var_v1 += 0xC;
      if (var_a1 < ((s32) D_80148650))
      {
        goto loop_2;
      }
    }

  }
  if (var_a1 == D_80148650)
  {
    if ((var_a1 & 0xFF) == 0x20)
    {
      return 0;
    }
    temp_v0 = (char *) (var_a1 * 0xC);
    temp_v0 += (s32) (&D_801484D0);
    *((s32 *) (((char *) temp_v0) + 4)) = 0;
    *((s32 *) (((char *) temp_v0) + 8)) = 0;
    D_80148650 = var_a1 - -1;
    *((s32 *) (((char *) temp_v0) + 0)) = (s32) (((__repair_field_38 *)arg0)->value);
    goto block_8;
  }
  block_8:
  if (D_801489E0 != 0x20)
  {
    temp_a2 = (var_a1 * 0xC) + (&D_801484D0);
    var_a1_2 = *((s32 ***) (((char *) temp_a2) + 4));
    if (var_a1_2 != NULL)
    {
      if ((*var_a1_2) != NULL)
      {
        loop_11:
        if (!((*((f32 *) (((char *) var_a1_2) + 4))) < arg1))
        {
          var_a1_2 = *((s32 **) (((char *) var_a1_2) + 0));
          if ((*var_a1_2) != NULL)
          {
            goto loop_11;
          }
        }

      }
      temp_v0_2 = (D_801489E0 * 0x1C) + (&D_80148660);
      *temp_v0_2 = *var_a1_2;
      *var_a1_2 = temp_v0_2;
    }
    else
    {
      temp_v1 = (char *)((D_801489E0 * 0x1C)); temp_v1 += (s32)((&D_80148660));
      *temp_v1 = NULL;
      *((s32 **) (((char *) temp_a2) + 4)) = temp_v1;
    }
    temp_a0 = D_801489E0;
    temp_v1_2 = (temp_a0 * 0x1C) + (&D_80148660);
    var_v1 = arg0;
    *((void **) (((char *) temp_v1_2) + 0x18)) = var_v1;
    *((f32 *) (((char *) temp_v1_2) + 8)) = arg2;
    *((f32 *) (((char *) temp_v1_2) + 0xC)) = arg3;
    *((f32 *) (((char *) temp_v1_2) + 0x14)) = arg5;
    *((f32 *) (((char *) temp_v1_2) + 0x10)) = arg4;
    D_801489E0 = temp_a0 + 1;
    *((f32 *) (((char *) ((temp_a0 * 0x1C) + (&D_80148660))) + 4)) = arg1;
    return 1;
  }

  return 0;
}

