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
extern s32 D_800C7650_ovl_01;
extern s32 D_800E1898_ovl_01;
s32 *func_8004F57C_ovl_01(void *arg0, void *arg1)
{
  char *var_a3;
  char *var_t0;
  s32 temp_a1;
  s32 temp_v1;
  s32 __repair_phase_temp_v1;
  s32 temp_v1_2;
  s32 *new_var;
  var_t0 = &D_800E1898_ovl_01;
  if (((u32) (&D_800E1898_ovl_01)) < ((u32) (*((u32 *) (((char *) (&D_800C7650_ovl_01)) + 0x20F48)))))
  {
    new_var = &(*(s32 *)var_t0);
    var_a3 = (char *)((&D_800E1898_ovl_01)); var_a3 += (s32)(0x128);
    loop_2:
    temp_v1 = *new_var;

    if ((temp_v1 & 0x101) != 0x101)
    {
      var_t0 += 0x368;
      goto block_17;
    }
    if (temp_v1 & 2)
    {
      var_t0 += 0x368;
      goto block_17;
    }
    if ((*((s32 *) (((char *) arg0) + 0x2C))) != ((*((s32 *) (((char *) var_a3) + (-4)))) - (*((u16 *) (((char *) var_a3) + 0x12)))))
    {
      var_t0 += 0x368;
      goto block_17;
    }
    temp_v1_2 = -((s32) (((u16) (*((u16 *) (((char *) arg1) + 0xC)))) >> 1));
    temp_a1 = temp_v1_2 + (*((u16 *) (((char *) var_a3) + 4)));
    __repair_phase_temp_v1 = temp_v1_2 + (*((u16 *) (((char *) var_a3) + 6)));
    temp_v1_2 = ((u32) (temp_a1 * 2)) < ((u32) (((*((s32 *) (((char *) var_a3) + (-8)))) - (*((s32 *) (((char *) arg1) + 0)))) + temp_a1));
    if (((u32) (__repair_phase_temp_v1 * 2)) < ((u32) (((*((s32 *) (((char *) var_a3) + 0))) - (*((s32 *) (((char *) arg1) + 8)))) + __repair_phase_temp_v1)))
    {
      temp_v1_2 |= 2;
    }
    if (temp_v1_2 != 0)
    {
      var_t0 += 0x368;
      block_17:
      var_a3 += 0x368;

      if (((u32) var_t0) >= ((u32) (*((u32 *) (((char *) (&D_800C7650_ovl_01)) + 0x20F48)))))
      {
        return *((s32 **) (((char *) arg0) + 0x280));
      }
      goto loop_2;
    }
    return var_t0;
  }
  return *((s32 **) (((char *) arg0) + 0x280));
}

