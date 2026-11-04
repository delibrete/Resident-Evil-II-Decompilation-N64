s32 func_8016281C_ovl_27(void *, s32, s32);
extern s32 D_800E8CA0_ovl_01;
extern u32 D_80163CD0_ovl_27;
void func_80163458_ovl_27(void *arg0, s32 arg1, s32 arg2)
{
  if (1)
  {
    if (((u32) D_80163CD0_ovl_27) < 4U)
    {
      D_80163CD0_ovl_27 += 1;
      func_80083788_ovl_01(&D_800E8CA0_ovl_01, 0x14U);
    }
    else
    {
    }
    *((s16 *) (((char *) arg0) + 0x1F2)) = 1;
  }
  *((s32 *) (((char *) arg0) + 4)) = (s32) ((((*((u8 *) (((char *) arg0) + 0x2C9))) << 8) + ((*((u8 *) (((char *) arg0) + 0x2CA))) + 0x90000)) + 0x01000000);
  func_8016281C_ovl_27(arg0, arg1, arg2);
}

