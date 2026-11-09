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
s32 func_80089D34_ovl_01();
s32 func_80166A84_overlay_017();
s32 func_801678B8_overlay_017();
extern s32 D_80167B80_ovl_17;
void func_8016267C_overlay_017(void *arg0, s32 arg1, s32 arg2)
{
  char *__repair_addr;
  s32 sp10;
  s32 sp14;
  s32 sp18;
  s32 sp1C;
  s32 temp_a0;
  u16 temp_v0;
  u16 temp_v1_2;
  int new_var;
  u8 temp_v1;
  sp10 = *((s32 *) (((char *) (&D_80167B80_ovl_17)) + 0));
  sp14 = *((s32 *) (((char *) (&D_80167B80_ovl_17)) + 4));
  new_var = 6;
  sp18 = *((s32 *) (((char *) (&D_80167B80_ovl_17)) + 8));
  sp1C = *((s32 *) (((char *) (&D_80167B80_ovl_17)) + 0xC));
  temp_v1 = *((u8 *) (((char *) arg0) + new_var));
  switch (temp_v1)
  {
    case 0:
      *((u8 *) (((char *) arg0) + new_var)) = 1U;
      *((s32 *) (((char *) arg0) + 0x1E8)) = (s32) (((*((&sp10) + (((*((u8 *) (((char *) arg0) + 5))) - 5) * 8))) << 0x18) + 0x300);
      *((u16 *) (((char *) arg0) + 0x1F6)) = (u16) ((func_80033634_ovl_01(&sp10) & 0x1F) + 0x3C);

    case 1:
      temp_a0 = func_80166A84_overlay_017(arg0, (s16) (*((u16 *) (((char *) (__repair_addr = (char *) ((&sp10) + (((*((u8 *) (((char *) arg0) + 5))) - 5) * 8)))) + new_var))));
      temp_v1_2 = (*((u16 *) (((char *) arg0) + 0x66))) + temp_a0;
      temp_v0 = (*((u16 *) (((char *) arg0) + 0x1F6))) - 1;
      *((u16 *) (((char *) arg0) + 0x1F6)) = temp_v0;
      *((u16 *) (((char *) arg0) + 0x66)) = temp_v1_2;
      if ((((s16) temp_v0) == (-1)) || ((temp_a0 << 0x10) == 0))
    {
      *((u8 *) (((char *) arg0) + new_var)) = 2U;
    }
      func_80089D34_ovl_01(arg0, arg1, arg2, 0x400);
      func_801678B8_overlay_017(arg0);
      return;

    case 2:
      *((s32 *) (((char *) arg0) + 4)) = 0x01000000;
      return;

  }

}

