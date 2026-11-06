s32 func_80032EA4_ovl_01(void *, s32, s32, s32);
s32 func_80033634_ovl_01(u8);
s32 func_80089D34_ovl_01(void *,  s32);
extern s32 D_800C7650;
extern s32 D_800E10D0;
void func_8016EDA8_overlay_055(void *arg0, s32 arg1, s32 arg2)
{
  s32 *var_s1;
  u16 temp_v0;
  u16 temp_v1;
  u16 __repair_result_temp_v1;
  
  u8 temp_a0_2;
  void *temp_a0;
  temp_v0 = (*((u16 *) (((char *) arg0) + 0x1F4))) - 1;
  *((u16 *) (((char *) arg0) + 0x1F4)) = temp_v0;
  if ((temp_v0 << 0x10) == 0)
  {
    *((s32 *) (((char *) arg0) + 0x1E8)) = 0x04000700;
    temp_a0 = *((void **) (((char *) arg0) + 0x250));
    *((s8 *) (((char *) arg0) + 0x2C5)) = 0;
    *((u8 *) (((char *) arg0) + 6)) = (u8) ((*((u8 *) (((char *) arg0) + 6))) + 1);
    if ((*((u8 *) (((char *) temp_a0) + 0x2B4))) != 0)
    {
      var_s1 = *((s32 **) (((char *) (&D_800C7650)) + 0x19D3C));
      __repair_result_temp_v1 = *((u16 *) (((char *) temp_a0) + 0x66));
      temp_a0_2 = *((u8 *) (((char *) arg0) + 0x2B5));
    }
    else
    {
      var_s1 = &D_800E10D0;
      temp_v1 = *((u16 *) (((char *) temp_a0) + 0x66));
      temp_a0_2 = *((u8 *) (((char *) arg0) + 0x2B5));
    }
    *((u16 *) (((char *) arg0) + 0x1F6)) = temp_v1;
    if (temp_a0_2 == 3)
    {
      *((u16 *) (((char *) arg0) + 0x1F6)) = (u16) (((*((u16 *) (((char *) arg0) + 0x1F6))) + 0x400) + ((func_80033634_ovl_01(temp_a0_2) & 1) << 0xB));
    }
    else
    {
      __repair_result_temp_v1 = ((s16) temp_v1) + 0x400;
      if (!(temp_a0_2 & 2))
      {
        __repair_result_temp_v1 = ((s16) temp_v1) - 0x400;
      }
    }
    *((u16 *) (((char *) arg0) + 0x1F6)) = __repair_result_temp_v1;
    *((u16 *) (((char *) arg0) + 0x1F6)) = (u16) ((*((u16 *) (((char *) arg0) + 0x1F6))) + func_80032EA4_ovl_01(arg0, *((s32 *) (((char *) var_s1) + 0x28)), *((s32 *) (((char *) var_s1) + 0x30)), 0x100));
  }
  func_80089D34_ovl_01(arg0,  arg1);
}

