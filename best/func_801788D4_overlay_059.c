s16 func_80032D44_ovl_01(s16, s16, s16, s16);
s32 func_80040BE4_ovl_01(s32);
s32 func_80040E88_ovl_01(s16 *, s32 *);
s32 func_80042854_ovl_01(s32 *, s16 *, s32 *);
s32 func_80066804_ovl_01(s32 *, s32, s32, s32);
extern s32 D_800C7650;
extern s32 D_80178D9C_overlay_059;
void func_801788D4_overlay_059(void *arg0, void *arg1, s16 arg2, s32 arg3)
{
  union 
  {
    unsigned char bytes[104];
    struct 
    {
      unsigned char pad[16];
      s16 value;
    } view_sp10;
    struct 
    {
      unsigned char pad[18];
      s16 value;
    } view_sp12;
    struct 
    {
      unsigned char pad[20];
      s16 value;
    } view_sp14;
    struct 
    {
      unsigned char pad[24];
      s32 value;
    } view_sp18;
    struct 
    {
      unsigned char pad[56];
      s32 value;
    } view_sp38;
    struct 
    {
      unsigned char pad[64];
      s32 value;
    } view_sp40;
    struct 
    {
      unsigned char pad[58];
      u16 value;
    } view_unksp3A;
    struct 
    {
      unsigned char pad[66];
      u16 value;
    } view_unksp42;
  } m2c_initial_frame;
  s16 temp_v0;
  s16 var_s0;
  s32 temp_v0_2;
  s32 temp_v0_3;
  void *temp_v1;
  m2c_initial_frame.view_sp12.value = func_80032D44_ovl_01(*((s16 *) (((char *) (&D_800C7650)) + 0x19AAA)), *((s16 *) (((char *) (&D_800C7650)) + 0x19AB2)), *((s16 *) (((char *) arg0) + 0x2A)), *((s16 *) (((char *) arg0) + 0x32)));
  m2c_initial_frame.view_sp10.value = 0;
  m2c_initial_frame.view_sp14.value = 0;
  func_80040E88_ovl_01(&m2c_initial_frame.view_sp10.value, &m2c_initial_frame.view_sp18.value);
  m2c_initial_frame.view_sp10.value = arg2;
  m2c_initial_frame.view_sp12.value = 0;
  func_80042854_ovl_01(&m2c_initial_frame.view_sp18.value, &m2c_initial_frame.view_sp10.value, &m2c_initial_frame.view_sp38.value);
  m2c_initial_frame.view_sp38.value += *((s32 *) (((char *) (&D_800C7650)) + 0x19AA8));
  m2c_initial_frame.view_sp40.value += *((s32 *) (((char *) (&D_800C7650)) + 0x19AB0));
  if (arg3 & 0xFFFF)
  {
    var_s0 = 0;
    if (func_80066804_ovl_01(&m2c_initial_frame.view_sp38.value, 0x578, 1, 0x500) != 0)
    {
      temp_v0 = var_s0;
      loop_3:
      temp_v1 = (char *) (((s32) (temp_v0 << 0x10)) >> 0xE);

      temp_v1 += (s32) (&D_80178D9C_overlay_059);
      m2c_initial_frame.view_sp38.value = (*((s32 *) (((char *) (&D_800C7650)) + 0x19AA8))) + (*((s16 *) (((char *) temp_v1) + 0)));
      m2c_initial_frame.view_sp40.value = (*((s32 *) (((char *) (&D_800C7650)) + 0x19AB0))) + (*((s16 *) (((char *) temp_v1) + 2)));
      temp_v0 = var_s0 + 1;
      if (func_80066804_ovl_01(&m2c_initial_frame.view_sp38.value, 0x578, 1, 0x500) != 0)
      {
        var_s0 = temp_v0;
        if (temp_v0 < 9)
        {
          goto loop_3;
        }
      }
    }
  }
  temp_v0_2 = m2c_initial_frame.view_sp38.value - (*((s32 *) (((char *) arg0) + 0x28)));
  temp_v0_3 = m2c_initial_frame.view_sp40.value - (*((s32 *) (((char *) arg0) + 0x30)));
  *((u16 *) (((char *) arg1) + 0)) = m2c_initial_frame.view_unksp3A.value;
  *((u16 *) (((char *) arg1) + 4)) = m2c_initial_frame.view_unksp42.value;
  func_80040BE4_ovl_01((temp_v0_2 * temp_v0_2) + (temp_v0_3 * temp_v0_3));
}

