s32 func_801737DC_overlay_054(s32 arg0, s8 arg1)
{
  void *temp_a2;
  temp_a2 = arg0 + 0x2B4;
  if (!((((s32) (*((u8 *) (((char *) temp_a2) + 0xE)))) >> arg1) & 1))
  {
  }
  *((u8 *) (((char *) (arg0 + 0x2B4)) - (-0xD))) = 0xC2;
  *((u8 *) (((char *) (arg0 + 0x2B4)) + 0xE)) &= ~(1 << arg1);
  *((s8 *) (((char *) (arg0 + 0x2B4)) + 0xF)) = arg1;
  return 1;
  return 0;
}

