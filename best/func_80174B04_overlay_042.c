s32 func_80036C14(void *, s32, s32, s32);
s32 func_80036D44(void *, s32, s32, s32);
s32 func_80077D48_ovl_01(s32, void *);
s32 func_8016F6B4_overlay_042(void *, void *, s32);
extern s32 D_80175704_overlay_042;
void func_80174B04_overlay_042(void *arg0)
{
  volatile unsigned long temp_v1;
  temp_v1 = *((u8 *) (((char *) arg0) + 6));
  switch (temp_v1)
  {
    case 0:
      func_80077D48_ovl_01(8, arg0);
      func_8016F6B4_overlay_042(arg0, ((*((u8 *) (((char *) arg0) + 0x2CB))) * 8) + (&D_80175704_overlay_042), 0);
      *((s32 *) (((char *) arg0) + 0)) = (s32) ((*((s32 *) (((char *) arg0) + 0))) | 2);
      *((u8 *) (((char *) arg0) + 6)) = (u8) ((*((u8 *) (((char *) arg0) + 6))) + 1);

    case 1:
      *((u8 *) (((char *) arg0) + 6)) = (u8) ((*((u8 *) (((char *) arg0) + 6))) + func_80036D44(arg0, 0x1C, 0, 0));
      if ((*((s16 *) (((char *) arg0) + 0x2D6))) >= (-0x3E7))
    {
      *((s16 *) (((char *) arg0) + 0x2D6)) = (s16) (((u16) (*((s16 *) (((char *) arg0) + 0x2D6)))) - 0x32);
      return;
    }

    default:
      return;

    case 2:
      *((u8 *) (((char *) arg0) + 6)) = (u8) ((*((u8 *) (arg0 + 6))) + 1);

    case 3:
      if (func_80036C14(arg0, 0xB, 0xF, 0) != 0)
    {
      *((s8 *) (((char *) arg0) + 0x2B7)) = 1;
      *((u8 *) (((char *) arg0) + 6)) = (u8) ((*((u8 *) (((char *) arg0) + 6))) + 1);
    }
      break;

  }

}

