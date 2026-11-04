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
s32 func_80033634_ovl_01();
s32 func_80077D48_ovl_01();
s32 func_80089D34_ovl_01();
s32 func_80165308_overlay_012();
s32 func_801659DC_overlay_012();
s32 func_80166900_overlay_012();
extern s32 D_800C7650_ovl_01;
extern volatile long long D_80166DEC_ovl_12;
void func_80164D10_ovl_12(void *arg0, s32 arg1, s32 arg2)
{
  u8 temp_v1;
  void *temp_s2;
  temp_s2 = arg0 + 0x2B4;
  *((u16 *) (((char *) arg0) + 0x1F4)) = (u16) (((*((u16 *) (((char *) (&D_800C7650_ovl_01)) + 0x19AE6))) & 0xFFF) - ((*((u16 *) (((char *) arg0) + 0x66))) & 0xFFF));
  *((u16 *) (((char *) arg0) + 0x1F4)) = (u16) ((*((u16 *) (((char *) arg0) + 0x1F4))) + (*(((func_80033634_ovl_01() & 7) * 2) + (&D_80166DEC_ovl_12))));
  *((u16 *) (((char *) arg0) + 0x1AA)) = (u16) ((*((u16 *) (((char *) arg0) + 0x1AA))) & 0xDFFF);
  *((u8 *) (((char *) arg0) + 0x25C)) = (u8) ((*((u8 *) (((char *) arg0) + 0x25C))) | 2);
  if ((*((u8 *) (((char *) arg0) + 4))) == 2)
  {
    func_80077D48_ovl_01(1, arg0);
  }
  temp_v1 = *((u8 *) (((char *) temp_s2) + 0xB));
  if ((temp_v1 != 0) && ((*((u8 *) (((char *) temp_s2) + 0x15))) == 0))
  {
    *((u8 *) (((char *) temp_s2) + 0xB)) = (u8) (temp_v1 | 0x80);
    func_80165308_overlay_012(arg0, arg1, arg2);
    return;
  }
  if ((*((u8 *) (((char *) temp_s2) + 1))) != 0)
  {
    *((s16 *) (((char *) arg0) - -6)) = 0x100;
    *((u16 *) (((char *) arg0) + 0x1E0)) = (u16) (((s32) ((*((u16 *) (((char *) arg0) + 0x1E0))) << 0x10)) >> 0x11);
  }
  else
  {
    *((s16 *) (((char *) arg0) + 6)) = 0x200;
    *((u16 *) (((char *) arg0) + 0x1E0)) = 0xF0U;
    func_801659DC_overlay_012(arg0, 0);
  }
  *((s8 *) (((char *) temp_s2) + 8)) = 0;
  *((s32 *) (((char *) arg0) + 0x1E8)) = 0x11000700;
  *((s8 *) (((char *) arg0) + 0x2BF)) = 1;
  *((s16 *) (((char *) arg0) + 0x1F6)) = 0x200;
  func_80089D34_ovl_01(arg0, arg1, arg2, 0x200);
  *((s8 *) (((char *) temp_s2) + 7)) = 1;
  func_80166900_overlay_012(arg0, 0, 0);
}

