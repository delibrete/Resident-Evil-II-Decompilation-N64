s32 func_80032EA4_ovl_01(void *, s16, s16, s32);
s32 func_80033634_ovl_01();
u32 func_80040BE4_ovl_01(s32);
extern s32 D_800DF650_ovl_01;
extern s32 D_8016C230_ovl_31;
extern u8 D_8016C250_ovl_31;
extern s32 D_8016C254_ovl_31;
extern s32 D_8016C258_ovl_31;
extern s8 D_8016C298_ovl_31;
void func_8016BEE8_ovl_31(void *arg0)
{
  s32 temp_s0;
  s32 temp_s1;
  s32 temp_v0_2;
  s32 temp_v0_4;
  s32 temp_v0_5;
  s32 temp_v1;
  s32 temp_v1_2;
  s32 var_s0;
  s32 var_s0_2;
  s32 var_s1;
  s32 var_s2;
  s32 var_s3;
  s32 var_v0;
  s32 var_v1;
  u32 temp_v0_6;
  u32 var_s5;
  void *temp_v0;
  union 
  {
    void *pointer;
    s32 value;
  } __repair_phase_storage;
  var_s5 = 0x7FFFFFFF;
  temp_s0 = func_80033634_ovl_01();
  temp_v1 = *((s32 *) (((char *) arg0) + 0x28));
  var_s3 = (((s32) (temp_s0 & 0xFF)) >> (func_80033634_ovl_01() & 3)) & 1;
  if (temp_v1 < (-0x3A98))
  {
    var_s3 = 0;
  }
  if (temp_v1 >= (-0x2E17))
  {
    var_s3 = 1;
  }
  var_s0 = 0;
  temp_s1 = var_s3 & 0xFF;
  temp_v1_2 = temp_s1;
  var_s1 = temp_v1_2 * 4;
  var_s2 = 0;
  D_8016C250_ovl_31 = 0;
  if ((*((u16 *) (((char *) arg0) + 0x2B6))) & 0x20)
  {
    var_s1 = (temp_v1_2 ^ 1) * 4;
  }
  do
  {
    temp_v0 = (((var_s1 & 0xFF) + (var_s0 & 0xFF)) * 4) + (&D_8016C230_ovl_31);
    var_v0 = var_s0 + 1;
    if (func_80032EA4_ovl_01(arg0, *((s16 *) (((char *) temp_v0) + 0)), *((s16 *) (((char *) temp_v0) + 2)), 0x270) == 0)
    {
      temp_v0_2 = var_s2 & 0xFF;
 do { do { var_s2 += 1; } while (0); D_8016C250_ovl_31 += 1; *(temp_v0_2 + (&D_8016C254_ovl_31)) = var_s1 + var_s0; var_v0 = var_s0 + 1; } while (0);
    }
    var_s0 = var_v0;
  }
  while (((u32) (var_v0 & 0xFF)) < 4U);
  var_s0_2 = 0;
  temp_s1 = var_s3 * 8;
  D_8016C298_ovl_31 = 0;
  var_v1 = 0 & 0xFF;
  do
  {
    __repair_phase_storage.pointer = (((temp_s1 & 0xFF) + var_v1) * 4) + (&D_8016C258_ovl_31);
    temp_v1 = (*((s32 *) (((char *) (&D_800DF650_ovl_01)) + 0x1AA8))) - (*((s16 *) (((char *) __repair_phase_storage.pointer) + 0)));
    temp_v0_5 = (*((s32 *) (((char *) (&D_800DF650_ovl_01)) + 0x1AB0))) - (*((s16 *) (((char *) __repair_phase_storage.pointer) + 2)));
    temp_v0_6 = func_80040BE4_ovl_01((temp_v1 * temp_v1) + (temp_v0_5 * temp_v0_5));
    if (temp_v0_6 < var_s5)
    {
      D_8016C298_ovl_31 = temp_s1 + var_s0_2;
      var_s5 = temp_v0_6;
    }
    __repair_phase_storage.value = var_s0_2 + 1;
    var_s0_2 = __repair_phase_storage.value;
    var_v1 = var_s0_2 & 0xFF;
  }
  while (((u32) (__repair_phase_storage.value & 0xFF)) < 8U);
}
