s32 func_80033634_ovl_01(s32);
s32 func_80089D34_ovl_01(void *, s32, s32, s32);
s32 func_801737CC_overlay_045(void *, s32, s32, s32);
s32 func_80173868_overlay_045(void *, s16);
s32 func_80173F2C_overlay_045(void *, s32, s32);
s32 func_80174448_overlay_045(void *);
void func_80170DC0_overlay_045(void *arg0, s32 arg1, s32 arg2)
{
  s32 var_v1;
  u8 temp_v1;
  u8 var_v0;
  temp_v1 = *((u8 *) (((char *) arg0) + 6));
  switch (temp_v1)
  {
    case 0:
      *((u8 *) (((char *) arg0) + 6)) = 1U;
      *((s16 *) (((char *) arg0) + 0x1F4)) = (s16) ((func_80033634_ovl_01(1) & 0xF) + 0x1E);
      *((s16 *) (((char *) arg0) + 0x1E0)) = 0x12C;
      *((s16 *) (((char *) arg0) + 0x1E2)) = 0;
      *((s16 *) (((char *) arg0) + 0x1E4)) = 0;
      *((s32 *) (((char *) arg0) + 0x1E8)) = 0x04000300;

    case 1:
 do { if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x400) != 0) { var_v1 = 0x05000300; var_v0 = 2; block_16: *((u8 *) (((char *) arg0) + 6)) = var_v0; *((s32 *) (((char *) arg0) + 0x1E8)) = var_v1; } break; } while (0);

    case 2:
      func_801737CC_overlay_045(arg0, 0, 0, 0);
      func_80089D34_ovl_01(arg0, arg1, arg2, 0x400);
      if (((func_80173868_overlay_045(arg0, *((s16 *) (((char *) arg0) + 0x2C2))) != 0) || ((*((u8 *) (((char *) arg0) + 0xD))) != 0xFF)) || ((*((s32 *) (((char *) arg0) + 0x1AC))) & 1))
    {
      *((u8 *) (((char *) arg0) + 6)) = 3U;
      *((s32 *) (((char *) arg0) + 0x1E8)) = 0x07000300;
    }
      if (func_80173F2C_overlay_045(arg0, 0x7D0, 0x10CC) != 0)
    {
      var_v1 = 0x07000300;
      var_v0 = 3;
      goto block_16;
    }
      break;

    case 3:
      if (0 != func_80089D34_ovl_01(arg0, arg1, arg2, 0x400))
    {
      *((s8 *) (((char *) arg0) + 5)) = 4;
      *((u8 *) (((char *) arg0) + 6)) = 0;
      *((s8 *) (((char *) arg0) + 0x2CD)) = 0;
    }
      break;

  }

  func_80174448_overlay_045(arg0);
}
