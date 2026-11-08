/* identical to func_80172A24_overlay_045 (matched), with its names changed by decompdecomp */
s32 func_80033634_ovl_01();
s32 func_80089D34_ovl_01();
s32 func_801661C8_ovl_17();
s32 func_80166FBC_ovl_17();
s32 func_80167608_ovl_17();
void func_80165E94_ovl_17(void *arg0, s32 arg1, s32 arg2)
{
  short temp_v1;
  if ((*((u8 *) (((char *) arg0) + 6))) == 0)
  {
    *((u8 *) (6 + ((char *) arg0))) = 1U;
    *((s8 *) (((char *) arg0) + 0x2D6)) = 1;
    *((s32 *) (((char *) arg0) + 0x1E8)) = 0x0C000700;
    *((s32 *) (((char *) arg0) + 0)) |= 2;
    func_80166FBC_ovl_17(arg0, (void *) 0x13, 1);
    func_801661C8_ovl_17(arg0);
    func_80167608_ovl_17(arg0, 0x2002, (func_80033634_ovl_01() & 3) + 6);
  }
  func_80089D34_ovl_01(arg0, arg1, arg2, 0x200);
  if ((*(*((s32 **) (((char *) arg0) + 0x214)))) & 0x40000)
  {
    if ((*((s16 *) (((char *) arg0) + 0x1A8))) != 0)
    {
      temp_v1 = *((u8 *) (((char *) arg0) + 0x2D8));
      if ((((s32) temp_v1) >= 9) && ((((s32) temp_v1) < 0xB) || (temp_v1 == 0x10)))
      {
        func_80166FBC_ovl_17(arg0, 0, 7);
      }
      *((s8 *) (((char *) arg0) + 0x2D6)) = -1;
      if ((*((u8 *) (((char *) arg0) + 0x2DA))) == 0)
      {
        *((u8 *) (((char *) arg0) + 0x2DA)) = 3U;
        *((s8 *) (((char *) arg0) + 0x2DB)) = 1;
      }
    }
    *((s32 *) (((char *) arg0) + 4)) = 0x07000000;
  }
}

