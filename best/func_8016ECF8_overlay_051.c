s32 func_80066804_ovl_01();
s32 func_8016FB78_overlay_051();
extern u16 D_80172DF0_overlay_051;
void func_8016ECF8_overlay_051(void *arg0, s16 arg1, s16 arg2)
{
  s32 sp20;
  int new_var;
  s32 sp24;
  s32 sp28;
  char *var_s1;
  u16 temp_a1;
  u32 var_s2;
  void *temp_s0;
  var_s2 = 0;
  var_s1 = &D_80172DF0_overlay_051;
  do
  {
    temp_s0 = (char *)((*((s32 *) (((char *) arg0) + 0x234)))); temp_s0 += (s32)(((*((u16 *) var_s1)) * 0x178));
    new_var = 0x38D3;
    *((s32 *) (((char *) temp_s0) + 0x4C)) = (s32) ((arg1 + new_var) + (*((s32 *) (((char *) temp_s0) + 0x4C))));
    *((s32 *) (((char *) temp_s0) + 0x54)) = (s32) ((arg2 + 0x392C) + (*((s32 *) (((char *) temp_s0) + 0x54))));
    sp24 = 0;
    sp20 = *((s32 *) (((char *) temp_s0) + 0x4C));
    sp28 = *((s32 *) (((char *) temp_s0) + 0x54));
    if (func_80066804_ovl_01(&sp20, 0, 1 << (*((u8 *) (((char *) arg0) + 0x1A2)))) != 0)
    {
      *((s32 *) (((char *) temp_s0) + 0)) = 0;
    }
    temp_a1 = *((u16 *) var_s1);
    var_s1 += 0x14;/*__repair_loop_weight*/do {
    var_s2 += 1;} while (0);
    func_8016FB78_overlay_051(arg0, temp_a1, 0x40);
  }
  while (var_s2 < 0xFU);
}

