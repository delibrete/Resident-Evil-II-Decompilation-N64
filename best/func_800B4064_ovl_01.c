s32 func_80006D30();
s32 func_80007320();
s32 func_8000CB60();
s32 func_800A93C0_overlay_001();
s32 func_800B48D0_overlay_001();
extern char D_800B3B3C_ovl_01[];
extern s8 D_80136D20_ovl_01;
extern s32 *D_80143F78;
extern u8 D_80143F88;
extern char D_80143F90[];
extern char D_80158AC0[];
extern s32 D_8015AF10;
extern s32 D_8015AF1C;
extern s32 D_8015AF28;
extern s32 D_8015AF30;
extern char D_8015AF40[];
extern char D_8015AF58[];
void func_800B4064_ovl_01(s32 arg0)
{
  char *var_s0;
  char *var_s0_2;
  char *new_var;
  s32 temp_s2;
  s32 temp_v0;
  s32 var_s1;
  s32 var_s1_2;
  var_s1 = 0;
  var_s0 = &D_80158AC0;
  D_8015AF30 = arg0;
  D_8015AF1C = 0;
  do
  {
    func_800B48D0_overlay_001(var_s0, 0, 0, 0, 0);
    if (D_80143F88 != 0)
    {
      *((u8 *) (((char *) var_s0) + 0x11DE)) = (u8) ((*((u8 *) (((char *) var_s0) + 0x11DE))) * 2);
    }
    *((s8 *) (((char *) var_s0) + 0x1200)) = 0;
    do
    {
      var_s1 += 1;
    }
    while (0);
    var_s0 += 0x1228;
  }
  while (var_s1 < 2);
  func_80006D30(&D_8015AF40, &D_8015AF58, 1);
  do
  {
    func_8000CB60(&D_8015AF40, 0, 0);
  }
  while (0);
  new_var = ((char *) (&D_80143F90)) + 0x18;
  temp_v0 = D_8015AF30 & 1;
  if (temp_v0)
  {
    temp_s2 = func_800A93C0_overlay_001(0x10E0);
    var_s1_2 = 0;
    var_s0_2 = &D_8015AF28;
    do
    {
      temp_v0 = (*((s32 (**)(s32, s32)) new_var))(temp_s2, 0);
      var_s1_2 += 1;
      *((s32 *) var_s0_2) = temp_v0;
      func_80007320(temp_v0, temp_s2);
      var_s0_2 += 4;
    }
    while (var_s1_2 < 2);
  }
  D_80143F78 = &D_800B3B3C_ovl_01;
  D_80136D20_ovl_01 = 1;
  D_8015AF10 = 0;
}

