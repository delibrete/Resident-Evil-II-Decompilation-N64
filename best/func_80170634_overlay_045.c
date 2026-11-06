s32 func_80033634_ovl_01();
s32 func_80089D34_ovl_01(void *, s32);
void func_80170634_overlay_045(void *arg0)
{
  s8 var_v0;
  volatile char new_var;
  u16 temp_v0;
  if ((*((u8 *) (((char *) arg0) + 6))) == 0)
  {
    *((u8 *) (((char *) arg0) + 6)) = 1U;
    *((s32 *) (((char *) arg0) + 0x1E8)) = 0x300;
  }
  func_80089D34_ovl_01(arg0, 0x400);
  temp_v0 = (*((u16 *) (((char *) arg0) + 0x1F4))) - 1;
  *((u16 *) (((char *) arg0) + 0x1F4)) = temp_v0;
  if ((temp_v0 << 0x10) == 0)
  {
    if ((*((u8 *) (((char *) arg0) + 0x2D3))) != 0)
    {
      if (((u32) ((*((s32 *) (((char *) arg0) + 0x290))) & 0x3FFFFFFF)) < 0xBB8U)
      {
        goto block_7;
      }
      else
      {
        var_v0 = 3;
      }
    }
    else
      if (((u32) (*((u32 *) (((char *) arg0) + 0x28C)))) < 0xBB8U)
    {
      block_7:
      var_v0 = 7;

      if (!(new_var = (0x340 >> (func_80033634_ovl_01() & 0xF)) & 1))
      {
        goto block_8;
      }
    }
    else
    {
      block_8:
      var_v0 = 3;

    }
    *((s8 *) (((char *) arg0) + 5)) = var_v0;
    *((u8 *) (((char *) arg0) + 6)) = 0;
  }
}

