s16 func_80032D44_ovl_01(s16, s16, s16, s16);
s32 func_80032F24_ovl_01(void *, s16, s32);
s32 func_80036C98(void *, s32, s32, s32);
extern s32 D_800C7650;
void func_80171078_overlay_051(void *arg0)
{
  char *new_var2;
  s16 temp_s2;
  char *new_var;
  new_var2 = (char *) (&D_800C7650);
  temp_s2 = func_80032D44_ovl_01(*((s16 *) (((char *) (&D_800C7650)) + 0x19AAA)), *((s16 *) (new_var2 + 0x19AB2)), *((s16 *) (((char *) arg0) + 0x2A)), *((s16 *) (((char *) arg0) + 0x32)));
  if ((*((u8 *) (arg0 + 6))) == 0)
  {
    new_var = ((char *) (&D_800C7650)) + 0x18538;
    if ((*((u8 *) new_var)) != 0)
    {
      func_80036C98(arg0, 1, 3, 0);
    }
    func_80032F24_ovl_01(arg0, temp_s2, 8);
  }
}

