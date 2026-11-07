int func_80032B8C_ovl_01(void *, s32);
s32 func_80033634_ovl_01();
s32 func_80089D34_ovl_01(void *, s32, s32, s32);
extern s32 D_800C7650;
void func_8016F47C_overlay_064(void *arg0, s32 arg1, s32 arg2)
{
  int new_var3;
  int __repair_constant = 2;
  char *new_var;
  char *new_var4;
  u16 temp_v1;
  volatile unsigned char var_v0;
  u16 temp_v0;
  char *new_var2;
  void *temp_s1;
  u16 var_v1;
  new_var4 = ((char *) arg0) + 0x13A;
  temp_s1 = arg0 + 0x2B4;
  if ((*((u8 *) (((char *) arg0) + 6))) == 0)
  {
    *((u8 *) (((char *) arg0) + 6)) = 1U;
    *((s16 *) (((char *) arg0) + 0x1E0)) = __repair_constant;
    *((s16 *) (((char *) arg0) + 0x1E4)) = 0;
    *((s16 *) (((char *) arg0) + 0x1E2)) = 0;
    var_v1 = (*((u16 *) (((char *) temp_s1) + 6)) = -2U);
    if (func_80033634_ovl_01() & 1)
    {
      var_v1 = __repair_constant;
    }
    *((u16 *) (((char *) arg0) + 0x1F4)) = 0x1000U;
  }
  *((u16 *) (((char *) arg0) + 0x66)) = (u16) ((*((u16 *) (((char *) arg0) + 0x66))) + (*((u16 *) (((char *) (arg0 + 0x2B4)) + 6))));
  new_var = new_var4;
  func_80032B8C_ovl_01(arg0, 0);
  func_80089D34_ovl_01(arg0, arg1, arg2, 0x80);
  new_var3 = -(*((u16 *) (((char *) temp_s1) + 6)));
  temp_v0 = (*((u16 *) (((char *) arg0) + 0x1F4))) - 2;
  *((u16 *) (((char *) arg0) + 0x1F4)) = temp_v0;
  if (temp_v0 & 0x8000)
  {
    *((u16 *) (((char *) temp_s1) + 6)) = (u16) new_var3;
    *((u16 *) (((char *) arg0) + 0x1F4)) = 0x1000U;
  }
  if ((*((u16 *) (((char *) (&D_800C7650)) + 0x19C2A))) == 0x11)
  {
    new_var2 = (char *) arg0;
    temp_v1 = *((u16 *) (((char *) arg0) + 0x2E));
    var_v0 = -((s16) temp_v1);
    *((u16 *) (new_var2 + 0x134)) = temp_v1;
  }
  else
    if (new_var)
  {
    *((u16 *) (((char *) arg0) + 0x134)) = -0xC8U;
    var_v0 = 0xC8;
  }
  else
  {
    *((u16 *) (((char *) arg0) + 0x134)) = -0xC8U;
    var_v0 = 0xC8;
  }
  *((s16 *) new_var4) = var_v0;
}

