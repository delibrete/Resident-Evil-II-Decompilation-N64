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
u32 func_80040BE4_ovl_01();
extern s32 D_800E10F8;
s32 func_8016E920_overlay_050(void *arg0, s32 arg1, u16 arg2, u16 arg3, u32 arg4)
{
  s32 temp_lo;
  s32 temp_v0;
  s32 temp_v0_2;
  u32 temp_v0_3;
  u8 temp_v1;
  void *temp_s0;
  temp_s0 = (arg1 * 0x178) + (*((s32 *) (((char *) arg0) + 0x234)));
  temp_v0 = (*((s32 *) (((char *) (&D_800E10F8)) + 0))) - (*((s32 *) (((char *) temp_s0) + 0x4C)));
  temp_lo = temp_v0 * temp_v0;
  temp_v0_2 = *((s32 *) (((char *) temp_s0) + 0x54));
  temp_v0_2 = (*((s32 *) (((char *) (&D_800E10F8)) + 8))) - temp_v0_2;
  temp_v0_3 = func_80040BE4_ovl_01(temp_lo + (temp_v0_2 * temp_v0_2));
  *((u16 *) (((char *) arg0) + 0x2B8)) = (u16) (*((u16 *) (((char *) temp_s0) + 0x4E)));
  *((u16 *) (((char *) arg0) + 0x2BA)) = (u16) (*((u16 *) (((char *) temp_s0) + 0x56)));
  temp_v1 = *((u8 *) (((char *) arg0) + 0x1E9));
  if (temp_v1 >= ((u32) (arg2 & 0xFFFF)))
  {
    if ((((u32) (arg3 & 0xFFFF)) >= temp_v1) && ((*((s16 *) (((char *) arg0) + 0x1F4))) == 0))
    {
      if (arg4 >= temp_v0_3)
      {
        *((s16 *) (((char *) arg0) + 0x1F4)) = 1;
        return 1;
      }
      goto block_5;
    }
    return 0;
  }
  block_5:
  return 0;

}

