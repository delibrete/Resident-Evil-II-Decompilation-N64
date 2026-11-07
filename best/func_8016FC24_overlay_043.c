s32 func_80040BE4_ovl_01(s32, s32);
extern s32 D_800C7650;
extern s32 D_800E10D4;
typedef struct { int field_0; unsigned char pad_4[560]; void * field_234; unsigned char pad_238[124]; unsigned short field_2B4; unsigned char pad_2B6[18]; signed char field_2C8; } __repair_record_arg0;
void func_8016FC24_overlay_043(void *arg0)
{
  char *new_var;
  s32 temp_lo;
  s32 temp_v0;
  s32 temp_v0_2;
  void *temp_a0;
  temp_a0 = ((__repair_record_arg0*)arg0)->field_234;
  if ((*((u8 *) (((char *) (&D_800C7650)) + 0x19CEF))) == 0)
  {
    temp_v0 = (*((s32 *) (((char *) (&D_800C7650)) + 0x19AA8))) - (*((s32 *) (((char *) temp_a0) + 0x4C)));
    temp_lo = temp_v0 * temp_v0;
    temp_v0_2 = (*((s32 *) (((char *) (&D_800C7650)) + 0x19AB0))) - (*((s32 *) (((char *) temp_a0) + 0x54)));
    if (func_80040BE4_ovl_01(temp_lo + (temp_v0_2 * temp_v0_2), temp_lo) < 0x1450)
    {
      ((__repair_record_arg0*)arg0)->field_2C8 = 8;
      ((__repair_record_arg0*)arg0)->field_2B4 = (u16) ((((__repair_record_arg0*)arg0)->field_2B4) | 2);
      *((void **) (((char *) (&D_800C7650)) + 0x19CD0)) = arg0;
      D_800E10D4 = 0x05010000;
      new_var = (char *) (&D_800C7650);
      ((__repair_record_arg0*)arg0)->field_0 = (s32) ((((__repair_record_arg0*)arg0)->field_0) | 0x100A);
      *((s16 *) (((char *) (&D_800C7650)) + 0x19C72)) = -1;
      *((s32 *) (new_var + 0x19A80)) = (s32) ((*((s32 *) (((char *) (&D_800C7650)) + 0x19A80))) | 0x1008);
      *((u8 *) (new_var + 0x19CEF)) = (u8) ((*((u8 *) (new_var + 0x19CEF))) | 0x80);
    }
  }
}

