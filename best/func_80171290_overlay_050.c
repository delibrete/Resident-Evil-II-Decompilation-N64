s32 func_80036C98(void *, s32, s32, s32);
s32 func_80089D34_ovl_01(void *, s32, s32, s32);
void func_80171290_overlay_050(void *arg0)
{
  u8 temp_v1;
  u16 *new_var;
  temp_v1 = *((u8 *) (((char *) arg0) + 6));
  new_var = &(*((u16 *) (((char *) arg0) + 0x270)));
  switch (temp_v1)
  {
    case 0:
      *((u16 *) (((char *) arg0) + 0x270)) = 0U;
      *((u8 *) (((char *) arg0) + 0x25C)) = (u8) ((*((u8 *) (((char *) arg0) + 0x25C))) | 4);
      *((s32 *) (((char *) arg0) + 0)) = (s32) ((*((s32 *) (((char *) arg0) + 0))) | 8);
      *((u8 *) (((char *) arg0) + 6)) = (u8) ((*((u8 *) (((char *) arg0) + 6))) + 1);

    case 1:
      if ((*new_var) & 1)
    {
      *((u8 *) (((char *) arg0) + 6)) = (u8) ((*((u8 *) (((char *) arg0) + 6))) + 1);
      case 2:
        func_80036C98(arg0, 1, 0, 0);

      if ((*((u16 *) (((char *) arg0) + 0x270))) & 2)
      {
        *((s32 *) (((char *) arg0) + 0x1E8)) = 0x1F00;
        block_9:
        *((u8 *) (((char *) arg0) + 6)) = (u8) ((*((u8 *) (((char *) arg0) + 6))) + 1);

        return;
      }
    }
    else
    {
      default:
        return;

    }
      break;

    case 3:
      *((s32 *) (((char *) arg0) + 0x1E8)) = 0;
      do { func_80089D34_ovl_01(arg0, *((s32 *) (((char *) arg0) + 0x22C)), *((s32 *) (((char *) arg0) + 0x230)), 0x80); } while (0);
      if ((*((u16 *) (((char *) arg0) + 0x270))) & 4)
    {
      goto block_9;
    }
      break;

    case 4:
      func_80036C98(arg0, 1, 0x1F, 0);
      break;

  }

}

