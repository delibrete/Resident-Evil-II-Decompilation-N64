inline static s16 __repair_inline(s16 a)
{
  return a;
}

void func_80173000_overlay_058(void *arg0)
{
  s16 temp_v1;
  s32 *new_var;
  if ((*((u8 *) (((char *) arg0) + 6))) == 0)
  {
    *((u8 *) (((char *) arg0) + 6)) = 1U;
    *((s8 *) (((char *) arg0) + 0x2C4)) = 1;
    new_var = (s32 *) (((char *) arg0) + 0);
    do
    {
      *((s8 *) (((char *) arg0) + 0x2C5)) = 1;
      *((s16 *) (((char *) arg0) + 0x272)) = 0;
    }
    while (0);
    temp_v1 = 0x400;
    *((s32 *) (((char *) arg0) + 0)) = (s32) ((*((s32 *) (((char *) arg0) + 0))) | temp_v1);
    *((u8 *) (((char *) arg0) + 0x25C)) = (u8) ((*((u8 *) (((char *) arg0) + 0x25C))) | 1);
  }
  temp_v1 = __repair_inline(*((s16 *) (((char *) arg0) + 0x270)));
  *((s32 *) (((char *) arg0) + 0x1E8)) = 0x10130F00;
  if (temp_v1 == 1)
  {
    *((s8 *) (((char *) arg0) + 5)) = (s8) temp_v1;
    *((u8 *) (((char *) arg0) + 6)) = 0;
  }
}

