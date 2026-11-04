extern s32 D_800C7650_ovl_01;
extern s32 D_800E10D0_ovl_01;
void func_80166A48_ovl_12(s32 arg0, s32 arg1)
{
  char *new_var2;
  s32 *var_a0;
  u8 *new_var;
  if (arg0 != 0)
  {
    new_var = (char *) (&D_800C7650_ovl_01);
    var_a0 = *((s32 **) (new_var + 0x19D3C));
  }
  else
  {
 do { } while (0);
    var_a0 = &D_800E10D0_ovl_01;
  }
  new_var = &(*((u8 *) (((char *) var_a0) + 0x26F)));
  new_var2 = (char *) var_a0;
  *((s8 *) (new_var2 + 4)) = 2;
  *((s8 *) (((char *) var_a0) + 5)) = (s8) (arg1 + 2);
  *((s8 *) (new_var2 + 6)) = 0;
  *((s8 *) (new_var2 + 7)) = 0;
  *((u8 *) (new_var2 + 0x26F)) = (u8) ((*new_var) | 0x80);
}
