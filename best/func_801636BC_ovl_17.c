s32 func_80032B8C_ovl_01();
u16 func_80032EA4_ovl_01();
s32 func_80089D34_ovl_01();
s32 func_80166978_overlay_017();
s32 func_801678B8_overlay_017();
extern u16 D_80167D72_overlay_017;
void func_801636BC_ovl_17(void *arg0, s32 arg1, s32 arg2)
{
  void *temp_a2;
  u16 new_var;
  temp_a2 = *((void **) (((char *) arg0) + 0x2DC));
  if ((*((u8 *) (((char *) arg0) + 6))) == 0)
  {
    *((s32 *) (((char *) arg0) + 0x1E8)) = 0x02000300;
    *((u8 *) (((char *) arg0) + 6)) = 1U;
    *((u16 *) (((char *) arg0) + 0x1F4)) = 0x3CU;
    *((u16 *) (((char *) arg0) + 0x1F6)) = func_80032EA4_ovl_01(arg0, *((s32 *) (((char *) temp_a2) + 0x28)), *((s32 *) (((char *) temp_a2) + 0x30)), 0x40);
  }
  *((u16 *) (((char *) arg0) + 0x66)) += *((u16 *) (((char *) arg0) + 0x1F6));
  func_80089D34_ovl_01(arg0, arg1, arg2, 0x400);
  func_801678B8_overlay_017(arg0);
  func_80166978_overlay_017(arg0);
  new_var = D_80167D72_overlay_017;
  arg2 = (*((u16 *) (((char *) arg0) + 0x1F4))) - 1;
  *((u16 *) (((char *) arg0) + 0x1F4)) = arg2;
  *((u16 *) (((char *) arg0) + 0x1E0)) += new_var;
  if ((arg2 << 0x10) == 0)
  {
    *((s32 *) (((char *) arg0) + 4)) = 0x01000000;
  }
  if (!((*((s32 *) (((char *) arg0) + 0x1AC))) & 1))
  {
    func_80032B8C_ovl_01(arg0, *((s16 *) (((char *) arg0) + 0x2B6)));
  }
}

