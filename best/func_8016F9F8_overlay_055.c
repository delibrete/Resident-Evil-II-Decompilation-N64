s32 func_80033634_ovl_01(s32);
s32 func_80089D34_ovl_01(void *, s32);
void func_8016F9F8_overlay_055(void *arg0)
{
  u16 temp_v0;
  u8 *temp_s1;
  u8 temp_v1;
  temp_v1 = *((u8 *) (((char *) arg0) + 7));
  temp_s1 = (char *)((*((s32 *) (((char *) arg0) + 0x250)))); temp_s1 += (s32)(0x2B4);
  switch (temp_v1)
  {
    case 0:
      *((u16 *) (((char *) arg0) + 0x1F4)) = (u16) ((func_80033634_ovl_01(1) & 0x1F) + 0x1E);
      *((u8 *) (((char *) arg0) + 7)) = 1U;

    case 1:
      temp_v0 = (*((u16 *) (((char *) arg0) + 0x1F4))) - 1;
      *((u16 *) (((char *) arg0) + 0x1F4)) = temp_v0;
      if ((temp_v0 << 0x10) == 0)
    {
      *((u8 *) (((char *) arg0) + 7)) = 2U;
      *((s32 *) (((char *) arg0) + 0x1E8)) = 0x033C0700;
    }
      break;

    case 2:
      if (func_80089D34_ovl_01(arg0, 0x200) != 0)
    {
      *((u8 *) (((char *) arg0) + 7)) = 0U;
    }
      break;

  }

  if ((*temp_s1) != 0)
  {
    if (((u32) ((*((s32 *) (((char *) arg0) + 0x290))) & 0x3FFFFFFF)) < 0x3E8U)
    {
      goto block_15;
    }
  }
  else
    if (((u32) (*((u32 *) (((char *) arg0) + 0x28C)))) < 0x3E8U)
  {
    block_15:
    if ((*((u8 *) (((char *) arg0) + 0x2BE))) == 0)
    {
      *((s16 *) (((char *) arg0) + 6)) = 0x100;
    }

  }
}

