void *func_8002FCA8_ovl_01(void *, s32);
s32 func_8002FD08_ovl_01();
s32 func_8002FD1C_ovl_01(void *);
extern s32 D_8003028C_ovl_01;
extern s32 D_80030354_ovl_01;
extern s32 D_8003041C_ovl_01;
extern s32 D_8003091C_ovl_01;
extern s32 D_80030A6C_ovl_01;
extern s32 D_80030D3C_ovl_01;
extern s32 func_8002FD68_ovl_01;
extern s32 func_8002FF24_ovl_01;
extern s32 func_8003001C_ovl_01;
extern s32 func_8003014C_ovl_01;
extern s32 func_80030BBC_ovl_01;
void func_80030D98_ovl_01(void *arg0)
{
  s32 temp_s2;
  s32 var_a0;
  void *temp_v0;
  void *var_v1;
  if (temp_v0)
  {
    *((void **) (((char *) arg0) + 4)) = NULL;
    temp_s2 = func_8002FD08_ovl_01();
    temp_v0 = func_8002FCA8_ovl_01(arg0, 0x50);
    var_a0 = 1;
  }
  else
  {
    *((void **) (((char *) arg0) + 4)) = NULL;
    temp_s2 = func_8002FD08_ovl_01();
    temp_v0 = func_8002FCA8_ovl_01(arg0, 0x50);
    var_a0 = 1;
  }
  if (temp_v0 == NULL)
  {
    func_8002FD1C_ovl_01(arg0);
    *((s32 *) (((char *) (*((void **) (((char *) arg0) + 0)))) + 0x14)) = 0x2E;
    *((s32 *) (((char *) (*((void **) (((char *) arg0) + 0)))) + 0x18)) = 0;
    (*((s32 (**)(void *)) (((char *) (*((void **) (((char *) arg0) + 0)))) + 0)))(arg0);
    var_a0 = 1;
  }
  var_v1 = temp_v0 + 4;
  *((s32 **) (((char *) temp_v0) + 0)) = &func_8002FD68_ovl_01;
  *((s32 **) (((char *) temp_v0) + 4)) = &func_8002FF24_ovl_01;
  *((s32 **) (((char *) temp_v0) + 8)) = &func_8003001C_ovl_01;
  *((s32 **) (((char *) temp_v0) + 0xC)) = &func_8003014C_ovl_01;
  *((s32 **) (((char *) temp_v0) + 0x10)) = &D_8003028C_ovl_01;
  *((s32 **) (((char *) temp_v0) + 0x14)) = &D_80030354_ovl_01;
  *((s32 **) (((char *) temp_v0) + 0x18)) = &D_8003041C_ovl_01;
  *((s32 **) (((char *) temp_v0) + 0x1C)) = &D_8003091C_ovl_01;
  *((s32 **) (((char *) temp_v0) + 0x20)) = &D_80030A6C_ovl_01;
  *((s32 **) (((char *) temp_v0) + 0x24)) = &func_80030BBC_ovl_01;
  *((s32 **) (((char *) temp_v0) + 0x28)) = &D_80030D3C_ovl_01;
  *((s32 *) (((char *) temp_v0) + 0x2C)) = temp_s2;
  do
  {
    *((s32 *) (((char *) var_v1) + 0x30)) = 0;
    *((s32 *) (((char *) var_v1) + 0x38)) = 0;
    var_a0 -= 1;
    var_v1 -= 4;
  }
  while (var_a0 >= 0);
  *((s32 *) (((char *) temp_v0) + 0x44)) = (*((s32 *) (((char *) temp_v0) + 0x40)) = 0);
  *((s32 *) (((char *) temp_v0) + 0x48)) = 0x50;
  *((void **) (((char *) arg0) + 4)) = temp_v0;
}

