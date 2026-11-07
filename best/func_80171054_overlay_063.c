extern s32 D_800C7650;
void func_80171054_overlay_063(void *arg0)
{
  int new_var3;
  volatile unsigned short var_v1;
  s16 *new_var;
  void *temp_a1;
  char *new_var2;
  new_var3 = 0xFA;
  temp_a1 = arg0 + 0x2B4;
  if ((*((u8 *) (((char *) temp_a1) - -0x11))) != 0)
  {
    *((u8 *) (((char *) temp_a1) + 0xF)) = 1U;
  }
  var_v1 = new_var3;
  if ((*((s32 *) (((char *) (&D_800C7650)) + 0x19A3C))) & 0x20)
  {
    var_v1 = 0xC8;
  }
  new_var = (s16 *) (((char *) arg0) + 0x1F2);
  new_var2 = (char *) temp_a1;
  if (((((*((u8 *) (new_var2 + 0x15))) != 0) && ((*((u8 *) (new_var2 + 0xF))) == 0)) && ((*((u8 *) (((char *) temp_a1) + 9))) & 1)) && (((u32) (*new_var)) < ((u32) (((*((u8 *) (((char *) temp_a1) + 0x15))) * var_v1) / 3))))
  {
    if (temp_a1)
    {
      *((u8 *) (((char *) temp_a1) + 0xF)) = 1U;
      *((u8 *) (((char *) temp_a1) + 0x15)) = (u8) ((*((u8 *) (((char *) temp_a1) + 0x15))) - 1);
    }
    else
    {
      *((u8 *) (((char *) temp_a1) + 0xF)) = 1U;
      *((u8 *) (((char *) temp_a1) + 0x15)) = (u8) ((*((u8 *) (((char *) temp_a1) + 0x15))) - 1);
    }
  }
}

