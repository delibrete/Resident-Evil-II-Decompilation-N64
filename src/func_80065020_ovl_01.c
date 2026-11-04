s32 func_8004CDB8_ovl_01(s32);
s32 func_8009BE50_ovl_01();
extern s32 D_800C5278_ovl_01;
extern s32 D_800C7650_ovl_01;
void func_80065020_ovl_01(void)
{
  char *new_var;
  func_8009BE50_ovl_01();
  new_var = (char *) (&D_800C7650_ovl_01);
  *((s32 *) (new_var + 0x18280)) = (s32) D_800C5278_ovl_01;
  func_8004CDB8_ovl_01(1);
}

