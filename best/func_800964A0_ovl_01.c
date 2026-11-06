s32 func_8004789C_ovl_01(s32, s32);
s32 func_800478DC_ovl_01(s32, u8, u8);
s32 func_800479EC_ovl_01(s32, u8, u8);
s32 func_80047B34_ovl_01(s32, s32);
extern s32 D_800C527C_ovl_01;
extern s32 D_8012BF38_ovl_01;
extern s32 D_8012F524_ovl_01;
extern s32 D_801310CC_ovl_01;
void func_800964A0_ovl_01(void)
{
  int __repair_constant = 0x80;
  s32 var_s1;
  s32 var_s3;
  u32 temp_a0;
  u32 var_v1;
  union 
  {
    char *pointer;
    s32 value;
  } __repair_phase_storage;
  char *new_var2;
  void *var_s2;
  new_var2 = (char *) (&D_8012BF38_ovl_01);
  var_v1 = D_800C527C_ovl_01 + 0x3BB64;
  temp_a0 = D_800C527C_ovl_01 + 0x3C004;
  if (var_v1 < temp_a0)
  {
    var_v1 = temp_a0;
  }
  var_s1 = var_v1 + 0xA3C;
  var_s3 = 2;
  var_s2 = var_v1 + 0xA46;
  var_s2 = (&D_801310CC_ovl_01) + 8;
  do
  {
    var_s2 -= 4;
    var_s3 -= 1;
    __repair_phase_storage.pointer = (char *) var_s2;
    do
    {
      func_80047B34_ovl_01(var_s1, 0);
    }
    while (0);
    {
      s32 __repair_call_arg0;
      int __repair_call_arg1;
      int __repair_call_arg2;
      int __repair_call_arg3;
      __repair_call_arg0 = var_s1;
      __repair_call_arg1 = __repair_constant;
      __repair_call_arg2 = __repair_constant;
      __repair_call_arg3 = __repair_constant;
      do
      {
        func_8004789C_ovl_01(__repair_call_arg0, __repair_call_arg1);
      }
      while (0);
    }
    do
    {
      func_800478DC_ovl_01(var_s1, *((u8 *) (((char *) var_s2) + 0)), *((u8 *) (__repair_phase_storage.pointer + 1)));
    }
    while (0);
    __repair_phase_storage.value = var_s1;
    var_s1 += 0x14;
    func_800479EC_ovl_01(__repair_phase_storage.value, *((u8 *) (((char *) var_s2) + 2)), *((u8 *) (((char *) var_s2) + 3)));
    *((s32 **) (((char *) var_s2) + 2)) = &D_8012F524_ovl_01;
    *((s16 *) (((char *) var_s2) + 0)) = 0x20;
    var_s2 += 0x14;
  }
  while (var_s3 != 0);
  *((s8 *) (new_var2 + 0x2B)) = 0;
  *((s8 *) (new_var2 + 0x2A)) = 0x50;
  *((s8 *) (new_var2 + 0x21)) = 0;
  *((s8 *) (new_var2 + 0x20)) = 0;
  *((s8 *) (new_var2 + 0x23)) = 0;
  *((s8 *) (new_var2 + 0x22)) = 0;
  *((u8 *) (new_var2 + 0xF)) = (u8) (*((u8 *) (new_var2 + 0xE)));
}

