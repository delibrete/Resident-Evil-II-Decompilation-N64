void func_80165E20_ovl_35(s32 arg0, void *arg1)
{
  u16 temp_v0;
  u16 temp_v0_2;
  u16 var_v0;
  void *new_var2;
  u8 temp_v1;
  u8 *new_var;
  new_var2 = arg1;
  new_var = (u8 *) (((char *) new_var2) + 7);
  temp_v1 = *new_var;
  switch (temp_v1)
  {
    case 0:
      *((u8 *) (((char *) arg1) + 7)) = 1U;
      *((u16 *) (((char *) arg1) + 2)) = -0x100U;
      *((u16 *) (((char *) arg1) + 4)) = -0x100U;

    case 1:
      temp_v0 = (*((u16 *) (((char *) arg1) + 2))) + 0x200;
      *((u16 *) (((char *) arg1) + 2)) = temp_v0;
      if (((s16) temp_v0) >= 0x300)
    {
      *((u8 *) (((char *) arg1) + 7)) = 2U;
      var_v0 = 0x300;
      block_11:
      *((u16 *) (((char *) arg1) + 2)) = 0x300;

    }
      break;

    case 2:
      temp_v0_2 = (*((u16 *) (((char *) arg1) + 2))) - 0x200;
      *((u16 *) (((char *) arg1) + 2)) = temp_v0_2;
      var_v0 = -0x100U;
      if (((s16) temp_v0_2) < (-0xFF))
    {
      *((u8 *) (((char *) arg1) + 7)) = 1U;
      goto block_11;
    }
      break;

  }

  *((u16 *) (((char *) arg1) + 4)) = (u16) (*((u16 *) (((char *) arg1) + 2)));
}

