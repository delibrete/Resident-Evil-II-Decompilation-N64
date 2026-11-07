s32 func_8000E980(s32 *);
s32 func_8000E9D0(s32);
s32 func_801809A0_ovl_02(u16, u16);
extern s32 D_80112918_ovl_01;
extern s32 D_80112968_ovl_01;
extern s32 D_80134450_ovl_01;
extern s32 D_801344B0_ovl_01;
void func_80180A90_ovl_02(void)
{
  char *__repair_addr;
  s32 *var_v0;
  int new_var;
  s32 *var_v1;
  __repair_addr = (char *) ((D_80134450_ovl_01 * 0x112) + (&D_801344B0_ovl_01));
  func_801809A0_ovl_02(*((u16 *) (((char *) ((D_80134450_ovl_01 * 0x112) + (&D_801344B0_ovl_01))) + 8)), *((u16 *) (((char *) __repair_addr) + 0xA)));
  ;
  var_v0 = &D_80112968_ovl_01;
  do
  {
    *((s32 *) (((char *) (&D_80112918_ovl_01)) + 0)) = (s32) (*((s32 *) (((char *) var_v0) + 0)));
    *((s32 *) (((char *) (&D_80112918_ovl_01)) + 4)) = (s32) (*((s32 *) (((char *) var_v0) + 4)));
    new_var = 0xC;
    *((s32 *) (((char *) (&D_80112918_ovl_01)) + 8)) = (s32) (*((s32 *) (((char *) var_v0) + 8)));
    *((s32 *) (((char *) (&D_80112918_ovl_01)) + new_var)) = (s32) (*((s32 *) (((char *) var_v0) + 0xC)));
    var_v0 += 0x10;
    var_v1 += 0x10;
  }
  while (var_v0 != ((&D_80112968_ovl_01) + 0x50));
  if (D_80134450_ovl_01)
  {
    func_8000E980(&D_80112918_ovl_01);
    func_8000E9D0(2);
    func_8000E9D0(8);
    func_8000E9D0(0x20);
    func_8000E9D0(0x40);
  }
  else
  {
    func_8000E980(&D_80112918_ovl_01);
    func_8000E9D0(2);
    func_8000E9D0(8);
    func_8000E9D0(0x20);
    func_8000E9D0(0x40);
  }
}

