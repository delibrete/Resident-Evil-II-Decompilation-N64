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
#define p ((u8*)arg0)
s32 func_800334F8_ovl_01();
s32 func_80089D34_ovl_01();
s32 func_80032B8C_ovl_01();
s32 func_80033678_ovl_01();
s32 func_80077D48_ovl_01();
s32 func_801672F4_overlay_030();
s32 func_80167B9C_overlay_030();
extern s16 D_80167CEC_ovl_30;
void func_80166664_ovl_30(void *arg0, s32 arg1, s32 arg2)
{
  s16 temp_s1;
  if (p[6] == 0)
  {
    p[6] = 1;
    *((s32 *) (p + 0x1e8)) = 0x07000f00;
    func_800334F8_ovl_01(NULL, arg1, arg2);
    func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
    p[0x207] = 0;
    return;
  }
  func_800334F8_ovl_01(arg0, arg1, arg2, 0);
  if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x100) != 0)
  {
    p[5] = 3;
    *((u16 *) (p + 6)) = 0;
  }
  temp_s1 = 0;
  func_80032B8C_ovl_01(arg0, temp_s1);
  func_80033678_ovl_01(arg0);
  if (((*((u32 *) (*((u32 **) (p + 0x214))))) & 0x10000) && (p[7] == 0))
  {
    p[7] = 1;
    func_80077D48_ovl_01(3, arg0);
    p[0x207] = 15;
  }
  temp_s1 = D_80167CEC_ovl_30;
  if ((*((s8 *) (p + 0x207))) != temp_s1)
  {
    func_801672F4_overlay_030(arg0, (unsigned char) (temp_s1 + 1), 1);
    func_801672F4_overlay_030(arg0, (temp_s1 + 3) & 0xff, 1);
    p[0x207] = (u8) (p[0x207] - 1);
  }
  func_80167B9C_overlay_030(arg0);
}

