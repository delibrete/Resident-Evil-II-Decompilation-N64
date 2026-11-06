extern unsigned char D_800E133F;
extern unsigned short D_800E10CA;
extern short D_800E12C2;
s32 func_80032EA4_ovl_01();
s32 func_80033634_ovl_01();
extern char D_800C7650[];
void func_8016F330_overlay_057(void *arg0)
{
  s32 temp_a0;
  s32 temp_s0;
  s32 temp_s4;
  s32 temp_v1;
  s32 var_s3;
  s32 var_v0;
  void *new_var;
  u32 temp_s2;
  u8 temp_v0;
  var_s3 = 0;
  temp_s2 = *((u32 *) (((char *) arg0) + 0x28C));
  temp_s4 = func_80032EA4_ovl_01(arg0, *((void **) (D_800C7650 + 0x19AA8)), *((void **) (D_800C7650 + 0x19AB0)), (void *) 0x4C8);
  temp_s0 = func_80032EA4_ovl_01(arg0, *((void **) (D_800C7650 + 0x19AA8)), *((void **) (D_800C7650 + 0x19AB0)), 0x270);
  temp_v1 = func_80032EA4_ovl_01(arg0, *((void **) (D_800C7650 + 0x19AA8)), *((void **) (D_800C7650 + 0x19AB0)), 0x400);
  new_var = arg0;
  temp_a0 = temp_v1;
  if (((*((u16 *) (((char *) new_var) + 0x2C0))) == 0) || ((*((s16 *) (((char *) arg0) + 0x1F2))) < 0x64))
  {
    *((s16 *) (((char *) arg0) + 0x1AA)) = 1;
    *((s32 *) (((char *) arg0) + 4)) = 0x01060000;
    return;
  }
  if (((temp_v1 << 0x10) == 0) && (temp_s2 < 0x5DCU))
  {
    *((s32 *) (((char *) arg0) + 4)) = 0x01050000;
    *((s16 *) (((char *) arg0) + 0x1F4)) = 0x28;
    return;
  }
  var_v0 = temp_s2 < 0x9C4U;
  if ((*((u8 *) (((char *) arg0) + 0x2B6))) == 0)
  {
    var_v0 = temp_s2 < 0x9C4U;
    if (D_800E133F == 0)
    {
      var_v0 = temp_s2 < 0x9C4U;
      if ((temp_a0 << 0x10) == 0)
      {
        if (temp_s2 < 0xD48U)
        {
          var_v0 = temp_s2 < 0x9C4U;
          if (temp_s2 >= 0x9C5U)
          {
            *((s32 *) (((char *) arg0) + 4)) = 0x01020000;
            var_s3 = 1;
            goto block_12;
          }
        }
        else
        {
          block_12:
          var_v0 = temp_s2 < 0x9C4U;

        }
      }
    }
  }
  if ((((var_v0 != 0) && ((temp_s4 << 0x10) == 0)) && (D_800E133F == 0)) && (((u8) (*((u8 *) (((char *) arg0) + 0x2B6)))) < 0xAU))
  {
    *((s32 *) (((char *) arg0) + 4)) = 0x01040000;
    var_s3 = 1;
  }
  if (((((*((u8 *) (((char *) arg0) + 0x2B6))) != 0) && (D_800E133F == 0)) && ((temp_s0 << 0x10) == 0)) && (temp_s2 < 0xD48U))
  {
    if ((D_800E10CA & 4) && (!(func_80033634_ovl_01(temp_a0) & 3)))
    {
      *((s32 *) (((char *) arg0) + 4)) = 0x01080000;
      var_s3 = 1;
    }
  }
  if (!(D_800E12C2 != 0))
  {
    return;
  }
  if (!(D_800E12C2 < 0x3C))
  {
    return;
  }
  if (!(var_s3 == 1))
  {
    return;
  }
  {
    temp_v0 = (*((u8 *) (((char *) arg0) + 0x2C4))) + 1;
    *((u8 *) (((char *) arg0) + 0x2C4)) = temp_v0;
    if (((u32) (temp_v0 & 0xFF)) < 3U)
    {
      *((s32 *) (((char *) arg0) + 4)) = 0x01030000;
      return;
    }
    new_var = (char *) arg0;
    *((u8 *) (new_var + 0x2C4)) = 0U;
  }
}

