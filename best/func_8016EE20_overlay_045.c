s32 func_80033634_ovl_01();
s32 func_8016ED5C_overlay_045();
s32 func_80173614_overlay_045(void *, s32);
extern s32 D_800C7650;
void func_8016EE20_overlay_045(void *arg0)
{
  int new_var;
  unsigned int new_var2;
  s32 temp_s2;
  s32 var_v0;
  s32 var_v0_2;
  u32 var_v1;
  func_8016ED5C_overlay_045();
  if ((*((u8 *) (((char *) arg0) + 0x2D3))) != 0)
  {
    var_v0 = *((u16 *) (((char *) arg0) + 0x292));
  }
  else
  {
    var_v0 = *((u16 *) (((char *) arg0) + 0x28E));
  }
  temp_s2 = func_80173614_overlay_045(arg0, 0x80);
  func_80173614_overlay_045(arg0, 0x100);
  if (((func_80173614_overlay_045(arg0, 0x400) << 0x10) != 0) && (var_v0 < 0x1F40U))
  {
    *((s32 *) (((char *) arg0) + 4)) = 0x01050000;
  }
  if ((*((u16 *) (((char *) (&D_800C7650)) + 0x19A7A))) & 1)
  {
    *((s32 *) (((char *) arg0) + 4)) = 0x01090000;
    new_var = 1;
    if (func_80033634_ovl_01() & new_var)
    {
      *((s32 *) (((char *) arg0) + 4)) = 0x01050000;
    }
  }
  var_v1 = var_v0 & 0xFFFF;
  if ((*((s16 *) (((char *) arg0) + 0x2B4))) == 0)
  {
    if (var_v1 < 0x1D4CU)
    {
      var_v0 = var_v1 < 0x1770U;
      if ((temp_s2 << 0x10) == 0)
      {
        var_v0 = var_v1 < 0x1770U;
        if (var_v1 >= 0xBB9U)
        {
          *((s32 *) (((char *) arg0) + 4)) = 0x01070000;
          var_v1 = var_v0 & 0xFFFF;
          goto block_14;
        }
      }
    }
    else
    {
      block_14:
      var_v0 = var_v1 < 0x1770U;

    }
    if (((var_v0 != 0) && ((temp_s2 << 0x10) == 0)) && (var_v1 >= (new_var2 = 0x3E9U)))
    {
      var_v0_2 = 0x01070000;
      if ((0x340 >> (func_80033634_ovl_01() & 0xF)) & new_var)
      {
        var_v0_2 = 0x01080000;
      }
      *((s32 *) (((char *) arg0) + 4)) = var_v0_2;
    }
  }
}

