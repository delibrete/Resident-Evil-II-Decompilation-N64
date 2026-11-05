extern s32 func_80089D34_ovl_01(void *, s32, s32, s32);
extern void func_801636DC_overlay_027(void *, s32);
void func_80163184_ovl_27(u8 *arg0, s32 arg1, s32 arg2)
{
  u8 *new_var;
  u8 *p = arg0 + 0x2B4;
  switch (arg0[6])
  {
    new_var = &arg0[0x2B4];
    case 0:
      arg0[6] = 1;
      *((s16 *) (p + 0xE)) = 0x400;
      *((s32 *) (arg0 + 0x1E8)) = ((*new_var) << 19) + 0xF00;

    case 1:
      *((u16 *) (p + 0xE)) -= 0x20;
      if (((s16) (*((u16 *) (p + 0xE)))) < 0)
    {
      *((s16 *) (p + 0xE)) = 0;
      *((s32 *) (arg0 + 4)) = 0x1000000;
    }
      break;

  }

  func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
  func_801636DC_overlay_027(arg0, 0);
}

