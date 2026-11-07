s32 func_80032B8C_ovl_01();
s32 func_800334F8_ovl_01();
s32 func_80089D34_ovl_01();
void func_80175200_overlay_039(void *arg0, s32 arg1, s32 arg2)
{
  s16 *new_var;
  u8 temp_v1;
  temp_v1 = *((u8 *) (((char *) arg0) + 6));
  switch (temp_v1)
  {
    temp_v1 = 4;
    case 0:
      new_var = (s16 *) (((char *) arg0) + 0x1F6);
 do { *new_var = 0xA; *((u8 *) (((char *) arg0) + 6)) = 1U; } while (0);
      *((s32 *) (((char *) arg0) + 0x1E8)) = (s32) (((temp_v1 - (((*((u16 *) (((char *) arg0) + 0x26C))) & 0x20) != 0)) << 0x18) + 0x300);

    case 1:
      func_800334F8_ovl_01(arg0, arg1, arg2, 0);
      *((u8 *) (((char *) arg0) + 6)) += func_80089D34_ovl_01(arg0, arg1, arg2, 0x400);
      func_80032B8C_ovl_01(arg0);
      return;

    case 2:
      *((s32 *) (((char *) arg0) + temp_v1)) = 0x01010000;
      return;

  }

}
