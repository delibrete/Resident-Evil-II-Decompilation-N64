s32 func_8004CCD8_ovl_01(s32, s32);
s32 func_8004CDB8_ovl_01(s32);
s32 func_8015B204_ovl_03(s32);
extern s32 D_800C41B0;
extern s8 D_800E5D3F;
extern s8 D_80160B9C_overlay_003;
void func_8015D664_ovl_03(void)
{
  s32 *new_var2;
  s32 *new_var4;
  char *new_var;
  char *new_var3;
  new_var3 = ((char *) (&D_800C41B0)) + 0x19A3C;
  *((s32 *) new_var3) = (s32) ((*((s32 *) (((char *) (&D_800C41B0)) + 0x19A3C))) | 0x08000000);
  func_8004CCD8_ovl_01(1, 4);
  new_var4 = &D_800C41B0;
  func_8004CDB8_ovl_01(1);
  new_var2 = new_var4;
  D_800E5D3F = 1;
  new_var = (char *) (&D_800C41B0);
  *((s32 *) ((new_var3 = (char *) new_var2) + 0x19A3C)) = (s32) ((*((s32 *) (new_var + 0x19A3C))) & 0xF7FFFFFF);
  func_8015B204_ovl_03(0xF7FFFFFF);
  D_80160B9C_overlay_003 = 1;
}

