s16 func_80032D44_ovl_01(s16, s16, s16, s16);
s32 func_800377B0_ovl_01(s32, s16, s32 *, u16 *);
extern s32 D_800E10D0;
extern s32 D_800E8FC8;
extern s32 D_80174B04_overlay_058;
void func_80173E84_overlay_058(void *arg0, u8 arg1, s32 arg2)
{
  u16 sp10;
  char *new_var;
  u16 sp12;
  u16 sp14;
  s32 *var_a2;
  s16 temp_a1;
  char *new_var2;
  short new_var3;
  u8 temp_v1;
  void *temp_a0;
  void *temp_s2;
  temp_s2 = (char *) ((arg2 & 0xFF) * 6);
  temp_s2 = temp_s2 + ((s32) (&D_80174B04_overlay_058));
  temp_a1 = func_80032D44_ovl_01(*((s16 *) (((char *) arg0) + 0x2A)), *((s16 *) (((char *) arg0) + 0x32)), *((s16 *) (((char *) (&D_800E10D0)) + 0x2A)), *((s16 *) (((char *) (&D_800E10D0)) + 0x32)));
  ;
  new_var3 = 0;
  temp_v1 = *((u8 *) (((char *) temp_s2) + 0));
  temp_a0 = (char *) (*((s32 *) (((char *) arg0) + 0x234)));
  temp_a0 += (s32) ((arg1 & 0xFF) * 0x178);
  if (!(temp_v1 & 0x80))
  {
    new_var = ((char *) temp_a0) + 0x4E;
    sp10 = *((u16 *) new_var);
    var_a2 = &D_800E8FC8;
    sp12 = *((u16 *) (((char *) temp_a0) + 0x52));
    sp14 = *((u16 *) (((char *) temp_a0) + 0x56));
  }
  else
  {
    var_a2 = temp_a0 + 0x38;
    sp14 = new_var3;
    sp12 = 0;
    sp10 = 0x12C;
  }
  func_800377B0_ovl_01((((temp_v1 & 0x7F) << 0x18) | (((*((u8 *) (((char *) temp_s2) + 1))) + (*((u16 *) (((char *) temp_s2) + 2)))) << 0x10)) | (*((u16 *) (((char *) temp_s2) + 4))), temp_a1, var_a2, &sp10);
}

