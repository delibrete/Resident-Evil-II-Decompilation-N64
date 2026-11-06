extern unsigned short D_800E10C8;
s32 func_80032B8C_ovl_01();
s32 func_800334F8_ovl_01();
s32 func_80089D34_ovl_01();
s32 func_8016FAA8_overlay_054();
extern char D_800C7650[];
typedef struct { int field_0; unsigned char pad_4[3]; unsigned char field_7; unsigned char pad_8[480]; int field_1E8; unsigned char pad_1EC[112]; unsigned char field_25C; unsigned char pad_25D[112]; unsigned char field_2CD; } __repair_record_arg0;
void func_8016F970_overlay_054(void *arg0, s32 arg1, s32 arg2)
{
  char *new_var;
  if ((((__repair_record_arg0*)arg0)->field_7) == 0)
  {
    ((__repair_record_arg0*)arg0)->field_7 = 1U;
    ((__repair_record_arg0*)arg0)->field_25C |= 2;
    ((__repair_record_arg0*)arg0)->field_1E8 = (s32) (((((((__repair_record_arg0*)arg0)->field_2CD) * 0xD) + 7) << 0x18) + 0x3F00);
    func_800334F8_ovl_01(arg0, arg1, arg2);
    func_80089D34_ovl_01(arg0, arg1, arg2, 0x40);
    D_800E10C8 = (u16) (D_800E10C8 & 0xFFBF);
    ((__repair_record_arg0*)arg0)->field_0 &= ~4;
    *((s8 *) (((char *) (arg0 + 0x2B4)) + 2)) = 1;
    goto block_5;
  }
  func_800334F8_ovl_01(arg0, arg1, arg2, 0);
  if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x40) != 0)
  {
    func_8016FAA8_overlay_054(arg0);
    return;
  }
  new_var = (char *) arg0;
  func_80032B8C_ovl_01(arg0);
  block_5:
  *((u16 *) (new_var + 0x130)) -= *((u16 *) (new_var + 0x1E0));

}

