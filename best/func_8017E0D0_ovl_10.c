s32 func_8003997C_ovl_01(s32, s32, s32);
s32 func_800479F8_ovl_01(s32, s32 *, s32, s32);
s32 func_8017E18C_ovl_10(s32);
extern s32 D_800C527C_ovl_01;
extern s32 D_800C7650_ovl_01;
extern s8 D_8017E6B4_ovl_10;
extern s32 D_8017E864_ovl_10;
void func_8017E0D0_ovl_10(void)
{
  char *new_var;
  s32 temp_a0;
  if (((!((*((s32 *) ((new_var = (char *) (&D_800C7650_ovl_01)) + 0x19A3C))) & 0x100)) && ((long) ((*((s32 *) (((char *) (&D_800C7650_ovl_01)) + 0x19A5C))) & 0x10000000))) && ((*((u8 *) (((char *) (*((void **) (new_var + 0x19D3C)))) + 4))) == 3))
  {
    D_8017E6B4_ovl_10 = 1;
  }
  do
  {
    func_800479F8_ovl_01(D_800C527C_ovl_01 + 0x3B800, &D_8017E864_ovl_10, 0x14CF, 0);
  }
  while (0);
  temp_a0 = (*((s32 *) (((char *) (&D_8017E864_ovl_10)) + 0x18))) - -0x200;
  func_8003997C_ovl_01(temp_a0, temp_a0, 0x100);
  func_8017E18C_ovl_10(0xC68);
}

