extern int (*D_80174A2C_overlay_045[])();
s32 func_80035AAC_ovl_01_108(void *);
s16 func_80074D94_ovl_01(s32, s32);
s32 func_801733C4_overlay_045(void *);
void func_801721E8_overlay_045(void *arg0, s32 arg1, s32 arg2)
{
  int new_var2;
  char *new_var;
  new_var = ((char *) arg0) + 6;
  if ((*((u8 *) new_var)) == 0)
  {
    *((u8 *) (((char *) arg0) + 0x2D8)) = (u8) (*((u8 *) (((char *) arg0) + 5)));
  }
  if ((*((s16 *) (((char *) arg0) + 0x1A8))) == 0)
  {
    *((s16 *) (((char *) arg0) + 0x1A8)) = func_80074D94_ovl_01(*((s32 *) (((char *) arg0) + 0x28)), *((s32 *) (((char *) arg0) + 0x30)));
  }
  new_var2 = 1;
  D_80174A2C_overlay_045[(*((u8 *) (((char *) arg0) + 5))) - new_var2](arg0, arg1, arg2);
  func_801733C4_overlay_045(arg0);
  func_80035AAC_ovl_01_108(arg0);
}

