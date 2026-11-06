s32 func_80033634_ovl_01();
s32 func_800377B0_ovl_01(s32, s16, s32, s16 *);
void func_80163E18_ovl_32(void *arg0)
{
  s16 sp10;
  volatile int sp12;
  s16 sp14;
  s32 temp_s2;
    s32 __repair_temp_s2_1;
  s32 temp_s2_2;
  temp_s2 = *((s32 *) (((char *) arg0) + 0x234));
  sp10 = 0x1091 - ((func_80033634_ovl_01() & 0xFF) * 2);
  sp12 = 0x934 - ((func_80033634_ovl_01() & 0xFF) * 2);
  sp14 = 0x100 - ((func_80033634_ovl_01() & 0xFF) * 2);
  temp_s2_2 = temp_s2 + 0x38;
  func_800377B0_ovl_01((((func_80033634_ovl_01() & 0xFF) * 4) + 0x2838) | 0x06000000, *((s16 *) (((char *) arg0) + 0x66)), temp_s2_2, &sp10);
  func_800377B0_ovl_01((((func_80033634_ovl_01() & 0xFF) * 4) + 0x1770) | 0x040F0000, *((s16 *) (((char *) arg0) + 0x66)), temp_s2_2, &sp10);
  sp10 = 0x1091 - ((func_80033634_ovl_01() & 0xFF) * 2);
  sp12 = 0xEAC - ((func_80033634_ovl_01() & 0xFF) * 2);
  sp14 = 0x510 - ((func_80033634_ovl_01() & 0xFF) * 2);
  func_800377B0_ovl_01((((func_80033634_ovl_01() & 0xFF) * 4) + 0x2838) | 0x06000000, *((s16 *) (((char *) arg0) + 0x66)), temp_s2_2, &sp10);
  sp10 = 0xD71 - ((func_80033634_ovl_01() & 0xFF) * 2);
  sp12 = 0xB28 - ((func_80033634_ovl_01() & 0xFF) * 2);
  sp14 = (-0x450) - ((func_80033634_ovl_01() & 0xFF) * 2);
  func_800377B0_ovl_01((((func_80033634_ovl_01() & 0xFF) * 4) + 0x2838) | 0x06000000, *((s16 *) (((char *) arg0) + 0x66)), temp_s2_2, &sp10);
  func_800377B0_ovl_01((((func_80033634_ovl_01() & 0xFF) * 4) + 0x1770) | 0x040F0000, *((s16 *) (((char *) arg0) + 0x66)), temp_s2_2, &sp10);
  sp10 = 0x6CD - ((func_80033634_ovl_01() & 0xFF) * 2);
  sp12 = 0x2F4 - ((func_80033634_ovl_01() & 0xFF) * 2);
  sp14 = 0xC4 - ((func_80033634_ovl_01() & 0xFF) * 2);
  func_800377B0_ovl_01((((func_80033634_ovl_01() & 0xFF) * 4) + 0x2838) | 0x06000000, *((s16 *) (((char *) arg0) + 0x66)), temp_s2_2, &sp10);
  __repair_temp_s2_1 = (*((s32 *) (((char *) arg0) + 0x234))) + 0x1B0;
  sp10 = 0x6B8 - ((func_80033634_ovl_01() & 0xFF) * 2);
  sp12 = 0x2F4 - ((func_80033634_ovl_01() & 0xFF) * 2);
  sp14 = 0xC4 - ((func_80033634_ovl_01() & 0xFF) * 2);
  func_800377B0_ovl_01((((func_80033634_ovl_01() & 0xFF) * 4) + 0x1A28) | 0x06000000, *((s16 *) (((char *) arg0) + 0x66)), __repair_temp_s2_1, &sp10);
  func_800377B0_ovl_01((((func_80033634_ovl_01() & 0xFF) * 4) + 0xFA0) | 0x040F0000, *((s16 *) (((char *) arg0) + 0x66)), __repair_temp_s2_1, &sp10);
}

