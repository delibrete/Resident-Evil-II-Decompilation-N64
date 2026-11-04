s32 func_80043898_overlay_001();
s16 func_800844FC_overlay_001();
extern char D_800C7650_ovl_01[];
extern char D_800FE228_ovl_01[];
extern char D_8010B25C_ovl_01[];
s32 func_8004C594_ovl_01(void *arg0, u32 arg1, void *arg2)
{
  s32 var_a3;
  s16 temp_s5;
  s16 temp_v0;
  char *new_var;
  char *var_s2;
  s32 temp_a0;
  u32 var_s3;
  char *var_s1;
  u8 var_v0;
  void *temp_s0;
  void *temp_s6;
  void *var_s0;
  var_s2 = *((s32 **) (D_800FE228_ovl_01 + 0xC804));
  temp_s6 = D_800FE228_ovl_01 + 0x7800;
  var_s3 = arg1;
  if (var_s2 == temp_s6)
  {
    return *((s32 *) (((char *) arg2) + 0xD008));
  }
  var_s0 = var_s2 + 0xC;
  new_var = ((char *) var_s0) + (-8);
  temp_v0 = func_800844FC_overlay_001(*((s16 *) (((char *) arg0) + 0)));
  temp_s5 = ((((u32) (temp_v0 & 0xF0)) >> 3) + ((((u32) temp_v0) >> 8) & 1)) << 6;
  var_s1 = arg0 + 2;
  var_v0 = *((u8 *) (((char *) arg0) + 2));
  loop_3:
  var_a3 = 0x20;

  if (var_v0 != 0x20)
  {
    *((s32 *) var_s2) = 0x80808000;
    *((s8 *) (((char *) var_s0) + (-9))) = 0;
    *((s32 *) new_var) = (s32) ((var_s3 << 0x10) | (var_s3 >> 0x10));
    temp_a0 = (*((u8 *) var_s1)) - 0x20;
    *((s16 *) (((char *) var_s0) + (-4))) = func_800844FC_overlay_001(((temp_a0 & 0x1F) * 8) | ((temp_a0 & 0xE0) << 6));
    var_a3 = 0x10;
    if ((*((u8 *) (((char *) var_s0) + (-3)))) != 0x10)
    {
      *((s16 *) (((char *) var_s0) + 6)) = 8;
    }
    else
    {
      var_a3 = 0xB;
      *((s16 *) (((char *) var_s0) + 6)) = 0xB;
    }
    *((s16 *) (((char *) var_s0) + 4)) = 8;
    *((s16 *) (((char *) var_s0) + (-2))) = temp_s5;
    *((s32 **) (((char *) var_s0) + 0)) = &D_8010B25C_ovl_01;
    var_s2 += 0x14;
    var_s0 += 0x14;
    if (var_s2 != temp_s6)
    {
      goto block_9;
    }
  }
  else
  {
    block_9:
    var_s1 += 1;

    var_v0 = *((u8 *) var_s1);
    var_s3 += 8;
    if (var_v0 != 0)
    {
      goto loop_3;
    }
  }
  if ((*((s32 **) (D_800FE228_ovl_01 + 0xC804))) != var_s2)
  {
    temp_s0 = D_800C7650_ovl_01 + (0x10000 | 0x8000);
    *((s32 *) (((char *) temp_s0) + 0x204)) = func_80043898_overlay_001(*((s32 *) (((char *) temp_s0) + 0x204)), *((s32 **) (D_800FE228_ovl_01 + 0xC804)), var_s2);
  }
  *((s32 **) (D_800FE228_ovl_01 + 0xC804)) = var_s2;
  return (((u32) (var_s1 + 2)) >> 1) * 2;
}

