extern int D_800E10F8;
extern int D_800E1100;
s32 func_800334F8_ovl_01();
s32 func_80040BE4_ovl_01();
s32 func_80089D34_ovl_01();
extern char D_800C7650[];
void func_80171294_overlay_058(void *arg0, s32 arg1, s32 arg2)
{
  s16 var_v1;
  s16 __repair_result_var_v1;
  s32 temp_v0;
  s32 temp_v0_2;
  u16 temp_v0_3;
  short new_var;
  if ((*((u8 *) (((char *) arg0) + 7))) == 0)
  {
    *((u8 *) (((char *) arg0) + 7)) = 1U;
    *((s32 *) (((char *) arg0) + 0x1E8)) = 0x01000F00;
    func_800334F8_ovl_01(arg0, arg1, arg2, NULL);
    func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
    temp_v0 = 0x1388 - D_800E10F8;
    temp_v0_2 = (-0x40D8) - D_800E1100;
    new_var = temp_v0 * temp_v0;
    *((u16 *) (((char *) arg0) + 0x1F4)) = (u16) (func_80040BE4_ovl_01(new_var + (temp_v0_2 * temp_v0_2)) >> 4);
    *((u16 *) (((char *) arg0) + 0x1AA)) |= 0x4400;
  }
  func_800334F8_ovl_01(arg0, arg1, arg2, 0);
  func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
  __repair_result_var_v1 = *((s16 *) (((char *) arg0) + 0x1E0));
  if (__repair_result_var_v1 < 0)
  {
    var_v1 = -var_v1;
  }
  temp_v0_3 = (*((u16 *) (((char *) arg0) + 0x1F4))) - var_v1;
  *((u16 *) (((char *) arg0) + 0x1F4)) = temp_v0_3;
  if (temp_v0_3 & 0x8000)
  {
    *((s16 *) (((char *) arg0) + 6)) = 0x200;
  }
}

