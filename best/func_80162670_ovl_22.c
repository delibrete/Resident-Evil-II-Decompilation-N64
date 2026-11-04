s32 func_801624E8_overlay_022(void *, s32, s32, s32, s32, s32);
extern s32 D_800C7650_ovl_01;
extern s32 D_80166880_ovl_22;
extern u8 D_80166883_ovl_22;
extern s32 D_80166884_ovl_22;
void func_80162670_ovl_22(void *arg0)
{
  char *new_var;
  u8 temp_v1;
  temp_v1 = *((u8 *) (((char *) arg0) + 0x2C4));
  switch (temp_v1)
  {
    case 0:
      D_80166880_ovl_22 = (s32) (*((u8 *) (((char *) arg0) + 0x26E)));
      func_801624E8_overlay_022(arg0, 1, 0, 6, 0x1000, 3);
      *((void (**)(void *)) (((char *) arg0) + 0x2BC)) = func_80162670_ovl_22;
      *((u8 *) (((char *) arg0) + 0x2C4)) = (u8) ((*((u8 *) (((char *) arg0) + 0x2C4))) + 1);
      return;

    case 4:

    case 7:

    new_var = ((char *) arg0) + 0x26E;
    case 10:
      *((s32 *) (((char *) (&D_80166884_ovl_22)) + 0)) = (s32) (*((u8 *) new_var));
      *((u8 *) (((char *) arg0) + 0x26E)) = (u8) D_80166883_ovl_22;
      if ((*((s32 *) (((char *) (&D_800C7650_ovl_01)) + 0x18264))) & 0x40)
    {
      func_801624E8_overlay_022(arg0, 1, 0, 6, 0x1000, 3);
    }
      *((u8 *) (((char *) arg0) + 0x26E)) = (u8) (*((u8 *) (((char *) (&D_80166884_ovl_22)) + 3)));
      if ((*((u8 *) (((char *) arg0) + 0x2C4))) == 0xA)
    {
      *((void (**)(void *)) (((char *) arg0) + 0x2BC)) = NULL;
    }

    default:
      *((u8 *) (((char *) arg0) + 0x2C4)) = (u8) ((*((u8 *) (((char *) arg0) + 0x2C4))) + 1);
      return;

  }

}

