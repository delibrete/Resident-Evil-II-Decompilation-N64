s32 func_80032B8C_ovl_01(s32 *, s32);
s16 func_80032D44_ovl_01(s16, s16, s16, s16);
s32 func_80032EA4_ovl_01(s32 *, s32, s32, s32);
s32 func_80077D48_ovl_01(s32, void *);
s32 func_80089D34_ovl_01(void *, s32, s32, s32);
extern s32 D_800C7650;
extern s32 D_800E10D0;
void func_80170580_overlay_054(void *arg0, s32 arg1, s32 arg2)
{
  s32 temp_a2;
  s32 temp_v0;
  char *new_var2;
  char *new_var;
  s32 var_s2;
  s32 *new_var4;
  char *new_var3;
  s32 var_v0;
  var_s2 = 0;
  new_var = (new_var2 = (char *) arg0);
  if ((*((u8 *) (new_var2 + 7))) == 0)
  {
    *((u8 *) (new_var2 + 7)) = 1U;
    *((s8 *) (new_var2 + 0x2C1)) = 5;
    *((s8 *) (new_var2 + 0x2C3)) = 3;
    *((s32 *) (new_var2 + 0)) = (s32) ((*((s32 *) (new_var2 + 0))) | 2);
    *((u8 *) (new_var2 + 0x25C)) = (u8) ((*((u8 *) (new_var2 + 0x25C))) | 2);
    *((s32 *) (new_var2 + 0x1E8)) = (s32) (((*((u8 *) (new_var2 + 0x2CD))) * 0x0D000000) + 0x3F00);
    *((u16 *) (((char *) (&D_800C7650)) + 0x19A78)) = (u16) ((*((u16 *) (((char *) (&D_800C7650)) + 0x19A78))) | 0x40);
    *((s32 *) (new_var2 + 0)) = (s32) ((*((s32 *) (new_var2 + 0))) & (~4));
    new_var4 = &D_800E10D0;
    *((void **) (((char *) (&D_800E10D0)) + 0x250)) = arg0;
    *((s32 *) (((char *) new_var4) + 4)) = 0x06000000;
    *((s32 *) (((char *) new_var4) + 0x224)) = (s32) (*((s32 *) (new_var2 + 0x224)));
    temp_a2 = *((s32 *) (new_var2 + 0x228));
    *((u8 *) (((char *) (&D_800E10D0)) + 0x26F)) = (u8) ((*((u8 *) (((char *) (&D_800E10D0)) + 0x26F))) | 0x80);
    *((s32 *) (new_var3 = ((char *) new_var4) + 0)) = (s32) ((*((s32 *) new_var3)) | 0x42);
    *((s16 *) (((char *) (&D_800E10D0)) + 0x1E0)) = 0x64;
    *((s16 *) (((char *) (&D_800E10D0)) + 0x1E4)) = 0;
    *((s32 *) (((char *) new_var4) + 0x228)) = temp_a2;
    func_80077D48_ovl_01(0xC, arg0);
  }
  func_80089D34_ovl_01(arg0, arg1, arg2, 0x40);
  temp_v0 = func_80032EA4_ovl_01(&D_800E10D0, *((s32 *) (new_var2 + 0x28)), *((s32 *) (new_var2 + 0x30)), 0x100);
  if ((temp_v0 << 0x10) != 0)
  {
    *((u16 *) (((char *) new_var4) + 0x66)) = (u16) ((*((u16 *) (((char *) (&D_800E10D0)) + 0x66))) + temp_v0);
  }
  else
  {
    var_s2 = 1;
  }
  if (((u32) (*((u32 *) (new_var2 + 0x28C)))) >= 0x5DDU)
  {
    func_80032B8C_ovl_01(new_var4, func_80032D44_ovl_01(*((s16 *) (((char *) (&D_800E10D0)) + 0x2A)), *((s16 *) (((char *) new_var4) + 0x32)), *((s16 *) (new_var2 + 0x2A)), *((s16 *) (new_var2 + 0x32))) - ((s16) (*((u16 *) (((char *) (&D_800E10D0)) + 0x66)))));
    var_v0 = var_s2 << 0x10;
  }
  else
  {
    var_v0 = (var_s2 | 2) << 0x10;
  }
  if ((var_v0 >> 0x10) == 3)
  {
    *((s16 *) (new_var2 + 6)) = 0x100;
    *((s8 *) (new_var2 + 0x2C3)) = 0xFF;
  }
}

