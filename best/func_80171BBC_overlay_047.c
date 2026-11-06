s32 func_80032B8C_ovl_01(void *, s32);
s32 func_800334F8_ovl_01(void *, s32, s32, s32);
s32 func_80033634_ovl_01();
s32 func_800377B0_ovl_01(s32, s16, void *, s32);
s32 func_80077B0C_ovl_01(s32, void *);
s32 func_80089D34_ovl_01(void *, s32, s32, s32);
inline static int inline_fn(char *arg0, int arg1)
{
  return ((u16) (*((s16 *) arg0))) + arg1;
}

void func_80171BBC_overlay_047(void *arg0, s32 arg1, s32 arg2)
{
  int __repair_constant = 0x40;
  u8 temp_v1;
  u8 temp_v1_3;
  u8 temp_v1_4;
  void *temp_s0;
  char *new_var;
  void *temp_s0_2;
  void *temp_s0_3;
  void *temp_v1_2;
  temp_v1 = *((u8 *) (((char *) arg0) + 6));
  switch (temp_v1)
  {
    case 0:
      *((s32 *) (((char *) arg0) + 0x1E8)) = 0x700;
      *((u8 *) (((char *) arg0) + 6)) = 1U;
      func_80077B0C_ovl_01(0x04000001, arg0 + 0x28);

    case 1:
      func_80089D34_ovl_01(arg0, arg1, arg2, 0x200);
      return;

    case 2:
      *((s32 *) (((char *) arg0) + 0x1E8)) = 0x04000700;
      *((u8 *) (((char *) arg0) + 6)) = 3U;
      *((u8 *) (((char *) arg0) + 0x26F)) = (u8) ((*((u8 *) (((char *) arg0) + 0x26F))) & 0x7F);

    case 3:
      if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x100) != 0)
    {
      *((s32 *) (((char *) arg0) + 4)) = 0x01000000;
      return;
    }

    default:
      return;

    *((s32 *) (((char *) temp_v1_2) + 0xBC0)) = (s32) ((*((s32 *) (((char *) temp_v1_2) + 0xBC0))) | 0x80);
    case 4:
      temp_s0 = *((void **) (((char *) arg0) + 0x234));
      *((s32 *) (((char *) arg0) + 0x1E8)) = 0x01000F00;
      *((u8 *) (((char *) arg0) + 6)) = 5U;
      *((s8 *) (((char *) arg0) + 0x25C)) = 1;
      *((s32 *) (((char *) temp_s0) + 0x130)) = __repair_constant;
      *((s32 *) (((char *) temp_s0) + 0x134)) = 0x101010;
      *((s32 *) (((char *) temp_s0) + 0)) = (s32) ((*((s32 *) (((char *) temp_s0) + 0))) | 0x80);

    case 5:

    case 7:
      block_9:
    func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);

      return;

    case 6:
      temp_v1_2 = *((void **) (((char *) arg0) + 0x234));
      *((s32 *) (((char *) arg0) + 0x1E8)) = 0x02000F00;
      *((u8 *) (((char *) arg0) + 6)) = 7U;
      temp_s0_2 = temp_v1_2 + 0xBC0;
      *((s32 *) (((char *) temp_s0_2) + 0x130)) = __repair_constant;
      *((s32 *) (((char *) temp_s0_2) + 0x134)) = 0x101010;
      goto block_9;

    case 8:
      *((s32 *) (((char *) arg0) + 0x1E8)) = 0x03000F00;
      *((u8 *) (((char *) arg0) + 6)) = 9U;
      temp_s0_3 = (*((void **) (((char *) arg0) + 0x234))) + 0xBF8;
      func_800377B0_ovl_01(0x213E8, *((s16 *) (((char *) arg0) + 0x66)), temp_s0_3, 0);
      func_800377B0_ovl_01(0x21000, (s16) inline_fn(((char *) arg0) + 0x66, 0x800), temp_s0_3, 0);

    case 9:
      temp_s0 = *((void **) (((char *) arg0) + 0x234));
      temp_v1_4 = (temp_v1_3 = *((u8 *) (((char *) arg0) + 0x1E9)));
      if ((temp_v1_3 < 0xFU) && (!(temp_v1_3 & 1)))
    {
      new_var = (char *) arg0;
      func_800377B0_ovl_01(((func_80033634_ovl_01() & 0xFF) * 8) + 0x400, *((s16 *) (new_var + 0x66)), temp_s0 + 0xBF8, 0);
    }
      if (((temp_v1_4 == 0x2D) || (temp_v1_4 == 0x30)) || (temp_v1_4 == 5))
    {
      func_800377B0_ovl_01(0x21000, *((s16 *) (((char *) arg0) + 0x66)), (temp_s0 + 0xBC0) + 0x38, 0);
    }
      func_800334F8_ovl_01(arg0, arg1, arg2, 0);
      *((u8 *) (((char *) arg0) + 6)) = (u8) ((*((u8 *) (((char *) arg0) + 6))) + func_80089D34_ovl_01(arg0, arg1, arg2, 0x100));
      func_80032B8C_ovl_01(arg0, 0);
      return;

    case 10:
      *((s32 *) (((char *) arg0) + 4)) = 0x07000000;
      break;

  }

}

