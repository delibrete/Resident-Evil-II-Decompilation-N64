s32 func_80089D34_ovl_01(void *, s32, s32, s32);
void func_8016E8FC_overlay_066(void *arg0)
{
  u8 temp_v1;
  void *temp_a0;
  temp_v1 = *((u8 *) (((char *) arg0) + 5));
  switch (temp_v1)
  {
    case 0:
      *((s32 *) (((char *) arg0) + 0x1E8)) = 0;
      *((u8 *) (((char *) arg0) + 5)) = (u8) ((*((u8 *) (((char *) arg0) + 5))) + 1);

    case 1:
      temp_a0 = *((void **) (((char *) arg0) + 0x234));
      if (((u8) (*((u8 *) (((char *) arg0) + 0x1E9)))) < 0xAU)
    {
      *((s32 *) (((char *) temp_a0) + 0x198)) = (s32) ((*((s32 *) (((char *) temp_a0) + 0x198))) + 0xB);
    }
      if (((u32) ((*((u8 *) (((char *) arg0) + 0x1E9))) - 0xA)) < 0xDU)
    {
      *((s32 *) (((char *) temp_a0) + 0x198)) = (s32) ((*((s32 *) (((char *) temp_a0) + 0x198))) + 0xC);
    }
      if (((u32) ((*((u8 *) (((char *) arg0) + 0x1E9))) - 0x17)) < 7U)
    {
      *((s32 *) (((char *) temp_a0) + 0x198)) = (s32) ((*((s32 *) (((char *) temp_a0) + 0x198))) + 0xB);
    }
      if ((*((u8 *) (((char *) arg0) + 0x1E9))) == 0x28)
    {
      *((s32 *) (((char *) temp_a0) + 0x310)) = (s32) ((*((s32 *) (((char *) temp_a0) + 0x310))) - 0xC);
    }
      if (((u32) ((*((u8 *) (((char *) arg0) + 0x1E9))) - 0x29)) < 7U)
    {
      *((s32 *) (((char *) temp_a0) + 0x310)) = (s32) ((*((s32 *) (((char *) temp_a0) + 0x310))) - 0xD);
    }
      if (((u32) ((*((u8 *) (((char *) arg0) + 0x1E9))) - 0x2F)) < 7U)
    {
      *((s32 *) (((char *) temp_a0) + 0x600)) = (s32) ((*((s32 *) (((char *) temp_a0) + 0x600))) + 0xC);
      *((s32 *) (((char *) temp_a0) + 0x8F0)) = (s32) ((*((s32 *) (((char *) temp_a0) + 0x8F0))) + 0xC);
      *((s32 *) (((char *) temp_a0) + 0xBE0)) = (s32) ((*((s32 *) (((char *) temp_a0) + 0xBE0))) + 0xC);
      *((s32 *) (((char *) temp_a0) + 0xED0)) = (s32) ((*((s32 *) (((char *) temp_a0) + 0xED0))) + 0xC);
      *((s32 *) (((char *) temp_a0) + 0xBE0)) = (s32) ((*((s32 *) (((char *) temp_a0) + 0xBE0))) + 0xB);
    }
      if (((u32) ((*((u8 *) (((char *) arg0) + 0x1E9))) - 0x36)) < 6U)
    {
      *((s32 *) (((char *) temp_a0) + 0x600)) = (s32) ((*((s32 *) (((char *) temp_a0) + 0x600))) + 0xB);
      *((s32 *) (((char *) temp_a0) + 0x8F0)) = (s32) ((*((s32 *) (((char *) temp_a0) + 0x8F0))) + 0xB);
      *((s32 *) (((char *) temp_a0) + 0xED0)) = (s32) ((*((s32 *) (((char *) temp_a0) + 0xED0))) + 0xB);
    }
      if (func_80089D34_ovl_01(arg0, *((s32 *) (((char *) arg0) + 0x1A4)), *((s32 *) (((char *) arg0) + 0x218)), 0) != 0)
    {
      *((s32 *) (((char *) arg0) + 4)) = 0x02000000;
    }
      return;

  }

}

