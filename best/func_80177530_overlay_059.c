s16 func_80040BE4_ovl_01(s32);
s32 func_80040E88_ovl_01(s32, s32 *);
s32 func_8004251C_ovl_01(s32 *, s32, s32 *);
void func_80177530_overlay_059(void *arg0, s32 arg1, s32 arg2)
{
  union 
  {
    unsigned char bytes[72];
    struct 
    {
      unsigned char pad[16];
      s32 value;
    } view_sp10;
    struct 
    {
      unsigned char pad[36];
      s32 value;
    } view_sp24;
    struct 
    {
      unsigned char pad[44];
      s32 value;
    } view_sp2C;
  } m2c_initial_frame;
  s32 *temp_s0;
  struct 
  {
    unsigned char pad[36];
    s32 value;
  } *new_var;
  s32 temp_s2;
  s32 temp_v0;
  s32 temp_v0_2;
  void *var_s2;
  temp_s0 = arg0 + 0x14;
  temp_s2 = *((s32 *) (((char *) arg0) + 0x234));
  func_80040E88_ovl_01(arg0 + 0x64, temp_s0);
  func_8004251C_ovl_01(temp_s0, temp_s2 + 8, &m2c_initial_frame.view_sp10.value);
  do
  {
    func_8004251C_ovl_01(&m2c_initial_frame.view_sp10.value, temp_s2 + 0xD40, &m2c_initial_frame.view_sp10.value);
  }
  while (0);
  new_var = &m2c_initial_frame.view_sp24;
  func_8004251C_ovl_01(&m2c_initial_frame.view_sp10.value, temp_s2 + 0xEB8, &m2c_initial_frame.view_sp10.value);
  if (arg2 == 0)
  {
    var_s2 = (char *)(temp_s2); var_s2 += (s32)(0x1BE8);
    func_8004251C_ovl_01(&m2c_initial_frame.view_sp10.value, var_s2 - 0x5D8, &m2c_initial_frame.view_sp10.value);
  }
  else
  {
    var_s2 = temp_s2 + 0x1490;
  }
  func_8004251C_ovl_01(&m2c_initial_frame.view_sp10.value, var_s2 - 0x460, &m2c_initial_frame.view_sp10.value);
  func_8004251C_ovl_01(&m2c_initial_frame.view_sp10.value, var_s2 - 0x2E8, &m2c_initial_frame.view_sp10.value);
  func_8004251C_ovl_01(&m2c_initial_frame.view_sp10.value, var_s2 - 0x170, &m2c_initial_frame.view_sp10.value);
  func_8004251C_ovl_01(&m2c_initial_frame.view_sp10.value, var_s2 + 8, &m2c_initial_frame.view_sp10.value);
  if (arg1 == 0)
  {
    *((s32 *) (((char *) arg0) + 0x28)) = (s32) ((*((s32 *) (((char *) arg0) + 0x28))) - ((*new_var).value - (*((s32 *) (((char *) var_s2) + 0x4C)))));
    *((s32 *) (((char *) arg0) + 0x30)) = (s32) ((*((s32 *) (((char *) arg0) + 0x30))) - (m2c_initial_frame.view_sp2C.value - (*((s32 *) (((char *) var_s2) + 0x54)))));
    return;
  }
  temp_v0 = (*new_var).value - (*((s32 *) (((char *) var_s2) + 0x4C)));
  temp_v0_2 = m2c_initial_frame.view_sp2C.value - (*((s32 *) (((char *) var_s2) + 0x54)));
  *((s16 *) (((char *) arg0) + 0x1E0)) = func_80040BE4_ovl_01((temp_v0 * temp_v0) + (temp_v0_2 * temp_v0_2));
}

