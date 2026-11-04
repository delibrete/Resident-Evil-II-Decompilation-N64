s32 func_80032EA4_ovl_01();
s32 func_800334F8_ovl_01();
s32 func_80033634_ovl_01();
s32 func_80089D34_ovl_01();
extern char D_800C7650_ovl_01[];
void func_80163288_ovl_30(void *arg0, s32 arg1, s32 arg2)
{
  unsigned char new_var;
  s32 *new_var2;
  void *temp_s1;
  *((s8 *) (((char *) arg0) + 6)) = 1;
  new_var2 = (s32 *) (D_800C7650_ovl_01 + 0x19AB0);
  temp_s1 = (char *) arg0;
  temp_s1 += (s32) 0x2B4;
  if ((*((u8 *) (((char *) arg0) + 7))) == 0)
  {
 do { if (func_80032EA4_ovl_01(arg0, *((s32 *) (D_800C7650_ovl_01 + 0x19AA8)), *new_var2, 1) >= 0) { if (1) { } *((s16 *) (((char *) temp_s1) + 2)) = 0; } else { *((s16 *) (((char *) temp_s1) + 2)) = 1; } *((s16 *) (((char *) arg0) + 0x1F6)) = (s16) ((1 << (func_80033634_ovl_01() & 0xF)) & 0x5A0); } while (0);
  }
  *((s32 *) (((char *) arg0) + 0x1E8)) = (s32) ((((*((s16 *) (((char *) temp_s1) + 2))) + 7) << 0x18) - (-0xF00));
  new_var = 0;
  func_800334F8_ovl_01(arg0, arg1, arg2, new_var);
  func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
  *((s8 *) (((char *) arg0) + 0x206)) = new_var;
  *((s8 *) (((char *) arg0) + 0x207)) = new_var;
  *((u8 *) (((char *) arg0) + 0x25C)) |= 1;
  *((s8 *) (((char *) temp_s1) + 0x19)) = new_var;
}
