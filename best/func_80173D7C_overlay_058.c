s32 func_800662B8_ovl_01();
void func_80173D7C_overlay_058(void *arg0, void *arg1)
{
  u16 temp_v0;
  u16 temp_v0_2;
  u8 temp_v1;
  void *temp_a1;
  if ((*((u8 *) (((char *) arg1) + 0x15))) == 0)
  {
    temp_v1 = *((u8 *) (((char *) arg1) + 0x14));
    switch (temp_v1)
    {
      case 1:
        temp_v0 = (*((u16 *) (((char *) arg1) + 0x16))) + 0x200;
        *((u16 *) (((char *) arg1) + 0x16)) = temp_v0;
        if (((s16) temp_v0) >= 0x2801)
      {
        *((u16 *) (((char *) arg1) + 0x16)) = 0x2800U;
        *((u8 *) (((char *) arg1) + 0x14)) = 2U;
      }
        break;

      case 2:
        temp_v0_2 = (*((u16 *) (((char *) arg1) + 0x16))) - 0x800;
        *((u16 *) (((char *) arg1) + 0x16)) = temp_v0_2;
        if (temp_v0_2 & 0x8000)
      {
        *((u16 *) (((char *) arg1) + 0x16)) = 0U;
        *((u8 *) (((char *) arg1) + 0x14)) = 1U;
      }
        break;

      case 0:
        *((u8 *) (((char *) arg1) + 0x14)) = 1U;
        *((u16 *) (((char *) arg1) + 0x16)) = 0U;
        break;

    }

    temp_a1 = (char *)((*((s32 *) (((char *) arg0) + 0x234)))); temp_a1 += (s32)(0x2F0);
    if ((((s16) (*((u16 *) (((char *) arg1) + 0x16)))) - 1) < (0x1000 - 1))
    {
      *((s16 *) (((char *) (*((void **) (((char *) temp_a1) + 0x120)))) + 0x10)) = 0;
      *((s16 *) (((char *) (*((void **) (((char *) temp_a1) + 0x120)))) + 0x14)) = (s16) (0x1000 - (*((u16 *) (((char *) arg1) + 0x16))));
    }
    else
    {
      *((s16 *) (((char *) (*((void **) (((char *) temp_a1) + 0x120)))) + 0x10)) = (s16) ((*((u16 *) (((char *) arg1) + 0x16))) - 0x1000);
      *((s16 *) (((char *) (*((void **) (((char *) temp_a1) + 0x120)))) + 0x14)) = 0;
    }
    func_800662B8_ovl_01(arg0);
  }
}

