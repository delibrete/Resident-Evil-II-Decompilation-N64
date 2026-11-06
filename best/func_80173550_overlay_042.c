extern int (*D_80175824_overlay_042[])();
s32 func_8017361C_overlay_042();
extern char D_800E10D0[];
extern volatile int D_80175870_overlay_042;
void func_80173550_overlay_042(void *arg0, s32 arg1, unsigned long arg2)
{
  if ((*((u8 *) (((char *) arg0) + 5))) != 0xFF)
  {
    *((u8 *) (((char *) arg0) + 0x2CB)) = (u8) (*((u8 *) (((char *) arg0) + 5)));
    *((s32 **) (((char *) arg0) + 0x2C4)) = &D_800E10D0;
    if (D_80175870_overlay_042 == (*((u8 *) (((char *) arg0) + 0xC))))
    {
      D_80175870_overlay_042 = 0;
    }
    *((s8 *) (((char *) arg0) + 0x2B5)) = 2;
    *((u8 *) (((char *) arg0) + 5)) = 0xFFU;
    func_8017361C_overlay_042(arg0, &D_80175870_overlay_042);
    if ((*((u8 *) (((char *) arg0) + 0x26E))) != 0)
    {
      *((s32 *) (((char *) arg0) + 0)) &= ~0xE;
      *((u16 *) (((char *) arg0) + 0x2C8)) &= 0xFD0F;
    }
  }
  D_80175824_overlay_042[*((u8 *) (((char *) arg0) + 0x26E))](arg0, arg1, arg2);
}

