s32 func_8017738C_overlay_059(void *arg0, s16 arg1)
{
  s32 temp_a1;
  temp_a1 = ((~arg1) & 1) << 0xA;
  if (((u32) (((temp_a1 - (*((u16 *) (((char *) arg0) - -0x66)))) + 0x400) & 0xFFF)) < 0x800U)
  {
    if (arg1)
    {
      return temp_a1;
    }
    else
    {
      return temp_a1;
    }
  }
  return temp_a1 | 0x800;
}

