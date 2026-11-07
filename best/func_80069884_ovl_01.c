s32 func_8006B250_overlay_001(void *);
s32 func_8006B294_overlay_001(void *);
extern s32 D_800C7650_overlay_001;
s32 func_80069884_ovl_01(void *arg0, s32 arg1, void *arg2)
{
  s16 var_v0_3;
  s32 temp_hi;
  s32 temp_s0;
  s32 temp_s0_2;
  s32 temp_s0_3;
  
  s32 var_v0;
  s32 var_v0_2;
  s32 var_v0_4;
  u16 var_v1;
  s32 *new_var;
  u32 temp_s3;
  temp_s3 = ((u16) (*((u16 *) (((char *) arg2) + 0xA)))) >> 4;
  new_var = &(*((s32 *) (((char *) arg0) + 0x120)));
  if (temp_s3 & 2)
  {
    var_v0 = 0;
    if (((u32) ((*((u16 *) (((char *) arg2) + 4))) - 0x1F4)) >= ((u32) ((*new_var) - ((*((s16 *) (((char *) arg2) + 0))) + 0xFA))))
    {
      temp_s0_3 = *((s32 *) (((char *) arg0) + 0x128));
      var_v1 = *((u16 *) (((char *) arg2) + 6));
      var_v0_2 = (*((s16 *) (((char *) arg2) + 2))) - 0x28A;
      goto block_5;
    }
  }
  else
  {
    var_v0 = 0;
    if (((u32) ((*((u16 *) (((char *) arg2) + 6))) - 0x1F4)) >= ((u32) ((*((s32 *) (((char *) arg0) + 0x128))) - ((*((s16 *) (((char *) arg2) + 2))) + 0xFA))))
    {
      temp_s0_3 = *new_var;
      var_v1 = *((u16 *) (((char *) arg2) + 4));
      var_v0_2 = (*((s16 *) (((char *) arg2) + 0))) - 0x28A;
      block_5:
      var_v0 = 0;

      if (((u32) (var_v1 + 0x514)) >= ((u32) (temp_s0_3 - var_v0_2)))
      {
        var_v0 = func_8006B250_overlay_001(arg2);
        temp_s0_2 = var_v0 - func_8006B294_overlay_001(arg2);
        temp_hi = MULT_HI(temp_s0_2, 0x91A2B3C5);
        temp_s0_2 = ((s32) (temp_hi + temp_s0_2)) >> 0xA;
        *((s8 *) (((char *) arg0) + 5)) = 7;
        temp_s0_3 = (temp_s0_2 >> 0x1F) - temp_s0_2;
        var_v0_3 = ((unsigned short) temp_s0_3) + ((unsigned short) (-1));
        if ((*((u8 *) (((char *) arg0) + 4))) == 4)
        {
          *((s8 *) (((char *) arg0) + 5)) = 0x1A;
          var_v0_3 = temp_s0_3 - 1;
        }
        *((s16 *) (((char *) arg0) + 0x1F6)) = var_v0_3;
        *((s8 *) (((char *) arg0) + 6)) = 0;
        *((s8 *) (((char *) arg0) + 0x206)) = 0;
        if (temp_s3 & 2)
        {
          if (((*((s32 *) (((char *) arg0) + 0x128))) - (*((s16 *) (((char *) arg2) + 2)))) < ((s32) (((u16) (*((u16 *) (((char *) arg2) + 6)))) >> 1)))
          {
            *((s16 *) (((char *) arg0) + 0x1F4)) = 0xC00;
            if (temp_s3 & 1)
            {
              *((s8 *) (((char *) arg0) + 0x206)) = 1;
            }
            *((s32 *) (((char *) arg0) + 0x128)) = (s32) ((*((s16 *) (((char *) arg2) + 2))) - arg1);
          }
          else
          {
            *((s16 *) (((char *) arg0) + 0x1F4)) = 0x400;
            if (!(temp_s3 & 1))
            {
              *((s8 *) (((char *) arg0) + 0x206)) = 1;
            }
            *((s32 *) (((char *) arg0) + 0x128)) = (s32) (((*((s16 *) (((char *) arg2) + 2))) + (*((u16 *) (((char *) arg2) + 6)))) + arg1);
          }
        }
        else
        {
          if (((*((s32 *) (((char *) arg0) + 0x120))) - (*((s16 *) (((char *) arg2) + 0)))) < ((s32) (((u16) (*((u16 *) (((char *) arg2) + 4)))) >> 1)))
          {
            *((s16 *) (((char *) arg0) + 0x1F4)) = 0;
            if (temp_s3 & 1)
            {
              *((s8 *) (((char *) arg0) + 0x206)) = 1;
            }
            var_v0_4 = (*((s16 *) (((char *) arg2) + 0))) - arg1;
          }
          else
          {
            *((s16 *) (((char *) arg0) + 0x1F4)) = 0x800;
            if (!(temp_s3 & 1))
            {
              *((s8 *) (((char *) arg0) + 0x206)) = 1;
            }
            var_v0_4 = ((*((s16 *) (((char *) arg2) + 0))) + (*((u16 *) (((char *) arg2) + 4)))) + arg1;
          }
          *((s32 *) (((char *) arg0) + 0x120)) = var_v0_4;
        }
        *((s32 *) (((char *) arg0) + 0)) = (s32) ((*((s32 *) (((char *) arg0) + 0))) | 8);
        var_v0 = 1;
        *((s32 *) (((char *) (&D_800C7650_overlay_001)) + 0x19A5C)) = (s32) ((*((s32 *) (((char *) (&D_800C7650_overlay_001)) + 0x19A5C))) | 0x40);
      }
    }
  }
  return var_v0;
}

