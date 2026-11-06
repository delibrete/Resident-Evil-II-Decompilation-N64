s32 func_80043650_ovl_01();
s32 func_80084514_ovl_01(s32);
extern void *D_8010D8E0_ovl_01;
void func_80053DAC_ovl_01(s8 arg0)
{
  s32 temp_v0_2;
  u32 temp_v1;
  u8 *var_s3;
  u8 *var_s4;
  u8 temp_v0;
  u8 temp_v1_2;
  
  void *temp_s0;
  union { void * pointer; unsigned int value; } __repair_phase_storage;
  void *var_s1;
  void *var_s2;
  func_80043650_ovl_01();
  temp_s0 = D_8010D8E0_ovl_01;
  var_s4 = temp_s0 + 4;
  var_s3 = temp_s0 + 0x16C;
  var_s2 = temp_s0 + 0x340;
  __repair_phase_storage.pointer = temp_s0 + 0x19C0;
  var_s1 = temp_s0 + 0x34F;
  do
  {
    var_s2 += 0x10;
    temp_v0 = *var_s4;
    var_s4 += 1;
    *((s32 *) (((char *) var_s1) + (-0xB))) = 0x8000A;
    temp_v1 = (temp_v0 - 0x20) & 0xFFFF;
    temp_v0_2 = func_80084514_ovl_01((((temp_v1 >> 5) * 0xA00) | ((temp_v1 & 0x1F) * 8)) & 0xFEF8);
    temp_v1_2 = *var_s3;
    var_s3 += 1;
    *((s8 *) (((char *) var_s1) + 0)) = arg0;
    *((s32 *) (((char *) var_s1) + (-7))) = (s32) (temp_v0_2 + (temp_v1_2 << 5));
    var_s1 += 0x10;
  }
  while (((u32) var_s2) < ((u32) __repair_phase_storage.pointer));
  *((s16 *) (((char *) temp_s0) + 0x320)) = (s16) (((*((u8 *) (((char *) temp_s0) + 0))) * 8) + 0x10);
  *((s16 *) (((char *) temp_s0) + 0x322)) = (s16) (((*((u8 *) (((char *) temp_s0) + 1))) * 0xA) + 0x15);
 do { __repair_phase_storage.value = (u8)( ((*((u8 *) (((char *) temp_s0) + 0x2D5))) + 1) & 0x1F); } while (0);
  *((u8 *) (((char *) temp_s0) + 0x2D5)) = ((u8)__repair_phase_storage.value);
  *((s16 *) (((char *) temp_s0) + 0x32A)) = (s16) (*((u8 *) (((char *) temp_s0) + 0x2D7)));
  if (arg0 != 0)
  {
    *((s8 *) (((char *) temp_s0) + 0x32F)) = (s8) (((u8)__repair_phase_storage.value) & 0x10);
  }
  else
  {
    *((s8 *) (((char *) temp_s0) + 0x32F)) = 0;
  }
  *((s8 *) (((char *) temp_s0) + 0x33F)) = arg0;
}
