extern u8 D_800C7650_ovl_01[];
extern u8 func_801656D4_ovl_23[];
extern u16 D_801660AC_ovl_23;
extern u16 D_801660AE_ovl_23;
s32 func_80089D34_ovl_01();
void func_80163440_ovl_23(u8 *arg0, s32 arg1, s32 arg2)
{
  u8 *new_var[2];
  s32 temp;
  s32 v;
  s32 zero = 0;
  new_var[1] = D_800C7650_ovl_01 + 0x18000;
  *((u8 **) (new_var[1] + 0x304)) = func_801656D4_ovl_23;
  *((s32 *) (arg0 + 4)) = 0x1080000;
  *((s32 *) (arg0 + 0x1e8)) = zero;
  func_80089D34_ovl_01(arg0, arg1, arg2, 0x1000);
  arg0[0x25d] = 5;
  temp = *((s32 *) new_var[0]);
  *((s16 *) (arg0 + 0x26c)) = zero;
  *((s16 *) (arg0 + 0x268)) = zero;
  *((s16 *) (arg0 + 0x264)) = zero;
  *((s32 *) arg0) = temp | 0x1c000000;
  if ((*((s32 *) (new_var[1] + 0x1a3c))) & 0x20)
  {
    v = D_801660AC_ovl_23 + 0x4e20;
  }
  else
  {
    v = 0x4e20;
    v = D_801660AE_ovl_23 + v;
  }
  *((s16 *) (arg0 + 0x1f2)) = v;
  *((s16 *) (arg0 + 0x2b8)) = 2;
  *((s32 *) (arg0 + 0x284)) = 1;
  *((s16 *) (arg0 + 0x134)) = -0x708;
  *((s16 *) (arg0 + 0x13a)) = 0x708;
  *((s16 *) (arg0 + 0x12c)) = 1000;
  *((s16 *) (arg0 + 0x136)) = 1000;
  *((s16 *) (arg0 + 0x12e)) = 1000;
  *((s16 *) (arg0 + 0x138)) = 1000;
  arg0[0x2ba] = zero;
  arg0[0x2c4] = zero;
  arg0[0x2c5] = zero;
  *((s32 *) (arg0 + 0x2bc)) = zero;
  *((s32 *) (arg0 + 0x2c0)) = zero;
  arg0[0x2c6] = zero;
  *((s16 *) (arg0 + 0x2d0)) = zero;
  arg0[0x2d2] = zero;
  *((s16 *) (arg0 + 0x270)) = zero;
  *((s16 *) (arg0 + 0x272)) = zero;
  *((s16 *) (arg0 + 0x274)) = zero;
  *((s16 *) (arg0 + 0x276)) = zero;
  *((s16 *) (arg0 + 0x130)) = zero;
  *((s16 *) (arg0 + 0x132)) = zero;
  *((s16 *) (arg0 + 0x28a)) = 0x320;
  func_80162E5C_ovl_23(arg0);
  func_80033A0C_ovl_01(arg0 + 0x208, 0, 0x2ee0226, 0, arg0 + 0x28);
}

