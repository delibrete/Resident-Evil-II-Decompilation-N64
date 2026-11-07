s32 func_80033634_ovl_01();
s32 func_8016ED5C_overlay_045();
s32 func_80173614_overlay_045(void *, s32);
extern s32 D_800C7650;
void func_8016FA84_overlay_045(void *arg0)
{
  s32 temp_s2;
  s32 var_v0_2;
  int var_s1;
  func_8016ED5C_overlay_045();
  if ((*((u8 *) (((char *) arg0) + 0x2D3))) != 0)
  {
    var_s1 = *((u16 *) (((char *) arg0) + 0x292));
  }
  else
  {
    var_s1 = *((u16 *) (((char *) arg0) + 0x28E));
  }
  temp_s2 = func_80173614_overlay_045(arg0, 0x80);
  func_80173614_overlay_045(arg0, 0x100);
  func_80173614_overlay_045(arg0, 0x400);
  if ((*((u16 *) (((char *) (&D_800C7650)) + 0x19A7A))) & 1)
  {
    *((s32 *) (((char *) arg0) + 4)) = 0x01090000;
    if (func_80033634_ovl_01() & 1)
    {
      *((s32 *) (((char *) arg0) + 4)) = 0x01050000;
    }
  }
  if ((*((s16 *) (((char *) arg0) + 0x2B4))) == 0)
  {
    if (((u32) (var_s1 - 0xBB9)) < 0x1193U)
    {
      if (((temp_s2 << 0x10) != 0) || ((var_s1 = 0x01070000, ((0x340 >> (func_80033634_ovl_01() & 0xF)) & 1) == 0)))
      {
        var_s1 = 0x01010000;
      }
      *((s32 *) (((char *) arg0) + 4)) = var_s1;
    }
    if ((var_s1 < 0xBB8U) && ((temp_s2 << 0x10) == 0))
    {
      var_v0_2 = 0x01070000;
      if ((0x340 >> (func_80033634_ovl_01() & 0xF)) & 1)
      {
        var_v0_2 = 0x01080000;
      }
      *((s32 *) (((char *) arg0) + 4)) = var_v0_2;
    }
  }
}

