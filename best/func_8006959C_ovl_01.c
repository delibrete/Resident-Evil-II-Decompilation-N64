s32 func_800691F0_ovl_01(s32 *, s32, s32 *, s32 *);
extern s32 D_80139DF0;
s32 func_8006959C_ovl_01(s32 *arg0, s32 arg1, void *arg2)
{
  s32 temp_a0;
  u16 temp_t1;
  u16 temp_v1;
  u32 temp_a1;
  u32 temp_a2;
  temp_v1 = *((u16 *) (((char *) arg2) + 2));
  temp_t1 = *((u16 *) (((char *) arg2) + 4));
  temp_a0 = *((s32 *) (((char *) arg0) + 8));
  temp_a1 = temp_t1 >> 1;
  temp_a2 = ((((u32) (temp_a0 - ((s16) (((*((u16 *) (((char *) arg2) + 6))) + temp_v1) - temp_a1)))) >> 0x1E) & 2) | (((u32) (temp_a0 - ((s16) (temp_v1 + temp_a1)))) >> 0x1F);
  temp_a0 = temp_a2 < 3U;
  if (temp_a2 != 2)
  {
    if (temp_a0 == 0)
    {
      if (temp_a2 != 3)
      {
        return 3;
      }
      *((u16 *) (((char *) (&D_80139DF0)) + 6)) = temp_t1;
      *((u16 *) (((char *) (&D_80139DF0)) + 2)) = (u16) (*((u16 *) (((char *) arg2) + 2)));
      *((u16 *) (((char *) (&D_80139DF0)) + 4)) = (u16) (*((u16 *) (((char *) arg2) + 4)));
      *((u16 *) (((char *) (&D_80139DF0)) + 0)) = (u16) (*((u16 *) (((char *) arg2) + 0)));
      return func_800691F0_ovl_01(arg0, arg1, &D_80139DF0, arg0);
    }
    temp_v1 = *((u16 *) (((char *) arg2) + 6));
    if (temp_a2 != 0)
    {
      return temp_a0;
    }
    *((u16 *) (((char *) (&D_80139DF0)) + 6)) = temp_t1;
    *((u16 *) (((char *) (&D_80139DF0)) + 2)) = (u16) ((temp_v1 + (*((u16 *) (((char *) arg2) + 2)))) - (*((u16 *) (((char *) arg2) + 4))));
    *((u16 *) (((char *) (&D_80139DF0)) + 4)) = (u16) (*((u16 *) (((char *) arg2) + 4)));
    *((u16 *) (((char *) (&D_80139DF0)) + 0)) = (u16) (*((u16 *) (((char *) arg2) + 0)));
    return func_800691F0_ovl_01(arg0, arg1, &D_80139DF0, &D_80139DF0);
  }
  return 1;
}

