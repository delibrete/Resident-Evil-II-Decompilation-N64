inline static u8 __repair_inline(u8 a)
{
  return a;
}

s32 func_8006CE20_ovl_01(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern s32 D_800C4F20_ovl_01;
extern s32 D_800E91F4_ovl_01;
extern s32 D_80115380_ovl_01;
extern s32 D_801153A0_ovl_01;
extern s32 D_801153C0_ovl_01;
void func_80074FEC_ovl_01(s32 arg0)
{
  s32 *new_var;
  s32 *var_v0;
  s32 temp_a2;
  s32 __repair_phase_temp_a2;
  s32 var_v1;
  u8 temp_a1;
  u8 temp_v1;
  void *temp_v1_2;
  temp_v1 = ((*((u8 *) (((char *) (&D_801153C0_ovl_01)) + 3))) + 1) & 0xF;
  new_var = &D_801153A0_ovl_01;
  temp_a2 = temp_v1 * 2;
  *((u8 *) (((char *) (&D_801153C0_ovl_01)) + 3)) = temp_v1;
  if (arg0 == 1)
  {
    var_v0 = &D_80115380_ovl_01;
    temp_v1 = *(temp_a2 + (&D_80115380_ovl_01));
    {
      s32 __repair_value;
      __repair_value = temp_a2 + 1;
      var_v1 = __repair_value;
    }
  }
  else
  {
    var_v0 = &D_801153A0_ovl_01;
    temp_v1 = *(temp_a2 + new_var);
    var_v1 = temp_a2 + 1;
  }
  temp_a1 = __repair_inline(*(var_v1 + var_v0));
  temp_v1_2 = (char *) (D_800E91F4_ovl_01 * 0x28);
  temp_v1_2 += (s32) (&D_800C4F20_ovl_01);
  __repair_phase_temp_a2 = 4;
  do { func_8006CE20_ovl_01(*((s32 *) (((char *) temp_v1_2) + 0)), *((s32 *) (((char *) temp_v1_2) + __repair_phase_temp_a2)), *((s32 *) (((char *) temp_v1_2) + 8)), *((s32 *) (((char *) temp_v1_2) + 0xC)), *((s32 *) (((char *) temp_v1_2) + 0x10)), *((s32 *) (((char *) temp_v1_2) + 0x14)), (*((s32 *) (((char *) temp_v1_2) + 0x18))) - temp_v1, (*((s32 *) (((char *) temp_v1_2) + 0x1C))) - temp_v1, (*((s32 *) (((char *) temp_v1_2) + 0x20))) - temp_a1, (*((s32 *) (((char *) temp_v1_2) + 0x24))) - temp_a1, 0, 0); } while (0);
}

