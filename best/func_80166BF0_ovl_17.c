void func_80166BF0_ovl_17(void *arg0, s32 arg1)
{
  s32 var_a2;
  u8 temp_v1;
  void *temp_a3;
  temp_a3 = (char *) arg0;
  temp_a3 += (s32) 0x2B4;
  temp_v1 = *((u8 *) (((char *) temp_a3) + 0x18));
  var_a2 = arg1;
  if (temp_v1 & 1)
  {
    *((u16 *) (((char *) arg0) + 0x66)) = (u16) ((*((u16 *) (((char *) arg0) + 0x66))) + arg1);
  }
  else
  {
    if (!(temp_v1 & 2))
    {
      if (arg1)
      {
        var_a2 = -arg1;
      }
      else
      {
        var_a2 = -arg1;
      }
    }
    *((u16 *) (((char *) arg0) + 0x64)) = (u16) ((*((u16 *) (((char *) arg0) + 0x64))) + var_a2);
  }
  *((u16 *) (((char *) temp_a3) + 0xE)) = (u16) ((*((u16 *) (((char *) temp_a3) + 0xE))) + var_a2);
}

