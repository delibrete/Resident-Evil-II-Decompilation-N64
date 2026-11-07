extern int D_800E10F8;
extern int D_800E1100;
s32 func_80032EA4_ovl_01();
s32 func_800334F8_ovl_01();
s32 func_80033634_ovl_01();
s32 func_80089D34_ovl_01();
extern char D_800C7650[];
void func_8016FE18_overlay_058(void *arg0, s32 arg1, s32 arg2)
{
  int new_var2;
  void *temp_s1;
  char *new_var3;
  char *new_var;
  *((s8 *) (((char *) arg0) + 6)) = 1;
  new_var3 = (char *) arg0;
  new_var2 = (*((u8 *) (new_var3 + 7))) == 0;
  temp_s1 = (char *) arg0;
  temp_s1 += (s32) 0x2B4;
  if (new_var2)
  {
    if (func_80032EA4_ovl_01(arg0, D_800E10F8, D_800E1100, 1) >= 0)
    {
      *((s16 *) (((char *) temp_s1) + 2)) = 0;
    }
    else
    {
      *((s16 *) (((char *) temp_s1) + 2)) = 1;
    }
    new_var2 = 0xF;
    *((s16 *) (((char *) arg0) + 0x1F6)) = (s16) ((1 << (func_80033634_ovl_01() & new_var2)) & 0x5A0);
  }
  *((s32 *) (new_var3 + 0x1E8)) = (s32) ((((*((s16 *) (((char *) temp_s1) + 2))) + 7) << 0x18) + 0xF00);
  func_800334F8_ovl_01(arg0, arg1, arg2, 0);
  func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
  *((s8 *) (((char *) arg0) + 0x206)) = 0;
  *((s8 *) (new_var3 + 0x207)) = 0;
  new_var = (char *) arg0;
  *((u8 *) (new_var + 0x25C)) = (*((u8 *) (new_var + 0x25C))) | 1;
  *(((char *) temp_s1) + 0x19) = 0;
}

