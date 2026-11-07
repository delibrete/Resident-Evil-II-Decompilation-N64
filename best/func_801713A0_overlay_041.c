s16 func_80032D44_ovl_01(s16, s16, s16, s16);
s32 func_80033634_ovl_01();
s32 func_80035AAC_ovl_01_108(void *);
s32 func_80171600_overlay_041(s32, s16);
s32 func_80171660_overlay_041(s32, s16);
s32 func_80172768_overlay_041(void *, s32, s32);
s32 func_80172C10_overlay_041(void *);
s32 func_80172CE8_overlay_041(void *, s32);
extern s32 D_800C7650;
typedef struct { unsigned char pad_0[42]; short field_2A; unsigned char pad_2C[6]; short field_32; unsigned char pad_34[430]; short field_1E2; unsigned char pad_1E4[80]; int field_234; } __repair_record_arg0;
void func_801713A0_overlay_041(void *arg0)
{
  s16 temp_s0;
  unsigned char temp_s2;
  s32 var_v0;
  s32 var_v0_2;
  s32 var_v0_3;
  ((__repair_record_arg0*)arg0)->field_1E2 = 0;
  temp_s0 = func_80032D44_ovl_01(*((s16 *) (((char *) (&D_800C7650)) + 0x19AAA)), *((s16 *) (((char *) (&D_800C7650)) + 0x19AB2)), ((__repair_record_arg0*)arg0)->field_2A, ((__repair_record_arg0*)arg0)->field_32);
  temp_s2 = func_80033634_ovl_01() & 0xFF;
  func_80171600_overlay_041(((__repair_record_arg0*)arg0)->field_234, temp_s0);
  if (temp_s2 & 1)
  {
    func_80171600_overlay_041((((__repair_record_arg0*)arg0)->field_234) + 0x178, temp_s0);
    func_80171600_overlay_041((((__repair_record_arg0*)arg0)->field_234) + 0x2F0, temp_s0);
    var_v0 = temp_s2 & 2;
  }
  else
  {
    func_80171660_overlay_041((((__repair_record_arg0*)arg0)->field_234) + 0x178, temp_s0);
    func_80171660_overlay_041((((__repair_record_arg0*)arg0)->field_234) + 0x2F0, temp_s0);
    var_v0 = temp_s2 & 2;
  }
  if (var_v0 != 0)
  {
    func_80171600_overlay_041((((__repair_record_arg0*)arg0)->field_234) + 0x468, temp_s0);
    func_80171600_overlay_041((((__repair_record_arg0*)arg0)->field_234) + 0x5E0, temp_s0);
    func_80171600_overlay_041((((__repair_record_arg0*)arg0)->field_234) + 0x758, temp_s0);
    var_v0_2 = temp_s2 & 4;
  }
  else
  {
    func_80171660_overlay_041((((__repair_record_arg0*)arg0)->field_234) + 0x468, temp_s0);
    func_80171660_overlay_041((((__repair_record_arg0*)arg0)->field_234) + 0x5E0, temp_s0);
    func_80171660_overlay_041((((__repair_record_arg0*)arg0)->field_234) + 0x758, temp_s0);
    var_v0_2 = temp_s2 & 4;
  }
  if (var_v0_2 != 0)
  {
    func_80171600_overlay_041((((__repair_record_arg0*)arg0)->field_234) + 0x8D0, temp_s0);
    func_80171600_overlay_041((((__repair_record_arg0*)arg0)->field_234) + 0xA48, temp_s0);
    func_80171600_overlay_041((((__repair_record_arg0*)arg0)->field_234) + 0xBC0, temp_s0);
  }
  else
  {
    func_80171660_overlay_041((((__repair_record_arg0*)arg0)->field_234) + 0x8D0, temp_s0);
    func_80171660_overlay_041((((__repair_record_arg0*)arg0)->field_234) + 0xA48, temp_s0);
    func_80171660_overlay_041((((__repair_record_arg0*)arg0)->field_234) + 0xBC0, temp_s0);
  }
  func_80171600_overlay_041((((__repair_record_arg0*)arg0)->field_234) + 0xD38, temp_s0);
  func_80171600_overlay_041((((__repair_record_arg0*)arg0)->field_234) + 0xEB0, temp_s0);
  if (temp_s2 & 8)
  {
    func_80171600_overlay_041((((__repair_record_arg0*)arg0)->field_234) + 0x1028, temp_s0);
    var_v0_3 = temp_s2 & 0x10;
  }
  else
  {
    func_80171660_overlay_041((((__repair_record_arg0*)arg0)->field_234) + 0x1028, temp_s0);
    var_v0_3 = temp_s2 & 0x10;
  }
  if (var_v0_3 != 0)
  {
    func_80171600_overlay_041((((__repair_record_arg0*)arg0)->field_234) + 0x11A0, temp_s0);
  }
  else
  {
    func_80171660_overlay_041((((__repair_record_arg0*)arg0)->field_234) + 0x11A0, temp_s0);
  }
  func_80172C10_overlay_041(arg0);
  func_80172C10_overlay_041(arg0);
  func_80172C10_overlay_041(arg0);
  func_80172CE8_overlay_041(arg0, (func_80033634_ovl_01() & 3) | 8);
  func_80035AAC_ovl_01_108(arg0);
  func_80172768_overlay_041(arg0, 7, 1);
}

