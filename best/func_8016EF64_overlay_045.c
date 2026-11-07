s32 func_80032B8C_ovl_01(void *, s16);
s32 func_80033634_ovl_01(s32 *);
s32 func_80089D34_ovl_01(void *, s32, s32, s32);
s32 func_80173508_overlay_045(void *, s32);
s32 func_80173614_overlay_045(void *, s16);
s32 func_80174448_overlay_045(void *);
extern s32 D_801748F8_overlay_045;
void func_8016EF64_overlay_045(void *arg0, s32 arg1, s32 arg2)
{
  char *__repair_addr;
  u16 temp_v1_2;
  u8 temp_v1;
  temp_v1 = *((u8 *) (((char *) arg0) + 6));
  switch (temp_v1)
  {
    case 0:
      *((u8 *) (((char *) arg0) + 6)) = 1U;
      *((s16 *) (((char *) arg0) + 0x1E4)) = 0;
      *((s32 *) (((char *) arg0) + 0x1E8)) = (s32) (((*((((*((u8 *) (((char *) arg0) + 5))) - 1) * 0xC) + (&D_801748F8_overlay_045))) << 0x18) + 0x300);
      *((u16 *) (((char *) arg0) + 0x1F4)) = (u16) (func_80033634_ovl_01(&D_801748F8_overlay_045) & 0x2E);

    case 1:
      *((u16 *) (((char *) arg0) + 0x66)) = (u16) ((*((u16 *) (((char *) arg0) + 0x66))) + func_80173614_overlay_045(arg0, *((s16 *) (((char *) (__repair_addr = (char *) ((((*((u8 *) (((char *) arg0) + 5))) - 1) * 0xC) + (&D_801748F8_overlay_045)))) + 6))));
      do { func_80174448_overlay_045(arg0); } while (0);
      func_80173508_overlay_045(arg0, 1);
      *((u16 *) (((char *) arg0) + 0x1F6)) = (u16) (*((u16 *) (((char *) arg0) + 0x1E0)));
      temp_v1_2 = (*((u16 *) (((char *) arg0) + 0x1F4))) - 1;
      *((u16 *) (((char *) arg0) + 0x1F4)) = temp_v1_2;
      *((u16 *) (((char *) arg0) + 0x1E0)) = (u16) ((*((u16 *) (((char *) arg0) + 0x1E0))) + (*((u16 *) (((char *) ((((*((u8 *) (((char *) arg0) + 5))) - 1) * 0xC) + (&D_801748F8_overlay_045))) + 0xA))));
      func_80089D34_ovl_01(arg0, arg1, arg2, 0x400);
      if (((s16) temp_v1_2) != (-1))
    {
      if ((*((u8 *) (((char *) arg0) + 0x2BE))) == 0)
      {
        if ((*((u8 *) (((char *) arg0) + 0x2D3))) != 0)
        {
          if (((u32) ((*((s32 *) (((char *) arg0) + 0x290))) & 0x3FFFFFFF)) >= 0x5DCU)
          {
          }
          else
          {
            goto block_11;
          }
        }
        else
          if (((u32) (*((u32 *) (((char *) arg0) + 0x28C)))) < 0x5DCU)
        {
          goto block_10;
        }
      }
    }
    else
    {
      block_10:
      block_11:
      *((s32 *) (((char *) arg0) + 4)) = 0x01000000;


    }
      break;

  }

  func_80032B8C_ovl_01(arg0, *((s16 *) (((char *) arg0) + 0x2B6)));
}

