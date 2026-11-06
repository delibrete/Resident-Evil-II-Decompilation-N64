extern unsigned short D_800E10CA;
s32 func_80032EA4_ovl_01();
s32 func_80033634_ovl_01();
extern char D_800C7650[];
void func_8016F66C_overlay_039(void *arg0)
{
  s32 temp_s0;
  s32 temp_v1;
  s32 var_v0;
  u32 temp_s2;
  temp_s2 = *((u32 *) (((char *) arg0) + 0x28C));
  temp_s0 = func_80032EA4_ovl_01(arg0, *((void **) (D_800C7650 + 0x19AA8)), *((void **) (D_800C7650 + 0x19AB0)), (void *) 0x400);
  temp_v1 = func_80032EA4_ovl_01(arg0, *((void **) (D_800C7650 + 0x19AA8)), *((void **) (D_800C7650 + 0x19AB0)), 0x320);
  if (temp_s2 < 0x1388U)
  {
    var_v0 = temp_s2 < 0xBB8U;
    if ((temp_s0 << 0x10) == 0)
    {
      if ((*((u16 *) (((char *) arg0) + 0x1F0))) & 0x800)
      {
        *((s32 *) (((char *) arg0) + 4)) = 0x01010000;
      }
      goto block_4;
    }
  }
  else
  {
    block_4:
    var_v0 = temp_s2 < 0xBB8U;

  }
  if ((var_v0 != 0) && ((temp_v1 << 0x10) != 0))
  {
    var_v0 = (temp_s2 + 1) <= 0x7D0U;
    if (D_800E10CA & 0x15)
    {
      var_v0 = temp_s2 < 0x7D0U;
      if ((*((u16 *) (((char *) arg0) + 0x1F0))) & 0x800)
      {
        var_v0 = temp_s2 < 0x7D0U;
        if (!(func_80033634_ovl_01() & 1))
        {
          *((s32 *) (((char *) arg0) + 4)) = 0x010C0000;
          goto block_11;
        }
      }
    }
  }
  else
  {
    block_11:
    var_v0 = temp_s2 < 0x7D0U;

  }
  if (((((var_v0 != 0) && ((temp_s0 << 0x10) != 0)) && ((*((u16 *) (((char *) arg0) + 0x1F0))) & 0x800)) && (D_800E10CA & 0x17)) && (func_80033634_ovl_01() & 1))
  {
    *((s32 *) (((char *) arg0) + 4)) = 0x010C0000;
  }
}

