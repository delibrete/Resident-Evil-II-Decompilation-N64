extern s32 D_800C7650;
void func_80171054_overlay_063(void *arg0)
{
  volatile unsigned short var_v1;
  s16 *new_var;
  void *temp_a1;
  temp_a1 = arg0 + 0x2B4;
  if ((*((u8 *) (((char *) temp_a1) + 0x11))) != 0)
  {
    *((u8 *) (((char *) temp_a1) + 0xF)) = 1U;
  }
  var_v1 = 0xFA;
  if ((*((s32 *) (((char *) (&D_800C7650)) + 0x19A3C))) & 0x20)
  {
    var_v1 = 0xC8;
  }
  new_var = (s16 *) (((char *) arg0) + 0x1F2);
  if (((((*((u8 *) (((char *) temp_a1) + 0x15))) != 0) && ((*((u8 *) (((char *) temp_a1) + 0xF))) == 0)) && ((*((u8 *) (((char *) temp_a1) + 9))) & 1)) && (((u32) (*new_var)) < ((u32) (((*((u8 *) (((char *) temp_a1) + 0x15))) * var_v1) / 3))))
  {
    *((u8 *) (((char *) temp_a1) + 0xF)) = 1U;
    *((u8 *) (((char *) temp_a1) + 0x15)) = (u8) ((*((u8 *) (((char *) temp_a1) + 0x15))) - 1);
  }
}

