void func_80170234_overlay_055(void *arg0, void *arg1, s32 arg2)
{
  s32 *new_var4;
  u16 *new_var3;
  s32 *new_var;
  void *temp_v0;
  u16 *new_var2;
  new_var = &(*((s32 *) (((char *) arg0) + 0x234)));
  new_var3 = (u16 *) (((char *) arg1) + 2);
  new_var4 = new_var;
  temp_v0 = (arg2 * 0x178) + (*new_var4);
  new_var2 = (u16 *) (((char *) temp_v0) + 0x4E);
  *((u16 *) (((char *) arg1) + 0)) = (u16) (*new_var2);
  *new_var3 = (u16) (*((u16 *) (((char *) temp_v0) + 0x52)));
  *((u16 *) (((char *) arg1) + 4)) = (u16) (*((u16 *) (((char *) temp_v0) + 0x56)));
}

