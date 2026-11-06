f32 func_8000DB80(f32);
extern f32 D_800B87C0_ovl_01;
extern f32 D_800B87C4_ovl_01;
extern f32 D_800B87C8_ovl_01;
void func_80041D9C_ovl_01(void *arg0, void *arg1)
{
  f32 sp10;
  f32 sp14;
  f32 sp18;
  f32 sp1C;
  f32 sp20;
  f32 sp24;
  f32 temp_fa0;
  f32 temp_fa0_2;
  f32 temp_fs0;
  f32 new_var[2];
  f32 temp_ft0;
  f32 temp_ft0_3;
  f32 temp_ft1;
  f32 temp_fv0;
  f32 temp_fv0_2;
  f32 temp_fv0_3;
  f32 temp_fv0_4;
  f32 temp_fv0_5;
  f32 temp_fv0_6;
  f32 temp_fv1;
  f32 var_fv1;
  f32 var_fv1_2;
  temp_ft0 = ((f32) (*((s16 *) (((char *) arg0) + 0)))) * D_800B87C0_ovl_01;
  sp10 = temp_ft0;
  temp_ft1 = ((f32) (*((s16 *) (((char *) arg0) + 2)))) * D_800B87C0_ovl_01;
  sp14 = temp_ft1;
  temp_fv1 = ((f32) (*((s16 *) (((char *) arg0) + 4)))) * D_800B87C0_ovl_01;
  sp18 = temp_fv1;
  sp1C = ((f32) (*((s16 *) (((char *) arg0) + 0xC)))) * D_800B87C0_ovl_01;
  sp20 = ((f32) (*((s16 *) (((char *) arg0) + 0xE)))) * D_800B87C0_ovl_01;
  temp_fa0 = ((temp_ft0 * temp_ft0) + (temp_ft1 * temp_ft1)) + (temp_fv1 * temp_fv1);
  var_fv1 = sqrtf(temp_fa0);
  sp24 = ((f32) (*((s16 *) (((char *) arg0) + 0x10)))) * D_800B87C0_ovl_01;
  if (var_fv1 != var_fv1)
  {
    var_fv1 = func_8000DB80(temp_fa0);
  }
  new_var[1] = D_800B87C4_ovl_01;
  new_var[0] = new_var[1] / var_fv1;
  temp_fv0 = sp10 * new_var[0];
  temp_fs0 = D_800B87C8_ovl_01;
  sp10 = temp_fv0;
  *((s16 *) (((char *) arg1) + 0)) = (s16) ((s32) (temp_fv0 * temp_fs0));
  temp_fv0_2 = sp14 * new_var[0];
  sp14 = temp_fv0_2;
  *((s16 *) (((char *) arg1) + 2)) = (s16) ((s32) (temp_fv0_2 * temp_fs0));
  temp_fv0_3 = sp18 * new_var[0];
  sp18 = temp_fv0_3;
  *((s16 *) (((char *) arg1) + 4)) = (s16) ((s32) (temp_fv0_3 * temp_fs0));
  temp_fa0_2 = ((sp1C * sp1C) + (sp20 * sp20)) + (sp24 * sp24);
  var_fv1_2 = sqrtf(temp_fa0_2);
  if (var_fv1_2 != var_fv1_2)
  {
    var_fv1_2 = func_8000DB80(temp_fa0_2);
  }
  temp_ft0_3 = new_var[1] / var_fv1_2;
  temp_fv0_4 = sp1C * temp_ft0_3;
  sp1C = temp_fv0_4;
  *((s16 *) (((char *) arg1) + 0xC)) = (s16) ((s32) (temp_fv0_4 * temp_fs0));
  temp_fv0_5 = sp20 * temp_ft0_3;
  sp20 = temp_fv0_5;
  *((s16 *) (((char *) arg1) + 0xE)) = (s16) ((s32) (temp_fv0_5 * temp_fs0));
  temp_fv0_6 = sp24 * temp_ft0_3;
  sp24 = temp_fv0_6;
  *((s16 *) (((char *) arg1) + 0x10)) = (s16) ((s32) (temp_fv0_6 * temp_fs0));
}

