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
s32 func_80033054();
extern s32 D_800C7650;
extern s32 D_800E10F8;
extern s32 D_8016FB30_overlay_053;
void func_8016F140_overlay_053(void *arg0)
{
  char *new_var;
  if ((((func_80033054(&D_800E10F8, ((*((s32 *) (((char *) arg0) + 0x234))) + ((*((u8 *) (((char *) ((((*((u16 *) (((char *) arg0) + 0x1AA))) & 1) * 7) + (&D_8016FB30_overlay_053))) + 2))) * 0x178)) + 0x4C) << 0x10) != 0) && (((u8) (*((u8 *) (((char *) arg0) + 0x1E9)))) >= 5U)) && ((*((u16 *) (((char *) (&D_800C7650)) + 0x19A78))) == 0))
  {
    new_var = (char *) (&D_800C7650);
    if (!((*((u8 *) (((char *) (&D_800C7650)) + 0x19CEF))) & 0x80))
    {
      *((s32 *) (((char *) arg0) + 4)) = 0x01040000;
      return;
    }
    *((u8 *) (new_var + 0x19CEF)) = (u8) ((*((u8 *) (((char *) (&D_800C7650)) + 0x19CEF))) | 0x80);
    new_var = ((char *) arg0) + 4;
    *((s32 *) new_var) = 0x01060000;
  }
}

