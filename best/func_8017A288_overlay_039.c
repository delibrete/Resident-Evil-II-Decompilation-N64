s32 func_80033634_ovl_01();
s32 func_800377B0_ovl_01();
int func_8004251C_ovl_01();
s32 func_8004279C_ovl_01();
extern char D_800E8FC8[];
void func_8017A288_overlay_039(void *arg0)
{
  u16 sp10;
  u16 sp12;
  u16 sp14;
  u16 sp18;
  u16 sp1A;
  volatile char sp1C;
  s32 temp_s0_2;
  s32 temp_s0_3;
  s32 temp_s0_4;
  void *new_var;
  s32 temp_s0_5;
  s32 temp_s1;
  void *temp_s0;
  temp_s1 = arg0 + 0x14;
  new_var = arg0;
  temp_s0 = *((void **) (((char *) new_var) + 0x234));
  func_8004251C_ovl_01(temp_s1, temp_s0 + 8, temp_s0 + 0x38);
  sp10 = *((u16 *) (((char *) temp_s0) + 0x4E));
  sp12 = *((u16 *) (((char *) arg0) + 0x1A8));
  sp18 = 0x12C;
  sp1A = 0;
  sp1C = 0;
  sp14 = *((u16 *) (((char *) temp_s0) + 0x56));
  func_8004279C_ovl_01(temp_s1, &sp18, &sp18);
  sp18 += sp10;
  sp1A += sp12;
  sp1C += sp14;
  temp_s0_2 = (((func_80033634_ovl_01(sp12) & 0xFF) * 4) + 0xC00) | 0x1A000000;
  func_800377B0_ovl_01(temp_s0_2, (s16) ((*((u16 *) (((char *) new_var) + 0x66))) - ((func_80033634_ovl_01() & 0xFF) * 4)), &D_800E8FC8, &sp18);
  temp_s0_3 = (((func_80033634_ovl_01() & 0xFF) * 4) + 0xC00) | 0x1A000000;
  func_800377B0_ovl_01(temp_s0_3, (s16) ((*((u16 *) (((char *) arg0) + 0x66))) - (((func_80033634_ovl_01() & 0xFF) * 4) - 0x400)), &D_800E8FC8, &sp18);
  temp_s0_4 = (((func_80033634_ovl_01() & 0xFF) * 4) + 0xC00) | 0x1A000000;
  func_800377B0_ovl_01(temp_s0_4, (s16) ((*((u16 *) (((char *) arg0) + 0x66))) - (((func_80033634_ovl_01() & 0xFF) * 4) - 0x800)), &D_800E8FC8, &sp10);
  temp_s0_5 = (((func_80033634_ovl_01() & 0xFF) * 4) + 0xC00) | 0x1A000000;
  func_800377B0_ovl_01(temp_s0_5, (s16) ((*((u16 *) (((char *) new_var) + 0x66))) - (((func_80033634_ovl_01() & 0xFF) * 4) - 0xC00)), &D_800E8FC8, &sp10);
}

