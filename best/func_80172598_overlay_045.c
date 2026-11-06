s32 func_800377B0_ovl_01(s32, s16, s32 *, s16 *);
extern s32 D_800C7650;
extern s32 D_800E8FC8;
extern s32 D_80174A94_overlay_045;
void func_80172598_overlay_045(void *arg0)
{
  int __repair_literal;
  s16 sp10;
  u16 sp12;
  s16 sp14;
  s32 *var_s0;
  u32 var_s1;
  void *temp_s2;
  if ((*((u8 *) (((char *) arg0) + 0x2D2))) != 0)
  {
    *((u16 *) (((char *) (&D_800C7650)) + 0x19A78)) = (u16) ((*((u16 *) (((char *) (&D_800C7650)) + 0x19A78))) & 0xFFDF);
  }
  var_s1 = 0;
  __repair_literal = 0;
  if ((*((s8 *) (((char *) arg0) + 0x2D6))) <= __repair_literal)
  {
    temp_s2 = *((void **) (((char *) arg0) + 0x234));
    var_s0 = &D_80174A94_overlay_045;
    do
    {
      if (__repair_literal || var_s1)
      {
        var_s1 += 1;
        sp10 = (*((u16 *) (((char *) temp_s2) + 0x4E))) + (*((u16 *) (((char *) var_s0) + 0)));
        sp12 = *((u16 *) (((char *) arg0) + 0x1A8));
        sp14 = (*((u16 *) (((char *) temp_s2) + 0x56))) + (*((u16 *) (((char *) var_s0) + 4)));
        var_s0 += 8;
      }
      else
      {
        var_s1 += 1;
        sp10 = (*((u16 *) (((char *) temp_s2) + 0x4E))) + (*((u16 *) (((char *) var_s0) + 0)));
        sp12 = *((u16 *) (((char *) arg0) + 0x1A8));
        sp14 = (*((u16 *) (((char *) temp_s2) + 0x56))) + (*((u16 *) (((char *) var_s0) + 4)));
        var_s0 += 8;
      }
      if (var_s1)
      {
        func_800377B0_ovl_01(0x1A002000, *((s16 *) (((char *) arg0) + 0x66)), &D_800E8FC8, &sp10);
      }
      else
      {
        func_800377B0_ovl_01(0x1A002000, *((s16 *) (((char *) arg0) + 0x66)), &D_800E8FC8, &sp10);
      }
    }
    while (var_s1 < 8U);
    *((s8 *) (((char *) arg0) + 0x2DA)) = 1;
    *((s8 *) (((char *) arg0) + 0x2DB)) = 1;
  }
}

