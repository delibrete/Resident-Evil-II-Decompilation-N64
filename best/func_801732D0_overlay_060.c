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
s32 func_80084514_ovl_01();
extern s32 D_800C7650;
void func_801732D0_overlay_060(s32 arg0, s32 arg1)
{
  int __repair_literal;
  void *temp_s0;
  char *new_var;
  __repair_literal = 4;
  __repair_literal = 0x19D38;
  temp_s0 = *((void **) (((char *) (((arg0 + 3) * __repair_literal) + (&D_800C7650))) + __repair_literal));
  new_var = (char *) temp_s0;
  *((s32 *) (new_var + 4)) = func_80084514_ovl_01(arg1);
}

