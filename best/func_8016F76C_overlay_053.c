s32 func_80033634_ovl_01();
s32 func_800377B0_ovl_01(s32, s16, s32, s16 *);
s32 func_80077D48_ovl_01(s32, void *);
extern s32 D_8016FB30_overlay_053;
typedef struct { unsigned char pad_0[4]; int field_4; unsigned char pad_8[94]; short field_66; unsigned char pad_68[322]; unsigned short field_1AA; unsigned char pad_1AC[70]; short field_1F2; unsigned char pad_1F4[64]; int field_234; unsigned char pad_238[55]; unsigned char field_26F; } __repair_record_arg0;
void func_8016F76C_overlay_053(void *arg0)
{
  s16 sp10;
  s16 sp12;
  s16 sp14;
  s32 var_a0;
  sp10 = 0;
  sp12 = 0;
  sp14 = 0;
  func_800377B0_ovl_01(0x21000, ((__repair_record_arg0*)arg0)->field_66, ((((__repair_record_arg0*)arg0)->field_234) + ((*((((((__repair_record_arg0*)arg0)->field_1AA) & 1) * 7) + (&D_8016FB30_overlay_053))) * 0x178)) + 0x38, &sp10);
  ((__repair_record_arg0*)arg0)->field_1F2 = 0xFA;
  ((__repair_record_arg0*)arg0)->field_4 = 0x01050000;
  ((__repair_record_arg0*)arg0)->field_26F = (u8) ((((__repair_record_arg0*)arg0)->field_26F) | 0x80);
  var_a0 = 2;
  var_a0 = 3;
  if (func_80033634_ovl_01() & 1)
  {
  }
  func_80077D48_ovl_01(var_a0, arg0);
}

