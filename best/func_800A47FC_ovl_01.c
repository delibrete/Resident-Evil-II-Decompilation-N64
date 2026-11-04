extern f64 D_800BA620_ovl_01;
extern void *D_80143EAC;
extern u16 D_80143EB4;
typedef struct 
{
  unsigned char field_0;
  unsigned char pad_1[15];
  int field_10;
  int field_14;
} __repair_record_var_v1;
void func_800A47FC_ovl_01(void)
{
  f64 temp_fv0;
  s32 var_a0;
  s32 new_var;
  void *var_v1;
  unsigned long long new_var2;
  var_a0 = 0;
  if (D_80143EB4 != 0)
  {
    var_v1 = D_80143EAC;
    new_var2 = ((__repair_record_var_v1 *) var_v1)->field_0;
    do
    {
      if (new_var2 != 0)
      {
        temp_fv0 = *((f64 *) (((char *) var_v1) + 8));
        new_var = (s32) temp_fv0;
        ((__repair_record_var_v1 *) var_v1)->field_14 = (s32) ((__repair_record_var_v1 *) var_v1)->field_10;
        if (!(D_800BA620_ovl_01 <= temp_fv0))
        {
          ((__repair_record_var_v1 *) var_v1)->field_10 = new_var;
        }
        else
        {
          ((__repair_record_var_v1 *) var_v1)->field_10 = (s32) (((s32) (temp_fv0 - D_800BA620_ovl_01)) | 0x80000000);
        }
      }
      do
      {
        var_a0 += 1;
      }
      while (0);
      var_v1 += 0x68;
    }
    while (var_a0 < ((s32) D_80143EB4));
  }
}

