s32 func_800A28F0_ovl_01(s32, s32);
s32 func_800A2B70_ovl_01(s32, s32, s32);
extern s32 D_800A4884_ovl_01;
extern u8 D_800BA628_ovl_01;
extern f64 D_800BA640_ovl_01;
extern f32 D_800BA648_ovl_01;
extern f32 D_800BA64C_ovl_01;
extern f32 D_800BA650_ovl_01;
extern f32 D_800BA654_ovl_01;
extern s32 D_80143EB8;
extern s32 D_80143EBC;
extern s8 D_80143EED;
extern s32 D_80143F08;
extern s32 D_80143F10;
extern s32 D_80143F14;
extern s16 D_80143F40;
extern s32 D_80143F74;
extern s32 D_80143F78;
extern s32 (*D_80143F98)(s32 *);
extern s32 (*D_80143FA8)(s32, s32, s32);
extern s32 D_801477F0;
extern s32 D_80147F40;
void func_800A4D64_ovl_01(s32 *arg0, s32 arg1, s32 arg2, s32 arg3)
{
  f32 temp_fv0;
  f64 var_ft0;
  s32 temp_a2;
  s32 *new_var;
  s32 temp_a2_2;
  s32 temp_s0;
  s32 temp_v0;
  s32 var_a2;
  s32 var_s0;
  s32 var_v1;
  var_s0 = arg1;
  if (((u32) (var_s0 & 0xFFFF)) >= 0x21U)
  {
    var_s0 = 0x20;
  }
  temp_s0 = var_s0 & 0xFFFF;
  D_80143EED = 0;
  func_800A28F0_ovl_01(temp_s0, *arg0);
  do
  {
    func_800A2B70_ovl_01(temp_s0, *arg0, arg3 & 0xFF);
  }
  while (0);
  temp_a2 = arg2 & 0xFFFF;
  if (((long long) temp_a2) != 0)
  {
    D_80143F08 = 0;
    temp_a2_2 = (((((*arg0) * temp_a2) / 1000) / 192) * 0xC0) + 0xC0;
    D_80143F14 = temp_a2_2;
    D_80143F10 = D_80143FA8(temp_a2_2 * 2, 0, temp_a2_2);
  }
  else
  {
    D_80143F10 = 0;
  }
  D_80143F40 = 0xFFFF;
  D_80143F74 = 0;
  D_80143F78 = 0;
  D_80143F98(&D_800A4884_ovl_01);
  temp_v0 = *arg0;
  var_ft0 = (f64) temp_v0;
  if (temp_v0 < 0)
  {
    var_ft0 += D_800BA640_ovl_01;
  }
  temp_fv0 = ((((f32) var_ft0) / D_800BA648_ovl_01) / D_800BA64C_ovl_01) + D_800BA650_ovl_01;
  if (!(D_800BA654_ovl_01 <= temp_fv0))
  {
    var_v1 = (s32) temp_fv0;
    var_a2 = 0;
  }
  else
  {
    var_v1 = ((s32) (temp_fv0 - D_800BA654_ovl_01)) | 0x80000000;
    var_a2 = 0;
  }
  D_80143EBC = var_v1;
  D_80143EB8 = D_80143EBC;
  D_80147F40 = D_80143EBC * 0xC0;
  *((s8 *) (((char *) (&D_801477F0)) + 5)) = 0x10;
  new_var = &D_801477F0;
  *((s8 *) (((char *) new_var) + 4)) = 1;
  *((s32 *) (((char *) new_var) + 0)) = (s32) (*arg0);
  if (D_800BA628_ovl_01 != 0)
  {
    do
    {
      var_a2 += 1;
      temp_a2 = var_a2 & 0xFF;
      *((u8 *) (((char *) (temp_a2 + new_var)) + 0x106)) = (u8) (&D_800BA628_ovl_01)[temp_a2];
    }
    while ((&D_800BA628_ovl_01)[var_a2 & 0xFF] != 0);
  }
  *((s8 *) (((char *) ((var_a2 & 0xFF) + (&D_801477F0))) + 0x106)) = 0;
}

