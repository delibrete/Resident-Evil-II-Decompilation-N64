s32 func_80033634_ovl_01();
s32 func_800377B0_ovl_01(s32, s16, s32, s16 *);
extern s32 D_800C7650_ovl_01;
void func_80163D5C_ovl_32(void *arg0)
{
  s16 sp10;
  s16 sp12;
  s16 sp14;
  s32 temp_s0;
  s32 temp_s0_2;
  void *temp_a2;
  sp10 = 0x234;
  temp_s0 = *((s32 *) (((char *) arg0) + sp10));
  temp_a2 = temp_s0 + 0x2F0;
  sp10 = (*((u16 *) (((char *) (&D_800C7650_ovl_01)) + 0x19A4E))) - (*((u16 *) (((char *) temp_a2) + 0x4E)));
  sp12 = (*((u16 *) (((char *) (&D_800C7650_ovl_01)) + 0x19A52))) - (*((u16 *) (((char *) temp_a2) + 0x52)));
  temp_s0_2 = temp_s0 + 0x328;
  sp14 = (*((u16 *) (((char *) (&D_800C7650_ovl_01)) + 0x19A56))) - (*((u16 *) (((char *) temp_a2) + 0x56)));
  func_800377B0_ovl_01(0x05042710, *((s16 *) (((char *) arg0) + 0x66)), temp_s0_2, &sp10);
  func_800377B0_ovl_01(((func_80033634_ovl_01() & 0xFF) * 4) | 0x040F1000, *((s16 *) (((char *) arg0) + 0x66)), temp_s0_2, &sp10);
}

