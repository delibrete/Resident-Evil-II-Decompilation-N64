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
extern u32 D_80167E58_ovl_17[];
extern u32 D_80167E0C_ovl_17[];
s16 func_80074D94_ovl_01();
void func_80089D34_ovl_01();
s32 func_80166D98_overlay_017();
s32 func_801620C8_ovl_17();
s32 func_8016477C_ovl_17();
s32 func_80166FBC_ovl_17();
void func_80164748_ovl_17();
void func_801646B4_ovl_17();
void func_80164600_ovl_17(void *arg0, s32 arg1, s32 arg2)
{
  int new_var;
  u8 *p = arg0;
  u32 t;
  func_80089D34_ovl_01(arg0, arg1, arg2);
  if (p[0x2D3])
  {
    t = (*((u32 *) (p + 0x290))) & 0x3fffffff;
  }
  else
  {
    t = *((u32 *) (p + 0x28c));
  }
  if ((t >= 0x1c20) && (!func_80166D98_overlay_017(arg0, *((s32 *) (p + 0x2c4)), p[0x2cc])))
  {
    return;
  }
  if (p[0x2D3])
  {
    t = (*((u32 *) (p + 0x290))) & 0x3fffffff;
    if (t < 0xbb8)
    {
      p[5] = 7;
    }
    else
    {
      p[5] = 3;
    }
  }
  else
  {
    t = *((u32 *) (p + 0x28c));
    if (t < 0xbb8)
    {
      p[5] = 7;
    }
    else
    {
      new_var = 3;
      p[5] = new_var;
    }
  }
  *((s16 *) (p + 6)) = 0;
}

void func_80164890_ovl_17();
