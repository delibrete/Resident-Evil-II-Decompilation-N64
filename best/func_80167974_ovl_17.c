s32 func_80167974_ovl_17(void *arg0, s32 arg1, s32 arg2, s32 arg3)
{
  s16 temp_t0;
  s16 temp_v1;
  temp_t0 = *((s16 *) (((char *) arg0) + 0x1A8));
  temp_v1 = *((s16 *) (((char *) arg0) + 0x25E));
  if (temp_t0 < temp_v1)
  {
    if (((*((s32 *) (((char *) arg0) + 0x2C))) + arg1) >= temp_t0)
    {
      *((s32 *) (((char *) arg0) + 0x2C)) = (s32) (temp_t0 + arg3);
      *((s8 *) (((char *) arg0) + 0x2D6)) = -1;
      return -1;
    }
    return 0;
  }
  if ((((*((s32 *) (((char *) arg0) + 0x2C))) + arg1) + 1) <= temp_v1)
  {
    return 0;
  }
  *((s32 *) (((char *) arg0) + 0x2C)) = (s32) (temp_v1 + arg2);
  *((s8 *) (((char *) arg0) + 0x2D6)) = 1;
  return 1;
}

