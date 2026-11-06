s32 func_80007320(void *, s32);
extern void *D_80143F18;
extern void *D_80143F1C;
extern s32 D_80143F20;
extern s32 D_80143F24;
extern void *D_80143F28;
extern s32 D_80143F90;
typedef struct { unsigned char pad[8]; void * value; } __repair_field_8;
void func_800A3204_ovl_01(s32 arg0)
{
  void *__repair_cached_pointer = D_80143F18;
  s32 temp_s1;
  s32 var_a0;
  s32 var_a1;
  void *temp_v0;
  void *temp_v0_2;
  void *var_a2;
  void *var_v1;
  void **new_var;
  temp_s1 = arg0;
  temp_s1 = temp_s1 << 8;
  D_80143F18 = (*((void *(**)(s32, s32)) (((char *) (&D_80143F90)) + 0x18)))(arg0 * 0x14, 0);
  temp_v0 = (*((void *(**)(s32, s32)) (((char *) (&D_80143F90)) + 0x18)))(temp_s1, 0);
  D_80143F1C = temp_v0;
  func_80007320(temp_v0, temp_s1);
  var_a1 = 1;
  D_80143F24 = 0;
  D_80143F28 = D_80143F18;
  ((__repair_field_8 *)__repair_cached_pointer)->value = (void *) D_80143F1C;
  var_a2 = (char *) D_80143F18;
  *((s32 *) (var_a2 + 4)) = 0;
  if (arg0 > 1)
  {
    var_a2 = (char *) D_80143F1C;
    var_a2 += (s32) 0x100;
    var_a0 = 0;
    var_v1 = D_80143F18 + 0x14;
    do
    {
      new_var = &var_v1;
      ((__repair_field_8 *)var_v1)->value = var_a2;
      var_a2 += 0x100;
      temp_v0_2 = D_80143F18 + var_a0;
      var_a0 += 0x14;
      *((void **) (((char *) var_v1) + 4)) = temp_v0_2;
      *((void **) (((char *) var_v1) + (-0x14))) = *new_var;/*__repair_loop_weight*/do {
      var_a1 += 1;} while (0);
      var_v1 += 0x14;
    }
    while (var_a1 < arg0);
  }
  D_80143F20 = 0;
  *((s32 *) (((char *) ((var_a1 * 0x14) + D_80143F18)) + (-0x14))) = 0;
}

