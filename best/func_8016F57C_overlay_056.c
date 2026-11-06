extern unsigned char D_800E133F;
s32 func_80032EA4_ovl_01();
s32 func_80033634_ovl_01();
extern char D_800C7650[];
void func_8016F57C_overlay_056(void *arg0)
{
  s32 temp_s3;
  s32 temp_v0;
  s32 var_v0;
  s32 var_v0_2;
  s32 var_v0_3;
  u32 temp_s2;
  temp_s2 = *((u32 *) (((char *) arg0) + 0x28C));
  func_80032EA4_ovl_01(arg0, *((void **) (D_800C7650 + 0x19AA8)), *((void **) (D_800C7650 + 0x19AB0)), (void *) 0x5F4);
  temp_s3 = func_80032EA4_ovl_01(arg0, *((void **) (D_800C7650 + 0x19AA8)), *((void **) (D_800C7650 + 0x19AB0)), 0x270);
  temp_v0 = func_80032EA4_ovl_01(arg0, *((void **) (D_800C7650 + 0x19AA8)), *((void **) (D_800C7650 + 0x19AB0)), 0x338);
  if (((temp_v0 << 0x10) == 0) && (temp_s2 < 0x5DCU))
  {
    *((s32 *) (((char *) arg0) + 4)) = 0x01050000;
    if ((((u8) (*((u8 *) (((char *) arg0) + 0x2B6)))) < 0xAU) && (func_80033634_ovl_01() & 1))
    {
      *((s32 *) (((char *) arg0) + 4)) = 0x01030000;
    }
  }
  if ((*((u8 *) (((char *) arg0) + 0x2B6))) == 0)
  {
    var_v0 = temp_s2 < 0xBB8U;
    if (D_800E133F == 0)
    {
      var_v0_2 = temp_s3 << 0x10;
      if ((temp_v0 << 0x10) == 0)
      {
        if (temp_s2 < 0xBB8U)
        {
          var_v0_2 = temp_s3 << 0x10;
          if (temp_s2 >= 0x709U)
          {
            *((s32 *) (((char *) arg0) + 4)) = 0x01020000;
            if (((*((u16 *) (((char *) arg0) + 0x2B8))) & 1) && (func_80033634_ovl_01() & 3))
            {
              *((s32 *) (((char *) arg0) + 4)) = 0x01070000;
            }
            if ((*((u16 *) (((char *) arg0) + 0x2B8))) & 0x20)
            {
              *((s32 *) (((char *) arg0) + 4)) = 0x01070000;
            }
            goto block_15;
          }
        }
        else
        {
          block_15:
          var_v0_2 = temp_s3 << 0x10;

        }
      }
      var_v0_3 = temp_v0 << 0x10;
      if (var_v0_2 == 0)
      {
        if (temp_s2 < 0x9C4U)
        {
          var_v0_3 = temp_v0;
          var_v0_3 = var_v0_3 << 0x10;
          if (temp_s2 >= 0x709U)
          {
            var_v0_3 = temp_v0 << 0x10;
            if (!(func_80033634_ovl_01() & 3))
            {
              *((s32 *) (((char *) arg0) + 4)) = 0x01070000;
              goto block_21;
            }
          }
        }
        else
        {
          block_21:
          var_v0_3 = temp_v0 << 0x10;

        }
      }
      if (var_v0_3 == 0)
      {
        if (temp_s2 < 0x708U)
        {
          *((s32 *) (((char *) arg0) + 4)) = 0x01030000;
        }
      }
      goto block_26;
    }
    goto block_27;
  }
  block_26:
  var_v0 = temp_s2 < 0xBB8U;

  if (D_800E133F != 0)
  {
    block_27:
    if (var_v0 != 0)
    {
      *((s32 *) (((char *) arg0) + 4)) = 0x01040000;
    }

  }
}

