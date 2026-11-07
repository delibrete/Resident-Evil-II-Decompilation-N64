s32 func_8016FAC8_overlay_043(void *);
s32 func_801700BC_overlay_043(s32, s16, s32);
s32 func_80170184_overlay_043(s32, s16, s32);
void func_8016F8EC_overlay_043(void *arg0)
{
  s16 temp_v0;
  s16 temp_v0_2;
  s16 temp_v0_3;
  s16 temp_v0_4;
  s32 var_v0;
s32 __repair_result_var_v0;
  unsigned int temp_v1;
  temp_v1 = *((s8 *) (((char *) arg0) + 0x2C0));
  switch (temp_v1)
  {
    case 1:
      *((u16 *) (((char *) arg0) + 0x1F4)) = 0U;
      *((s8 *) (((char *) arg0) + 0x2C0)) = (s8) (((u8) (*((s8 *) (((char *) arg0) + 0x2C0)))) + 1);

    case 2:
      temp_v0 = (*((u16 *) (((char *) arg0) + 0x1F4))) + 1;
      *((u16 *) (((char *) arg0) + 0x1F4)) = (u16) temp_v0;
      *((u16 *) (((char *) arg0) + 0x2C6)) = (u16) ((*((u16 *) (((char *) arg0) + 0x2C6))) + func_801700BC_overlay_043(4, temp_v0, 0x14));
      __repair_result_var_v0 = func_801700BC_overlay_043(4, (s16) (*((u16 *) (((char *) arg0) + 0x1F4))), -0x64);
      block_5:
    *((u16 *) (((char *) arg0) + 0x2C4)) = (u16) ((*((u16 *) (((char *) arg0) + 0x2C4))) + __repair_result_var_v0);

      if (((s16) (*((u16 *) (((char *) arg0) + 0x1F4)))) == 4)
    {
      *((u16 *) (((char *) arg0) + 0x1F4)) = 0U;
      *((s8 *) (((char *) arg0) + 0x2C0)) = (s8) (((u8) (*((s8 *) (((char *) arg0) + 0x2C0)))) + 1);
      return;
    }

    default:
      return;

    case 3:
      temp_v0_2 = (*((u16 *) (((char *) arg0) + 0x1F4))) + 1;
      *((u16 *) (((char *) arg0) + 0x1F4)) = (u16) temp_v0_2;
      *((u16 *) (((char *) arg0) + 0x2C6)) = (u16) ((*((u16 *) (((char *) arg0) + 0x2C6))) + func_80170184_overlay_043(4, temp_v0_2, 0x14));
      var_v0 = func_80170184_overlay_043(4, (s16) (*((u16 *) (((char *) arg0) + 0x1F4))), -0x64);
      goto block_5;

    case 4:
      temp_v0_3 = (*((u16 *) (((char *) arg0) + 0x1F4))) + 1;
      *((u16 *) (((char *) arg0) + 0x1F4)) = (u16) temp_v0_3;
      *((u16 *) (((char *) arg0) + 0x2C6)) = (u16) ((*((u16 *) (((char *) arg0) + 0x2C6))) + func_801700BC_overlay_043(3, temp_v0_3, -0x14));
      *((u16 *) (((char *) arg0) + 0x2C4)) = (u16) ((*((u16 *) (((char *) arg0) + 0x2C4))) + func_801700BC_overlay_043(3, (s16) (*((u16 *) (((char *) arg0) + 0x1F4))), 0x64));
      if (((s16) (*((u16 *) (((char *) arg0) + 0x1F4)))) == 3)
    {
      *((u16 *) (((char *) arg0) + 0x1F4)) = 0U;
      *((s8 *) (((char *) arg0) + 0x2C0)) = (s8) (((u8) (*((s8 *) (((char *) arg0) + 0x2C0)))) + 1);
    }
      block_11:
    func_8016FAC8_overlay_043(arg0);

      break;

    case 5:
      temp_v0_4 = (*((u16 *) (((char *) arg0) + 0x1F4))) + 1;
      *((u16 *) (((char *) arg0) + 0x1F4)) = (u16) temp_v0_4;
      *((u16 *) (((char *) arg0) + 0x2C6)) = (u16) ((*((u16 *) (((char *) arg0) + 0x2C6))) + func_80170184_overlay_043(3, temp_v0_4, -0x14));
      *((u16 *) (((char *) arg0) + 0x2C4)) = (u16) ((*((u16 *) (((char *) arg0) + 0x2C4))) + func_80170184_overlay_043(3, (s16) (*((u16 *) (((char *) arg0) + 0x1F4))), 0x64));
      if (((s16) (*((u16 *) (((char *) arg0) + 0x1F4)))) == 3)
    {
      *((u16 *) (((char *) arg0) + 0x1F4)) = 0U;
      *((s8 *) (((char *) arg0) + 0x2C0)) = 0;
    }
    {
      func_8016FAC8_overlay_043(arg0);
      break;
    }

  }

}

