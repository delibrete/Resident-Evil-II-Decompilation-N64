s32 func_80032EA4_ovl_01();
s32 func_80033634_ovl_01();
s32 func_80173CDC_overlay_058();
s32 func_80173D2C_overlay_058();
extern char D_800C7650[];
extern s8 D_8017487A_overlay_058;
void func_80173A38_overlay_058(s32 arg0, void *arg1)
{
  s32 var_a0;
  s32 var_v1;
  u8 temp_v0;
  u8 temp_v1;
  void *temp_v0_2;
  temp_v1 = *((u8 *) (((char *) arg1) + 0x11));
  if (temp_v1 != 1)
  {
    if ((((s32) temp_v1) + 1) < (2 + 1))
    {
      if (temp_v1 != 0)
      {
        var_v1 = 0x18000;
      }
      else
      {
        *((u8 *) (((char *) arg1) + 0x11)) = 1U;
        D_8017487A_overlay_058 = -7;
        goto block_8;
      }
    }
    else
      if (temp_v1 == 2)
    {
      if (func_80173CDC_overlay_058((s16) ((func_80033634_ovl_01(1) & 3) * (-1))) < 0)
      {
        *((u8 *) (((char *) arg1) + 0x11)) = 3U;
        *((u8 *) (((char *) arg1) + 0x12)) = (u8) (((func_80033634_ovl_01() & 3) * 0x1E) + 1);
      }
      goto block_15;
    }
    else
      if (temp_v1 != 3)
    {
      var_v1 = 0x18000;
    }
    else
    {
      temp_v0 = (*((u8 *) (((char *) arg1) + 0x12))) - 1;
      *((u8 *) (((char *) arg1) + 0x12)) = temp_v0;
      if (!(temp_v0 & 0xFF))
      {
        *((u8 *) (((char *) arg1) + 0x11)) = 1U;
      }
      goto block_14;
    }
  }
  else
  {
    block_8:
    if (func_80173CDC_overlay_058(func_80033634_ovl_01(1) & 3) > 0)
    {
      *((u8 *) (((char *) arg1) + 0x11)) = 2U;
    }

    block_14:
    block_15:
    var_v1 = 0x18000;


  }
  temp_v0_2 = D_800C7650 + var_v1;
  var_a0 = -2;
  if (func_80032EA4_ovl_01(arg0, *((s32 *) (((char *) temp_v0_2) + 0x1AA8)), *((s32 *) (((char *) temp_v0_2) + 0x1AB0)), 1) > 0)
  {
    var_a0 = 2;
  }
  func_80173D2C_overlay_058(var_a0);
}

