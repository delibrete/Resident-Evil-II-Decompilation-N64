extern s32 D_801477E8;
extern s32 D_80147F40;
extern s32 D_80147F44;
extern u8 D_801362B0_ovl_01;
extern u8 D_80147A40[];
extern s32 D_80143FB0[];
void func_800A6BA4_ovl_01(void);
void func_800A8410_ovl_01(void);
s32 func_800A8304_ovl_01(s32 arg0);
void func_800A82CC_ovl_01(s32 arg0, u8 arg1)
{
  unsigned long long new_var;
  if (D_801362B0_ovl_01 != 0)
  {
    new_var = (s32) D_80147A40;
    *((u8 *) ((((arg0 & 0xFF) * 0x28) + new_var) + 0x14)) = arg1;
  }
}

void func_800A8278_ovl_01(s32 arg0, s32 arg1);
