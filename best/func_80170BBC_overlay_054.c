s32 func_80033634_ovl_01();
s32 func_80089D34_ovl_01(void *, s32, s32, s32);
s32 func_801736A8_overlay_054(void *, s32, s32);
extern s32 D_800C7650;
void func_80170BBC_overlay_054(void *arg0, s32 arg1, s32 arg2)
{
  short new_var;
  void *temp_s1;
  temp_s1 = arg0 + 0x2B4;
  if ((*((u8 *) (((char *) arg0) + 6))) == 0)
  {
    *((u8 *) (((char *) arg0) + 6)) = 1U;
    *((s32 *) (((char *) arg0) + 0x1E8)) = (s32) (((*((u8 *) (((char *) arg0) + 0x2CD))) * 0x0D000000) + 0x3F00);
    *((u8 *) (((char *) arg0) + 0x25C)) = (u8) ((*((u8 *) (((char *) arg0) + 0x25C))) | 2);
    *((s8 *) (((char *) temp_s1) + 0x12)) = 1;
    *((u8 *) (((char *) temp_s1) + 0x13)) = 0U;
    *((s8 *) (((char *) temp_s1) + 0x14)) = 8;
    *((u16 *) (((char *) (&D_800C7650)) + 0x19A78)) = (u16) ((*((u16 *) (((char *) (&D_800C7650)) + 0x19A78))) & 0xFFBF);
    *((s8 *) (((char *) temp_s1) + 2)) = 0;
  }
  else
  {
    if (!(func_80033634_ovl_01() & 7))
    {
      func_801736A8_overlay_054(arg0, (((func_80033634_ovl_01() & 0xFF) % 3) + 0xB) & 0xFF, 4);
    }
    if ((*((u8 *) (((char *) temp_s1) + 0x13))) != 0)
    {
      *((s32 *) (((char *) arg0) + 4)) = 0x01010000;
      *((u8 *) (((char *) arg0) + 0x26F)) = (u8) ((*((u8 *) (((char *) arg0) + 0x26F))) & 0x7F);
    }
  }
  if (temp_s1)
  {
    new_var = 0x40;
    func_80089D34_ovl_01(arg0, arg1, arg2, new_var);
  }
  else
  {
    new_var = 0x40;
    func_80089D34_ovl_01(arg0, arg1, arg2, new_var);
  }
}

