s32 func_80066804_ovl_01(s32, s32, s32, s32);
void func_80166C94_ovl_26(void *arg0, s32 arg1, s32 arg2)
{
  void *obj;
  s32 index = arg1;
  s32 n = *((u8 *) (((u8 *) obj) + 0x1a2));
  int new_var;
  s32 mask = 1;
  s32 addr = ((*((s32 *) (((u8 *) obj) + 0x234))) + (index * 0x178)) + 0x4c;
  new_var = 0x400;
  func_80066804_ovl_01(addr, arg2, mask << ((char) n), new_var);
  obj = arg0;
}

