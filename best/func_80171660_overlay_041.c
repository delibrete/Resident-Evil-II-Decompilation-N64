s32 func_80033634_ovl_01();
extern s32 D_800C7650;
void func_80171660_overlay_041(void *arg0, s32 arg1)
{
  s8 *new_var;
  unsigned short new_var2;
  new_var2 = (s32) ((*((s32 *) (((char *) arg0) + 0))) | 0x1062);
  if ((*((u8 *) (((char *) (&D_800C7650)) + 0x21962))) & 8)
  {
    *((s32 *) (((char *) arg0) + 0)) = new_var2;
  }
  else
  {
    *((s32 *) (((char *) arg0) + 0)) = 0;
  }
  *((s16 *) (((char *) arg0) + 0x28)) = (s16) (((func_80033634_ovl_01() & 0xFF) * 4) + arg1);
  *((s16 *) (((char *) arg0) + 0x11E)) = 0;
  *((s16 *) (((char *) arg0) + 0x2C)) = (s16) ((func_80033634_ovl_01() & 0x7F) + 0x64);
  ;
  *((s16 *) (((char *) arg0) + 0x2A)) = 0;
  *((s8 *) (((char *) arg0) + 0x111)) = 0x14;
  *((s16 *) (((char *) arg0) + 0x2E)) = 0;
  *((s16 *) (((char *) arg0) + 0x30)) = (s16) ((func_80033634_ovl_01() & 0xFF) * 0x10);
  *((s16 *) (((char *) arg0) + 0x32)) = 0;
}

