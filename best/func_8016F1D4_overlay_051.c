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
s32 func_800662B8_ovl_01();
extern s32 D_80173160_overlay_051;
void func_8016F1D4_overlay_051(void *arg0, s32 arg1, s32 arg2)
{
  char *__repair_addr;
  s16 var_v0;
  s16 var_v0_2;
  s32 temp_v0;
  s32 temp_v0_2;
  s32 var_a2;
  s32 temp_v0_3;
  char *new_var;
  s8 temp_v1;
  void *temp_a1;
  var_a2 = arg2;
  temp_v1 = *((s8 *) (((char *) arg0) + 0x2BA));
  temp_a1 = (*((s32 *) (((char *) arg0) + 0x234))) + 0x758;
  switch (temp_v1)
  {
    case 0:
      D_80173160_overlay_051 = 0;
      *((s8 *) (((char *) arg0) + 0x2BA)) = (s8) (((u8) (*((s8 *) (((char *) arg0) + 0x2BA)))) + 1);

    case 1:
      var_v0 = (D_80173160_overlay_051 * (D_80173160_overlay_051 << 0xB)) / 100;
      __repair_addr = (char *) (*((void **) (((char *) temp_a1) + 0x120)));
      block_8:
    *((s16 *) (((char *) __repair_addr) + 0xC)) = var_v0;

      func_800662B8_ovl_01(arg0, temp_a1, var_a2);
      temp_v0 = D_80173160_overlay_051 + 1;
      D_80173160_overlay_051 = temp_v0;
      if (temp_v0 == 0xA)
    {
      *((s8 *) (((char *) arg0) + 0x2BA)) = (s8) (((u8) (*((s8 *) (((char *) arg0) + 0x2BA)))) + 1);
      return;
    }

    default:
      return;

    case 2:
      temp_v0_2 = D_80173160_overlay_051 - 1;
      D_80173160_overlay_051 = temp_v0_2;
      if (temp_v0_2 == 0)
    {
      *((s8 *) (((char *) arg0) + 0x2BA)) = (s8) (((u8) (*((s8 *) (((char *) arg0) + 0x2BA)))) + 1);
    }
      var_a2 = (D_80173160_overlay_051 * (D_80173160_overlay_051 << 0xB)) / 100;
      var_v0_2 = 0x1000 - var_a2;
      new_var = (char *) (*((void **) (((char *) temp_a1) + 0x120)));
      block_13:
    *((s16 *) (new_var + 0xC)) = var_v0_2;

      do
    {
      func_800662B8_ovl_01(arg0, temp_a1, var_a2);
    }
    while (0);
      break;

    case 3:
      var_a2 = (D_80173160_overlay_051 * (D_80173160_overlay_051 << 0xB)) / 100;
      var_v0 = 0x1000 - var_a2;
      goto block_8;

    case 4:
      temp_v0_3 = D_80173160_overlay_051 - 1;
      D_80173160_overlay_051 = temp_v0_3;
      if (temp_v0_3 == 0)
    {
      var_v0_2 = (D_80173160_overlay_051 * (D_80173160_overlay_051 << 0xB)) / 100;
      *((s8 *) (((char *) arg0) + 0x2BA)) = 1;
    }
      goto block_13;

  }

}

