extern s32 D_800C7650;
extern s32 D_800E10D0;
void func_8016F9F4_overlay_064(s32 arg0, s8 arg1)
{
  s32 **new_var3;
  s32 *var_a0;
  short new_var;
  int new_var2;
  new_var2 = 0x19D3C;
  if (arg0 != 0)
  {
    new_var3 = (s32 **) (((char *) (&D_800C7650)) + new_var2);
    var_a0 = *new_var3;
  }
  else
  {
    var_a0 = &D_800E10D0;
  }
  *((s8 *) (((char *) var_a0) + 4)) = 2;
  *((s8 *) (((char *) var_a0) + 5)) = arg1;
  *((s8 *) (((char *) var_a0) + 6)) = 0;
  *((s8 *) (((char *) var_a0) + 7)) = 0;
  new_var = *((u8 *) (((char *) var_a0) + 0x26F));
  *((u8 *) (((char *) var_a0) + 0x26F)) = (u8) (new_var | 0x80);
}

