s32 func_80066804_ovl_01();
void func_80173824_overlay_054(void *arg0, s32 arg1, s32 arg2)
{
  arg2 = arg1 * 0x178;
  do
  {
    func_80066804_ovl_01(((*((s32 *) (((char *) arg0) + 0x234))) + arg2) + 0x4C, arg2, 1 << (*((u8 *) (((char *) arg0) + 0x1A2))));
  }
  while (0);
}

