s32 func_80004CFC(s32, s32, s32, s32 *);
s32 func_800269B8_ovl_01(s32);
s32 func_8002751C_ovl_01(s32, s32);
s32 func_80042910_ovl_01(s32);
s32 func_800479F8_ovl_01(s32, s32 *, s32, s32);
s32 func_80052BEC_ovl_01(s32, s32);
s32 func_80076344_ovl_01(s32);
s32 func_80077460_ovl_01(s32, s32);
s32 func_80170074_overlay_007(s32 *);
extern s32 D_800C5278;
extern s32 D_800C7650;
extern s32 D_800E8AD0;
extern s32 D_800E9118;
extern s32 D_80171CB8_overlay_007;
extern s32 D_80171CD4_overlay_007;
extern s32 D_80171CF0_overlay_007;
extern s32 D_80171D0C_overlay_007;
extern s8 D_80171D29_overlay_007;
extern s8 D_80171D2A_overlay_007;
extern s8 D_80171D2B_overlay_007;
extern s16 D_80171D2C_overlay_007;
extern s8 D_80171D2E_overlay_007;
extern s8 D_80171D2F_overlay_007;
extern s8 D_80171D30_overlay_007;
extern s32 D_80171D38_overlay_007;
extern s32 D_80171D3C_overlay_007;
extern s16 D_80171D44_overlay_007;
extern s32 D_80171D48_overlay_007;
extern s32 D_80171DD0_overlay_007;
void func_8016E850_ovl_07(void)
{
  s32 *var_a0;
  s32 *var_a1;
  s32 temp_a0;
  s32 temp_a0_2;
  s32 temp_a0_4;
  s32 temp_a0_5;
  s32 temp_a1;
  s32 temp_v0;
  s32 temp_v0_2;
  void *temp_a2;
  func_800269B8_ovl_01(0);
  func_80077460_ovl_01(0xB4, 0x18);
  *((s32 *) (((char *) (&D_800C7650)) + 0x19A5C)) = (s32) ((*((s32 *) (((char *) (&D_800C7650)) + 0x19A5C))) & (~0x10));
  do
  {
    func_8002751C_ovl_01(2, 1);
  }
  while (0);
  *((s8 *) (((char *) (&D_800E9118)) + 0xF)) = 0;
  func_80052BEC_ovl_01(0xF01C, 0x803);
  func_80042910_ovl_01(0xC8);
  *((s8 *) (((char *) (&D_800E9118)) + 0xE)) = 0;
  D_80171D2A_overlay_007 = 0;
  temp_a0 = (D_800C5278 + 0x10007) & (~7);
  *((s32 *) (((char *) (&D_800C7650)) + 0x18284)) = temp_a0;
  temp_a0_2 = (func_800479F8_ovl_01(temp_a0, &D_80171CB8_overlay_007, 0x15BE, 1) + 7) & (~7);
  *((s32 *) (((char *) (&D_800C7650)) + 0x18284)) = temp_a0_2;
  temp_a0 = (func_800479F8_ovl_01(temp_a0_2, &D_80171CD4_overlay_007, 0x15BF, 1) + 7) & (~7);
  *((s32 *) (((char *) (&D_800C7650)) + 0x18284)) = temp_a0;
  temp_a0_4 = (func_800479F8_ovl_01(temp_a0, &D_80171CF0_overlay_007, 0x15C0, 1) + 7) & (~7);
  *((s32 *) (((char *) (&D_800C7650)) + 0x18284)) = temp_a0_4;
  temp_v0 = (func_800479F8_ovl_01(temp_a0_4, &D_80171D0C_overlay_007, 0x15C1, 1) + 7) & (~7);
  ;
  *((s32 *) (((char *) (&D_800C7650)) + 0x18284)) = temp_v0;
  *((s32 *) (((char *) (&D_800C7650)) + 0x18284)) = (temp_v0 + 7) & (~7);
  *((s8 *) (((char *) (&D_800C7650)) + 0x19A75)) = 0x10;
  *((s8 *) (((char *) (&D_800C7650)) + 0x19A74)) = 8;
  *((s32 *) (((char *) (&D_80171D0C_overlay_007)) + 0x18)) = (s32) (*((s32 *) (((char *) (&D_80171CB8_overlay_007)) + 0x18)));
  *((s32 *) (((char *) (&D_80171CF0_overlay_007)) + 0x18)) = (s32) (*((s32 *) (((char *) (&D_80171CB8_overlay_007)) + 0x18)));
  *((s32 *) (((char *) (&D_80171CD4_overlay_007)) + 0x18)) = (s32) (*((s32 *) (((char *) (&D_80171CB8_overlay_007)) + 0x18)));
  temp_v0_2 = func_80004CFC(0x758, temp_a1, 1, "ROOM800_SND_LD");
  *((s8 *) (((char *) (&D_80171D48_overlay_007)) + 6)) = 0;
  *((s32 **) (((char *) (&D_800C7650)) + 0x1827C)) = &D_80171D48_overlay_007;
  *((s32 *) (((char *) (&D_80171D48_overlay_007)) + 8)) = (s32) (*((s32 *) (((char *) (&D_800C7650)) + 0x18284)));
  temp_a0_5 = (*((s32 *) (((char *) (&D_800C7650)) + 0x18284))) + temp_v0_2;
  *((s32 *) (((char *) (&D_800C7650)) + 0x18284)) = temp_a0_5;
  func_80076344_ovl_01(temp_a0_5);
  D_80171D29_overlay_007 = 1;
  if ((*((s32 *) (((char *) (&D_800C7650)) + 0x19A5C))) & 0x02000000)
  {
    D_80171D2B_overlay_007 = 0x11;
  }
  else
  {
    D_80171D2B_overlay_007 = 0;
  }
  var_a1 = &D_80171DD0_overlay_007;
  var_a0 = &D_800E8AD0;
  temp_a2 = (char *)((&D_800E8AD0)); temp_a2 += (s32)(0x4E0);
  D_80171D38_overlay_007 = 0;
  D_80171D44_overlay_007 = 0x2000;
  D_80171D3C_overlay_007 = 0;
  do
  {
    *((s32 *) (((char *) var_a1) + 0)) = (s32) (*((s32 *) (((char *) var_a0) + 0)));
    *((s32 *) (((char *) var_a1) + 4)) = (s32) (*((s32 *) (((char *) var_a0) + 4)));
    *((s32 *) (((char *) var_a1) + 8)) = (s32) (*((s32 *) (((char *) var_a0) + 8)));
    *((s32 *) (((char *) var_a1) + 0xC)) = (s32) (*((s32 *) (((char *) var_a0) + 0xC)));
    var_a0 += 0x10;
    var_a1 += 0x10;
  }
  while (var_a0 != temp_a2);
  D_80171D2C_overlay_007 = 0;
  D_80171D2E_overlay_007 = 0;
  D_80171D2F_overlay_007 = 0;
  *((s32 *) (((char *) var_a1) + 0)) = (s32) (*((s32 *) (((char *) var_a0) + 0)));
  *((s32 *) (((char *) var_a1) + 4)) = (s32) (*((s32 *) (((char *) var_a0) + 4)));
  *((s32 *) (((char *) var_a1) + 8)) = (s32) (*((s32 *) (((char *) var_a0) + 8)));
  D_80171D30_overlay_007 = 0;
  func_80170074_overlay_007(var_a0);
var_a0 = 0;
}

