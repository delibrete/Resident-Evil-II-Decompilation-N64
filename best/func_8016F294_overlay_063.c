s32 func_80032C08_ovl_01();
s32 func_80077D48_ovl_01();
s32 func_8016F074_overlay_063(void *arg0);
inline static int inline_fn(unsigned int arg0)
{
  return -arg0;
}

void func_8016F294_overlay_063(void *arg0)
{
  s16 temp_v1;
  u16 temp_v0;
  u16 temp_v0_2;
  if ((*((u8 *) (((char *) arg0) + 7))) == 0)
  {
    *((u8 *) (((char *) arg0) + 7)) = 1U;
    *((s32 *) (((char *) arg0) + 0x1E8)) = 0x700;
    *((s32 *) (((char *) arg0) + 0x2C)) = (s32) (*((s16 *) (((char *) arg0) + 0x25E)));
    func_8016F074_overlay_063(arg0);
    *((u16 *) (((char *) arg0) + 0x1E2)) = inline_fn(0x50U);
    func_80077D48_ovl_01(7, arg0);
  }
  func_80032C08_ovl_01(arg0, 0, 0);
  temp_v0 = (*((u16 *) (((char *) arg0) + 0x1E0))) - 0xA;
  *((u16 *) (((char *) arg0) + 0x1E0)) = temp_v0;
  if (((s16) temp_v0) < 0xB)
  {
    *((u16 *) (((char *) arg0) + 0x1E0)) = 5U;
  }
  temp_v0_2 = (*((u16 *) (((char *) arg0) + 0x1E2))) + 0x1E;
  *((u16 *) (((char *) arg0) + 0x1E2)) = temp_v0_2;
  if ((temp_v0_2 << 0x10) > 0)
  {
    temp_v1 = *((s16 *) (((char *) arg0) + 0x25E));
    if ((*((s32 *) (((char *) arg0) + 0x2C))) >= temp_v1)
    {
      *((s32 *) (((char *) arg0) + 0x2C)) = (s32) temp_v1;
      *((s16 *) (((char *) arg0) + 6)) = 0x300;
      *((s8 *) (((char *) arg0) + 0x2BC)) = 0;
      func_80077D48_ovl_01(7, arg0);
    }
  }
}

