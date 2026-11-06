/* identical to func_80171F0C_overlay_054 (matched), with its names changed by decompdecomp */
s32 func_80033634_ovl_01();
s32 func_80164E08_overlay_026();
s32 func_80165290_ovl_26();
void func_8016537C_ovl_26(void *arg0)
{
  int new_var2;
  u8 *new_var;
  if (new_var2 || arg0)
  {
    func_80164E08_overlay_026();
    new_var = (u8 *) (((char *) arg0) + 0x2C1);
    *new_var = 0xC5;
    *((s8 *) (((char *) arg0) + 0x2C3)) = (s8) (func_80033634_ovl_01() & 3);
    new_var2 = 2;
    func_80165290_ovl_26(arg0, 7, new_var2);
  }
  else
  {
    func_80164E08_overlay_026();
    new_var = (u8 *) (((char *) arg0) + 0x2C1);
    *new_var = 0xC5;
    *((s8 *) (((char *) arg0) + 0x2C3)) = (s8) (func_80033634_ovl_01() & 3);
    new_var2 = 2;
    func_80165290_ovl_26(arg0, 7, new_var2);
  }
}

