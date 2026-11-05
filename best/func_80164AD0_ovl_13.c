s32 func_80033634_ovl_01();
extern s32 D_800C7650_ovl_01;
void func_80164AD0_ovl_13(void *arg0, s32 arg1)
{
  s16 *new_var;
  char *new_var2;
  if ((*((u8 *) (((char *) (&D_800C7650_ovl_01)) + 0x21962))) & 8)
  {
    new_var2 = (char *) arg0;
    *((s32 *) (new_var2 + 0)) = (s32) ((*((s32 *) (new_var2 + 0))) | 0x1062);
  }
  else
  {
    *((s32 *) (new_var2 + 0)) = 0;
  }
  *((s16 *) (new_var2 + 0x28)) = (s16) (arg1 + ((func_80033634_ovl_01() & 0xFF) * 4));
  new_var = (s16 *) (new_var2 + 0x11E);
  *new_var = 0;
  *((s16 *) (new_var2 + 0x2C)) = (s16) ((func_80033634_ovl_01() & 0x7F) + 0x64);
  *((s16 *) (new_var2 + 0x2A)) = 0;
  *((s8 *) (new_var2 + 0x111)) = 0x14;
  *((s16 *) (new_var2 + 0x2E)) = 0;
  *((s16 *) (new_var2 + 0x30)) = (s16) ((func_80033634_ovl_01() & 0xFF) * 0x10);
  *((s16 *) (new_var2 + 0x32)) = 0;
}

