s32 func_80033634_ovl_01();
s32 func_80089D34_ovl_01();
s32 func_801661C8_overlay_017();
s32 func_80166FBC_overlay_017();
s32 func_80167608_overlay_017();
void func_8016606C_ovl_17(void *arg0, s32 arg1, s32 arg2)
{
  *((s8 *) (((char *) arg0) + 6)) = 1;
  *((s16 *) (((char *) arg0) + 0x1F4)) = 0x800;
  *((s32 *) (((char *) arg0) + 0x1E8)) = 0x01090000;
  func_80089D34_ovl_01(arg0, arg1, arg2, 0x400);
  *((s8 *) (((char *) arg0) + 0x2BF)) = 1;
  *((s16 *) (((char *) arg0) + 0x2B6)) = 0;
  *((s16 *) (((char *) arg0) + 0x1E0)) = 0x1E0;
  *((s16 *) (((char *) arg0) + 0x1E2)) = 0;
  *((s16 *) (((char *) arg0) + 0x1E4)) = 0;
  if ((*((u8 *) (((char *) arg0) + 0x2CC))) & 1)
  {
    *((s16 *) (((char *) arg0) + 0x1F4)) = 0;
    *((s16 *) (((char *) arg0) + 0x1F6)) = (s16) (((*((u8 *) (((char *) arg0) + 0x2CC))) << 0xA) - (*((u16 *) (((char *) arg0) + 0x66))));
  }
  else
  {
 do { *((s16 *) (((char *) arg0) + 0x1F4)) = (s16) (-((s16) (*((u16 *) (((char *) arg0) + 0x64))))); *((s16 *) (((char *) arg0) + 0x1F6)) = 0; } while (0);
  }
  func_801661C8_overlay_017(arg0);
  func_80166FBC_overlay_017(arg0, 0x13, 1);
  func_80167608_overlay_017(arg0, 0x2004, (func_80033634_ovl_01() & 3) + 6);
}
