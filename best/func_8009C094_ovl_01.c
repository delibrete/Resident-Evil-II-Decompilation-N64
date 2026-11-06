s32 func_80006F60(s32 *, s32 *, s32);
s32 func_80007320(s32 *, s32);
s32 func_8000C9E0(s32 *, s32 *, int);
s32 func_8000CD40(s32);
s32 func_8009C1B0_ovl_01(s32 *);
extern s32 D_801320E0_ovl_01;
extern s32 D_801320F8_ovl_01;
extern s32 D_801320FC_ovl_01;
s32 func_8009C094_ovl_01(s32 *arg0)
{
  volatile short sp10;
  volatile unsigned int sp12;
  s32 *sp14;
  s32 new_var[2];
  s32 new_var2;
  s32 sp20;
  s32 temp_s0;
  *arg0 = 0x42494F32;
  func_8009C1B0_ovl_01(&D_801320FC_ovl_01);
  temp_s0 = func_8000CD40(1);
  func_80007320(arg0, 0x8000);
  {
    func_8000CD40(temp_s0);
  }
  sp12 = 0;
  sp14 = &D_801320E0_ovl_01;
  sp14 = arg0;
  new_var[1] = 0x08000000;
  sp20 = 0x8000;
  func_80006F60(&D_801320FC_ovl_01, &sp10, 1);
  func_8000C9E0(&D_801320E0_ovl_01, &D_801320F8_ovl_01, 1);
  sp12 = 0;
  sp14 = &D_801320E0_ovl_01;
  sp14 = arg0;
  new_var[1] = 0x08000000;
  sp20 = 0x8000;
  func_80006F60(&D_801320FC_ovl_01, &sp10, 0);
  func_8000C9E0(&D_801320E0_ovl_01, &D_801320F8_ovl_01, 1);
  new_var2 = *arg0;
  new_var[0] = -2;
  if (new_var2 == 0x42494F32)
  {
    new_var[0] = 0;
  }
  return new_var[0];
}

