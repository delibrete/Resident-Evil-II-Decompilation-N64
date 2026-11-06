s32 func_80032EA4_ovl_01(void *, s32, s32, s32);
s32 func_80033174_ovl_01(void *, s32 *);
extern s32 D_800C7650;
extern s32 D_800E10D0;
void func_8016FF6C_overlay_057(void *arg0)
{
  s32 temp_s3;
  s32 temp_v1;
  s32 var_v0;
  u32 temp_s2;
  if (((*((u16 *) (((char *) arg0) + 0x2C0))) == 0) || ((*((s16 *) (((char *) arg0) + 0x1F2))) < 0x64))
  {
    *((s16 *) (((char *) arg0) + 0x1AA)) = 1;
    *((s32 *) (((char *) arg0) + 4)) = 0x01060000;
    return;
  }
  temp_s2 = *((u32 *) (((char *) arg0) + 0x28C));
  temp_v1 = func_80032EA4_ovl_01(arg0, *((s32 *) (((char *) (&D_800C7650)) + 0x19AA8)), *((s32 *) (((char *) (&D_800C7650)) + 0x19AB0)), 0x400);
  temp_s3 = temp_v1;
  if ((*((u8 *) (((char *) (&D_800C7650)) + 0x19CEF))) == 0)
  {
    var_v0 = temp_s3 << 0x10;
    if (((u8) (*((u8 *) (((char *) arg0) + 0x1E9)))) >= 0xBU)
    {
      if ((temp_v1 << 0x10) == 0)
      {
        var_v0 = temp_s3 << 0x10;
        if (temp_s2 < 0x5DCU)
        {
          if ((*((s16 *) (((char *) (&D_800C7650)) + 0x19C60))) > 0)
          {
            if (!(func_80033174_ovl_01(arg0, &D_800E10D0) & 0xFF))
            {
              *((s32 *) (((char *) arg0) + 4)) = 0x01040000;
              *((s8 *) (((char *) arg0) + 0x2C4)) = 0;
            }
          }
          var_v0 = temp_v1 << 0x10;
          if ((*((s16 *) (((char *) (&D_800C7650)) + 0x19C60))) < 0)
          {
            if (func_80033174_ovl_01(arg0, &D_800E10D0) & 0xFF)
            {
              *((s32 *) (((char *) arg0) + 4)) = 0x01040000;
              *((s8 *) (((char *) arg0) + 0x2C4)) = 0;
            }
            goto block_14;
          }
        }
        goto block_15;
      }
      goto block_17;
    }
    goto block_15;
  }
  block_14:
  var_v0 = temp_s3 << 0x10;

  block_15:
  if ((var_v0 != 0) || (temp_s2 >= 0x1389U))
  {
    block_17:
    if (((u8) (*((u8 *) (((char *) arg0) + 0x1E9)))) >= 0x1AU)
    {
      if (temp_v1 || arg0)
      {
        *((s32 *) (((char *) arg0) + 4)) = 0x01010000;
        *((s8 *) (((char *) arg0) + 0x2B6)) = 0xA;
      }
      else
      {
        *((s32 *) (((char *) arg0) + 4)) = 0x01010000;
        *((s8 *) (((char *) arg0) + 0x2B6)) = 0xA;
      }
    }

  }

}

