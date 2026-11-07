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
s32 func_80032EA4_ovl_01();
s32 func_80059E30_ovl_01();
extern s32 D_800C7650;
inline static char *inline_fn(char *arg0)
{
  return arg0;
}

void func_8016EF94_overlay_060(void *arg0)
{
  s32 temp_a0;
  unsigned int new_var;
  u32 temp_s2;
  temp_s2 = *((u32 *) (((char *) arg0) + 0x28C));
  temp_a0 = func_80032EA4_ovl_01(arg0, *((s32 *) (((char *) (&D_800C7650)) + 0x19AA8)), *((s32 *) (((char *) (&D_800C7650)) + 0x19AB0)), 0x80);
  if (((((((*((s32 *) (((char *) arg0) + 0x28))) >= 0x2329) && (temp_s2 < (new_var = 0x1770U))) && ((temp_a0 << 0x10) == 0)) && ((*((u8 *) (((char *) (&D_800C7650)) + 0x19CEF))) == 0)) && ((*((s16 *) (((char *) (&D_800C7650)) + 0x19C72))) <= 0)) && (!((double) ((*((u16 *) (((char *) arg0) + 0x2C2))) & 4))))
  {
    *((s32 *) (((char *) arg0) + 4)) = 0x01040000;
    do
    {
      func_80059E30_ovl_01(0x1F4, 0);
    }
    while (0);
    *((u8 *) (((char *) (&D_800C7650)) + 0x19CEF)) = (u8) ((*((u8 *) (((char *) (&D_800C7650)) + 0x19CEF))) | 0x80);
    *((s8 *) (((char *) arg0) + 0x2B4)) = 4;
    *((s8 *) (((char *) arg0) + 0x2B5)) = 0;
    *((s32 *) inline_fn(((char *) (&D_800C7650)) + 0x19A3C)) = (s32) ((*((s32 *) (((char *) (&D_800C7650)) + 0x19A3C))) | 0x100);
  }
}

