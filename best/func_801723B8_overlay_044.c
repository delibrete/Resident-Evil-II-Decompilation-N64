extern int (*D_80174008_overlay_044[])();
s32 func_80172484_overlay_044();
extern char D_800E10D0[];
extern s32 D_80174050_overlay_044;
void func_801723B8_overlay_044(void *arg0, s32 arg1, s32 arg2)
{
  char *new_var;
  if ((*((u8 *) (((char *) arg0) + 5))) != 0xFF)
  {
    *((u8 *) (((char *) arg0) + 0x2CB)) = (u8) (*((u8 *) (((char *) arg0) + 5)));
    *((s32 **) (((char *) arg0) + 0x2C4)) = &D_800E10D0;
    if (D_80174050_overlay_044 == (*((u8 *) ((new_var = (char *) arg0) + 0xC))))
    {
      D_80174050_overlay_044 = 0;
    }
    *((u8 *) (new_var + 5)) = 0xFFU;
    *((s8 *) (((char *) arg0) + 0x2B5)) = 2;
    func_80172484_overlay_044(arg0, &D_80174050_overlay_044);
    if ((*((u8 *) (((char *) arg0) + 0x26E))) != 0)
    {
      *((s32 *) (new_var + 0)) &= ~0xE;
      *((u16 *) (new_var + 0x2C8)) &= 0xFD0F;
    }
  }
  D_80174008_overlay_044[*((u8 *) (new_var + 0x26E))](arg0, arg1, arg2);
}

