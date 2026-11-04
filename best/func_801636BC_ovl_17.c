s32 func_80032B8C_ovl_01();
u16 func_80032EA4_ovl_01();
s32 func_80089D34_ovl_01();
s32 func_80166978_overlay_017();
s32 func_801678B8_overlay_017();
extern u16 D_80167D72_ovl_17;
void func_801636BC_ovl_17(void *arg0, s32 arg1, s32 arg2)
{
  u8 *new_var;
  volatile short new_var5;
  u16 temp_v0;
  char *new_var3;
  int new_var2;
  char *new_var4;
  void *temp_a2;
  temp_a2 = *((void **) (((char *) arg0) + 0x2DC));
  if ((*(new_var = (u8 *) (((char *) arg0) + 6))) == 0)
  {
    *((s32 *) (((char *) arg0) + 0x1E8)) = 0x02000300;
    *((u8 *) (((char *) arg0) + 6)) = 1U;
    *((u16 *) (((char *) arg0) + 0x1F4)) = 0x3CU;
    *((u16 *) (((char *) arg0) + 0x1F6)) = func_80032EA4_ovl_01(arg0, *((s32 *) (((char *) temp_a2) + 0x28)), *((s32 *) (((char *) temp_a2) + 0x30)), 0x40);
  }
  *((u16 *) (((char *) arg0) + 0x66)) = (*((u16 *) (((char *) arg0) + 0x66))) + (*((u16 *) (((char *) arg0) + 0x1F6)));
  func_80089D34_ovl_01(arg0, arg1, arg2, 0x400);
  func_801678B8_overlay_017(arg0);
  func_80166978_overlay_017(arg0);
  temp_v0 = (new_var5 = (*((u16 *) (((char *) arg0) + 0x1F4))) - 1);
  *((u16 *) (((char *) arg0) + 0x1F4)) = temp_v0;
  *((u16 *) (((char *) arg0) + 0x1E0)) += D_80167D72_ovl_17;
  new_var3 = ((char *) arg0) + 4;
  if ((temp_v0 << 0x10) == 0)
  {
    *((s32 *) new_var3) = 0x01000000;
  }
  new_var2 = 1;
  new_var4 = ((char *) arg0) + 0x2B6;
  if (!((*((s32 *) (((char *) arg0) + 0x1AC))) & new_var2))
  {
    func_80032B8C_ovl_01(arg0, *((s16 *) new_var4));
  }
}

