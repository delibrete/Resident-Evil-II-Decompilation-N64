s32 func_80033634_ovl_01();
s32 func_80089D34_ovl_01();
s32 func_80163B38_overlay_027();
void func_80162C74_ovl_27(void *arg0, s32 arg1, s32 arg2)
{
  s16 var_v1;
  u8 temp_v1;
  temp_v1 = *((u8 *) (((char *) arg0) + 6));
  switch (temp_v1)
  {
    case 0:
      *((u8 *) (((char *) arg0) + 6)) = 1U;
      *((s16 *) (((char *) arg0) + 0x2BC)) = (s16) ((*((u16 *) (((char *) arg0) + 0x2C0))) + 0x400);
      var_v1 = -0x400;
      if (func_80033634_ovl_01() & 1)
    {
      var_v1 = 0x400;
    }
      *((s16 *) (((char *) arg0) + 0x2C2)) = var_v1;
      *((s16 *) (((char *) arg0) + 0x1E2)) = 0x28;
      *((s32 *) (((char *) arg0) + 0x1E8)) = (s32) (((func_80033634_ovl_01() & 7) << 0x10) + 0x05000700);
      func_80163B38_overlay_027(arg0, 0, 1);

    case 1:
      arg2 = *((s16 *) (((char *) arg0) + 0x25E));
      *((s32 *) (((char *) arg0) + 0x2C)) += *((s16 *) (((char *) arg0) + 0x1E2));
      *((s16 *) (((char *) arg0) + 0x1E2)) = (s16) (((u16) (*((s16 *) (((char *) arg0) + 0x1E2)))) + 0x28);
      if ((*((s32 *) (((char *) arg0) + 0x2C))) >= arg2)
    {
      *((u8 *) (((char *) arg0) + 6)) = 2U;
      *((s32 *) (((char *) arg0) + 0x2C)) = (s32) arg2;
      *((s32 *) (((char *) arg0) + 0x1E8)) = (s32) (((func_80033634_ovl_01(arg2) & 0x1F) << 0x10) + 0x02000700);
    }
      break;

  }

  func_80089D34_ovl_01(arg0, arg1, arg2, 0x200);
}

