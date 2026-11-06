extern int (*D_80173180_overlay_063[])();
s32 func_80077D48_ovl_01(s32, void *);
s32 func_80171054_overlay_063(void *);
s32 func_80172D80_overlay_063(void *, s32, u8);
s32 func_80172EB4_overlay_063(u8, u8);
extern s32 D_80173290_overlay_063;
extern s32 D_801732A4_overlay_063;
void func_80170EE4_overlay_063(void *arg0, s32 arg1, s32 arg2)
{
  s32 temp_v1;
  int temp_a2;
  void *temp_s0;
  temp_v1 = (*((u8 *) (((char *) arg0) + 5))) - 1;
  temp_a2 = *(temp_v1 + (&D_801732A4_overlay_063));
  temp_s0 = (char *) arg0;
  temp_s0 += (s32) 0x2B4;
  if ((temp_a2 != 0) && ((*((u8 *) (((char *) temp_s0) + 0x11))) == 0))
  {
    func_80172EB4_overlay_063(*(temp_v1 + (&D_80173290_overlay_063)), temp_a2);
  }
  else
    if (1)
  {
    func_80172D80_overlay_063(arg0, 0, *((u8 *) (((char *) ((*((u8 *) (((char *) arg0) + 5))) + (&D_80173290_overlay_063))) + (-1))));
  }
  if ((*((u8 *) (((char *) temp_s0) + 0x23))) == 0)
  {
    func_80077D48_ovl_01(3, arg0);
  }
  *((u8 *) (((char *) temp_s0) + 0x23)) = 0U;
  func_80171054_overlay_063(arg0);
  *((u8 *) (((char *) arg0) + 0x2D6)) = (u8) (*((u8 *) (((char *) arg0) + 5)));
  *((s32 *) (((char *) arg0) + 4)) = (s32) (((((*((u8 *) (((char *) temp_s0) + 0xC))) << 0x10) + ((*((u8 *) (((char *) temp_s0) + 0xD))) << 8)) + (*((u8 *) (((char *) temp_s0) + 0xE)))) + 0x01000000);
  *((u16 *) (((char *) arg0) + 0x1E0)) = (u16) (*((u16 *) (((char *) temp_s0) + 0x1C)));
  *((u16 *) (((char *) arg0) + 0x1E2)) = (u16) (*((u16 *) (((char *) temp_s0) + 0x1E)));
  *((u16 *) (((char *) arg0) + 0x1E4)) = (u16) (*((u16 *) (((char *) temp_s0) + 0x20)));
  D_80173180_overlay_063[*((u8 *) (((char *) arg0) + 5))](arg0, arg1, arg2);
  *((u8 *) (((char *) temp_s0) + 0xC)) = (u8) (*((u8 *) (((char *) arg0) + 5)));
  *((u8 *) (((char *) temp_s0) + 0xD)) = (u8) (*((u8 *) (((char *) arg0) + 6)));
  *((u8 *) (((char *) temp_s0) + 0xE)) = (u8) (*((u8 *) (((char *) arg0) + 7)));
  *((u16 *) (((char *) temp_s0) + 0x1C)) = (u16) (*((u16 *) (((char *) arg0) + 0x1E0)));
  *((u16 *) (((char *) temp_s0) + 0x1E)) = (u16) (*((u16 *) (((char *) arg0) + 0x1E2)));
  *((u16 *) (((char *) temp_s0) + 0x20)) = (u16) (*((u16 *) (((char *) arg0) + 0x1E4)));
}

