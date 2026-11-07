s32 func_80032B8C_ovl_01(void *, s32);
s32 func_80032DEC_ovl_01(void *, s16, s16, s32);
s32 func_800334F8_ovl_01(void *, s32, s32, s32);
s32 func_80033634_ovl_01();
s32 func_8008A974_ovl_01(void *, s32, s32, s32);
s32 func_80162ED8_overlay_016(void *, s32, s32);
void func_80164188_ovl_16(void *arg0, s32 arg1, s32 arg2)
{
  s16 temp_v1_2;
  s32 var_a1;
  s32 var_a2;
  s32 var_v0;
  u16 temp_v0_2;
  u8 temp_v1;
  void *temp_v0;
  temp_v1 = *((u8 *) (((char *) arg0) + 6));
  switch (temp_v1)
  {
    case 0:
      *((s8 *) (((char *) arg0) + 0x2CE)) = 4;
      *((s32 *) (((char *) arg0) + 0x1E8)) = 0x16000F00;
      *((u16 *) (((char *) arg0) + 0x1F4)) = 0U;
 do { *((u16 *) (((char *) arg0) + 0x1F6)) = 0U; } while (0);
      *((s8 *) (((char *) arg0) + 0x2CC)) = 0;
      *((u16 *) (((char *) arg0) + 0x2C8)) = (u16) ((*((u16 *) (((char *) arg0) + 0x2C8))) | 2);
      *((u8 *) (((char *) arg0) + 6)) = (u8) ((*((u8 *) (((char *) arg0) + 6))) + 1);

    case 1:
      if (!((*((s32 *) (((char *) arg0) + 0x1AC))) & 1))
    {
      *((u16 *) (((char *) arg0) + 0x1F6)) = 0U;
    }
    else
    {
      *((u16 *) (((char *) arg0) + 0x1F6)) = (u16) ((*((u16 *) (((char *) arg0) + 0x1F6))) + 1);
    }
      if (((s16) (*((u16 *) (((char *) arg0) + 0x1F6)))) >= 6)
    {
      temp_v1_2 = (s16) (*((u16 *) (((char *) arg0) + 0x1F6)));
      *((u16 *) (((char *) arg0) + 0x1F4)) = (u16) ((*((u16 *) (((char *) arg0) + 0x1F4))) + 1);
      if (temp_v1_2 >= 0x15)
      {
        if (temp_v1_2 == 0x15)
        {
          *((s8 *) (((char *) arg0) + 0x2CC)) = 0;
        }
        func_80162ED8_overlay_016(arg0, 0x32, 0);
      }
      else
      {
        goto block_17;
      }
    }
    else
    {
      if (func_80033634_ovl_01() & 2)
      {
        temp_v0 = *((void **) (((char *) arg0) + 0x2C4));
        var_a1 = *((s32 *) (((char *) temp_v0) + 0x28));
        var_a2 = *((s32 *) (((char *) temp_v0) + 0x30));
      }
      else
      {
        block_17:
        var_a1 = (s32) (*((s16 *) (((char *) arg0) + 0x260)));

        var_a2 = (s32) (*((s16 *) (((char *) arg0) + 0x262)));
      }
      func_80032DEC_ovl_01(arg0, (s16) var_a1, (s16) var_a2, 0x32);
    }
      func_800334F8_ovl_01(arg0, arg1, arg2, 0);
      func_8008A974_ovl_01(arg0, arg1, arg2, 0x100);
      func_80032B8C_ovl_01(arg0, 0);
      temp_v0_2 = (*((u16 *) (((char *) arg0) + 0x1F4))) + 1;
      *((u16 *) (((char *) arg0) + 0x1F4)) = temp_v0_2;
      var_v0 = 0x01000000;
      if ((((s16) temp_v0_2) >= 0xB4) || ((var_v0 = 0x010F0000, (((u32) (*((u32 *) (((char *) arg0) + 0x28C)))) < 0x898U) != 0)))
    {
      *((s32 *) (((char *) arg0) + 4)) = var_v0;
    }
      return;

  }

}
