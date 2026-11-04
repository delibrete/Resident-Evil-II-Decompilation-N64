s32 func_80032EA4_ovl_01();
extern char D_800C7650[];
void func_8016F334_overlay_048(void *arg0)
{
  void **new_var;
  {
    func_80032EA4_ovl_01(arg0, *((void **) (D_800C7650 + 0x19AA8)), *((void **) (D_800C7650 + 0x19AB0)), (void *) 0x400);
  }
  do
  {
 do { new_var = (void **) (D_800C7650 + 0x19AB0); } while (0);
    func_80032EA4_ovl_01(arg0, *((void **) (D_800C7650 + 0x19AA8)), *new_var);
  }
  while (0);
  *((s32 *) (((char *) arg0) + 4)) = 0x01010000;
}
