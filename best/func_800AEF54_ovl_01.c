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
s32 func_800A5AB4_overlay_001();
s32 func_800AE140_overlay_001();
s32 func_800AEB9C_overlay_001();
extern s32 D_801443E8;
extern u8 D_801479F8;
void func_800AEF54_ovl_01(s32 arg0)
{
  char *var_s0;
  s32 new_var2;
  s32 *new_var;
  s32 var_s1;
  var_s1 = 0;
  if (D_801479F8 != 0)
  {
    var_s0 = &D_801443E8;
    do
    {
      if ((*((s32 *) (((char *) var_s0) + 0))) != 0)
      {
        if ((!(arg0 & 0xFF)) || ((*((u8 *) (((char *) var_s0) + 0x4C))) == 0))
        {
          func_800AE140_overlay_001(var_s0);
          new_var = (s32 *) (((char *) var_s0) + 0x28);
          *new_var = 0;
          *((s32 *) (((char *) var_s0) + 0x24)) = (s32) ((*((s32 *) (((char *) var_s0) + 0x24))) & (~3));
          func_800AEB9C_overlay_001(var_s0);
          new_var2 = *((s32 *) (((char *) var_s0) + 0x24));
          *((s32 *) (((char *) var_s0) + 0)) = 0;
          *((s32 *) (((char *) var_s0) + 0x24)) = (s32) (new_var2 & (~3));
          goto block_6;
        }
      }
      else
      {
        block_6:
        func_800A5AB4_overlay_001(var_s1);

      }
      var_s1 += 1;
      var_s0 += 0x1A0;
    }
    while (var_s1 < ((s32) D_801479F8));
  }
}

