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
extern s32 D_801489F0;
extern u8 D_80148B70;
typedef struct { unsigned char pad[56]; int value; } __repair_field_38;
void func_800A9C84_ovl_01(void *arg0, f32 arg1)
{
  char *__repair_addr;
  union 
  {
    s32 *pointer;
    unsigned int value;
  } __repair_phase_storage;
  s32 *var_a2;
  
  char *var_v1;
  s32 var_a1;
  void *temp_v0;
  void *temp_v0_2;
  var_a1 = 0;
  if (D_80148650 != 0)
  {
    var_v1 = &D_801484D0;
    loop_2:
    if ((((__repair_field_38 *)arg0)->value) != (*(s32 *)var_v1))
    {
      {
        var_a1 += 1;
      }
      var_v1 += 0xC;
      if (var_a1 < ((s32) D_80148650))
      {
        goto loop_2;
      }
    }

  }
  if (var_a1 == D_80148650)
  {
    temp_v0 = (char *) (var_a1 * 0xC);
    temp_v0 += (s32) (&D_801484D0);
    *((s32 *) (((char *) temp_v0) + 4)) = 0;
    *((s32 *) (((char *) temp_v0) + 8)) = 0;
    D_80148650 = var_a1 + 1;
    *((s32 *) (((char *) temp_v0) + 0)) = (s32) (((__repair_field_38 *)arg0)->value);
  }
  var_a2 = *((void ***) (((char *) ((var_a1 * 0xC) + (&D_801484D0))) + 8));
  __repair_phase_storage.pointer = NULL;
  __repair_addr = ((char *) ((var_a1 * 0xC) + (&D_801484D0))) + 8;
  if (var_a2 != NULL)
  {
    loop_7:
    if (!(arg1 < (*((f32 *) (((char *) var_a2) + 4)))))
    {
      __repair_phase_storage.pointer = var_a2;
      var_a2 = *((s32 **) (((char *) var_a2) + 0));
      if (var_a2 != NULL)
      {
        goto loop_7;
      }
    }

  }
  if (__repair_phase_storage.pointer == NULL)
  {
    *((void **) __repair_addr) = (void *) ((D_80148B70 * 0xC) + (&D_801489F0));
  }
  else
  {
    *__repair_phase_storage.pointer = (D_80148B70 * 0xC) + (&D_801489F0);
  }
  __repair_phase_storage.value = (u8) D_80148B70;
  temp_v0_2 = (char *) (((u8) __repair_phase_storage.value) * 0xC);
  temp_v0_2 += (s32) (&D_801489F0);
  *((s32 **) (((char *) temp_v0_2) + 0)) = var_a2;
  *((void **) (((char *) temp_v0_2) + 8)) = arg0;
  D_80148B70 = ((u8) __repair_phase_storage.value) + 1;
  __repair_addr = (char *) ((((u8) __repair_phase_storage.value) * 0xC) + (&D_801489F0));
  *((f32 *) (((char *) __repair_addr) + 4)) = arg1;
}

