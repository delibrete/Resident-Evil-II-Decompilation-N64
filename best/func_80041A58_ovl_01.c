f32 func_8000DB80();
extern f32 D_800B87B4_overlay_001;
extern f32 D_800B87B8_overlay_001;
extern f32 D_800B87BC_overlay_001;
void func_80041A58_ovl_01(void *arg0, void *arg1)
{
  f32 sp10;
  f32 sp14;
  f32 sp18;
  f32 sp1C;
  volatile unsigned int new_var3;
  f32 temp_fa0_2;
  f32 __repair_sp1C_1;
  f32 sp20;
  f32 sp24;
  f32 sp28;
  f32 __repair_sp28_1;
  f32 sp2C;
  f32 sp30;
  f32 temp_fa0;
  f32 temp_fa0_3;
  f32 temp_fa1;
  f32 temp_fs0;
  f32 temp_fs1;
  f32 temp_ft0;
  f32 temp_ft0_2;
  s16 *new_var2;
  f32 temp_ft0_3;
  f32 temp_ft0_4;
  f32 temp_ft1;
  f32 new_var4[2];
  f32 new_var[2];
  f32 temp_fv0_2;
  f32 temp_fv0_3;
  f32 temp_fv0_4;
  f32 temp_fv0_5;
  f32 temp_fv0_6;
  f32 temp_fv0_7;
  f32 temp_fv1;
  f32 temp_fv1_2;
  f32 var_fv1_3;
  temp_ft0 = ((f32) (*((s16 *) (((char *) arg0) + 0)))) * D_800B87B4_overlay_001;
  sp10 = temp_ft0;
  temp_ft1 = ((f32) (*((s16 *) (((char *) arg0) + 2)))) * D_800B87B4_overlay_001;
  sp14 = temp_ft1;
  temp_fv1 = ((f32) (*((s16 *) (((char *) arg0) + 4)))) * D_800B87B4_overlay_001;
  sp18 = temp_fv1;
  sp1C = ((f32) (*((s16 *) (((char *) arg0) + 6)))) * D_800B87B4_overlay_001;
  sp20 = ((f32) (*((s16 *) (((char *) arg0) + 8)))) * D_800B87B4_overlay_001;
  temp_fa0 = ((temp_ft0 * temp_ft0) + (temp_ft1 * temp_ft1)) + (temp_fv1 * temp_fv1);
  new_var[1] = sqrtf(temp_fa0);
  sp24 = ((f32) (*((s16 *) (((char *) arg0) + 0xA)))) * D_800B87B4_overlay_001;
  if (new_var[1] != new_var[1])
  {
    new_var[1] = func_8000DB80(temp_fa0);
  }
  temp_fs1 = D_800B87B8_overlay_001;
  temp_ft0_2 = temp_fs1 / new_var[1];
  sp10 *= temp_ft0_2;
  temp_fa0_2 = ((sp1C * sp1C) + (sp20 * sp20)) + (sp24 * sp24);
  sp14 *= temp_ft0_2;
  new_var4[1] = sqrtf(temp_fa0_2);
  sp18 *= temp_ft0_2;
  if (new_var4[1] != new_var4[1])
  {
    new_var4[1] = func_8000DB80(temp_fa0_2);
  }
  temp_ft0_3 = temp_fs1 / new_var4[1];
  new_var[0] = sp1C * temp_ft0_3;
  temp_fs0 = D_800B87BC_overlay_001;
  __repair_sp1C_1 = new_var[0];
  *((s16 *) (((char *) arg1) + 6)) = (s16) ((s32) (new_var[0] * temp_fs0));
  temp_fv0_2 = sp20 * temp_ft0_3;
  sp20 = temp_fv0_2;
  *((s16 *) (((char *) arg1) + 8)) = (s16) ((s32) (temp_fv0_2 * temp_fs0));
  temp_fv0_3 = sp24 * temp_ft0_3;
  sp24 = temp_fv0_3;
  *((s16 *) (((char *) arg1) + 0xA)) = (s16) ((s32) (temp_fv0_3 * temp_fs0));
  temp_fa1 = sp18 * sp20;
  new_var4[0] = (sp14 * sp24) - temp_fa1;
  temp_fv1_2 = (sp18 * __repair_sp1C_1) - (sp10 * sp24);
  temp_fv0_4 = (sp10 * sp20) - (sp14 * __repair_sp1C_1);
  sp28 = new_var4[0];
  temp_fa0_3 = ((new_var4[0] * new_var4[0]) + (temp_fv1_2 * temp_fv1_2)) + (temp_fv0_4 * temp_fv0_4);
  sp2C = temp_fv1_2;
  var_fv1_3 = sqrtf(temp_fa0_3);
  sp30 = temp_fv0_4;
  if (var_fv1_3 != var_fv1_3)
  {
    var_fv1_3 = func_8000DB80(temp_fa0_3);
  }
  temp_ft0_4 = temp_fs1 / var_fv1_3;
  temp_fv0_5 = sp28 * temp_ft0_4;
  __repair_sp28_1 = temp_fv0_5;
  *((s16 *) (((char *) arg1) + 0xC)) = (s16) ((s32) (temp_fv0_5 * temp_fs0));
  temp_fv0_6 = sp2C * temp_ft0_4;
  sp2C = temp_fv0_6;
  *(new_var2 = (s16 *) (((char *) arg1) + 0xE)) = (s16) ((s32) (temp_fv0_6 * temp_fs0));
  new_var3 = 0x10;
  temp_fv0_7 = (sp30 = sp30 * temp_ft0_4);
  *((s16 *) (((char *) arg1) + new_var3)) = (s16) ((s32) (temp_fv0_7 * temp_fs0));
  *((s16 *) (((char *) arg1) + 0)) = (s16) ((s32) (((sp20 * sp30) - (sp24 * sp2C)) * temp_fs0));
  *((s16 *) (((char *) arg1) + 2)) = (s16) ((s32) (((sp24 * __repair_sp28_1) - (__repair_sp1C_1 * sp30)) * temp_fs0));
  *((s16 *) (((char *) arg1) + 4)) = (s16) ((s32) (((__repair_sp1C_1 * sp2C) - (sp20 * __repair_sp28_1)) * temp_fs0));
}

