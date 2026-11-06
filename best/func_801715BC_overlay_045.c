/* identical to func_80164A2C_overlay_017 (matched), with its names changed by decompdecomp */
s32 func_80089D34_ovl_01();
s32 func_801674BC_overlay_017();
void func_801715BC_overlay_045(void *arg0, s32 arg1, s32 arg2)
{
  u8 temp_v1;
 do { } while (0);
  temp_v1 = *((u8 *) (((char *) arg0) + 6));
  switch (temp_v1)
  {
    case 0:
      *((u8 *) (((char *) arg0) + 6)) = 1U;
      *((s32 *) (((char *) arg0) + 0x1E8)) = 0x01000300;
      func_801674BC_overlay_017(arg0);

    case 1:
      *((u8 *) (((char *) arg0) + 6)) += func_80089D34_ovl_01(arg0, arg1, arg2, 0x400);
      return;

    case 2:
      *((s32 *) (((char *) arg0) + 4)) = 0x01090000;
      return;

  }

}
