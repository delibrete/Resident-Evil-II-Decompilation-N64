extern s32 func_80032D44_ovl_01(s16, s16, s16, s16);
extern u8 D_800E10D0_ovl_01[];
s16 func_801685D4_ovl_14(u8 *arg0)
{
  u64 base = (u64) ((u32) D_800E10D0_ovl_01);
  union { s16 * pointer; s32 value; } __repair_phase_storage = { (s16 *) ((u32) (base & 0xFFFFFFFF)) };
  
s32 __repair_phase_var;
  u16 temp;
  __repair_phase_var = __repair_phase_storage.pointer[0x15];
  temp = (func_80032D44_ovl_01(*((s16 *) (arg0 + 0x2A)), *((s16 *) (arg0 + 0x32)), __repair_phase_var, __repair_phase_storage.pointer[0x19]) - (*((u16 *) (arg0 + 0x66)))) & 0xFFF;
  __repair_phase_storage.value = temp;
  if (((s16) temp) >= 0x801)
  {
    __repair_phase_storage.value = temp | 0xF000;
  }
  return __repair_phase_storage.value;
}

