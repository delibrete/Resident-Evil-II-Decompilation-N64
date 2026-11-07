s32 func_8016F528_overlay_051(void *, s32, s32, s32, s32, s32);
extern s32 D_800C7650;
extern s32 D_80173164_overlay_051;
extern u8 D_80173167_overlay_051;
extern s32 D_80173168_overlay_051;
void func_8016F6D4_overlay_051(void *arg0)
{
  int new_var2;
  s32 *new_var;
  void *new_var3;
  new_var2 = *((u8 *) (((char *) arg0) + 0x2C4));
  switch (new_var2)
  {
    new_var2 = 6;
    new_var3 = arg0;
    case 0:
      D_80173164_overlay_051 = (s32) (*((u8 *) (((char *) arg0) + 0x26E)));
      func_8016F528_overlay_051(arg0, 1, 0, new_var2, 0x2000, 3);
      *((void (**)(void *)) (((char *) arg0) + 0x2BC)) = func_8016F6D4_overlay_051;
      *((u8 *) (((char *) arg0) + 0x2C4)) = (u8) ((*((u8 *) (((char *) arg0) + 0x2C4))) + 1);
      return;

    case 4:

    case 7:
      new_var = &D_80173168_overlay_051;

    case 10:
      *((s32 *) (((char *) new_var) + 0)) = (s32) (*((u8 *) (((char *) arg0) + 0x26E)));
      *((u8 *) (((char *) arg0) + 0x26E)) = (u8) D_80173167_overlay_051;
      if ((*((s32 *) (((char *) (&D_800C7650)) + 0x18264))) & 0x40)
    {
      func_8016F528_overlay_051(new_var3, 1, 0, new_var2, 0x1800, 3);
    }
      *((u8 *) (((char *) new_var3) + 0x26E)) = (u8) (*((u8 *) (((char *) new_var) + 3)));
      if ((*((u8 *) (((char *) new_var3) + 0x2C4))) == 0xA)
    {
      *((void (**)(void *)) (((char *) new_var3) + 0x2BC)) = NULL;
    }

    default:
      *((u8 *) (((char *) new_var3) + 0x2C4)) = (u8) ((*((u8 *) (((char *) new_var3) + 0x2C4))) + 1);
      return;

  }

}

