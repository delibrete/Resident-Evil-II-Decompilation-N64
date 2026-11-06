s32 func_80042E10_overlay_001(s16 *);
s32 func_80042FCC_overlay_001(s16 *, s16 *, s16 *);
s32 func_8004344C_overlay_001(s32);
s32 func_80043490_overlay_001(void *, void *, void *);
s16 func_800434E8_overlay_001();
s32 func_8004500C_overlay_001(void *arg0, s32);
extern s32 D_800C7650_overlay_001;
extern s32 D_8011C800_overlay_001;
extern s32 D_801240C8_overlay_001;
void func_80084E34_ovl_01(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg5, s32 arg6)
{
  union 
  {
    unsigned char bytes[152];
    struct 
    {
      unsigned char pad[16];
      s32 value;
    } view_sp10;
    struct 
    {
      unsigned char pad[56];
      s16 value;
    } view_sp38;
    struct 
    {
      unsigned char pad[58];
      s16 value;
    } view_sp3A;
    struct 
    {
      unsigned char pad[60];
      s16 value;
    } view_sp3C;
    struct 
    {
      unsigned char pad[64];
      s16 value;
    } view_sp40;
    struct 
    {
      unsigned char pad[66];
      s16 value;
    } view_sp42;
    struct 
    {
      unsigned char pad[68];
      s16 value;
    } view_sp44;
    struct 
    {
      unsigned char pad[72];
      s16 value;
    } view_sp48;
    struct 
    {
      unsigned char pad[74];
      s16 value;
    } view_sp4A;
    struct 
    {
      unsigned char pad[76];
      s16 value;
    } view_sp4C;
    struct 
    {
      unsigned char pad[80];
      s16 value;
    } view_sp50;
    struct 
    {
      unsigned char pad[82];
      s16 value;
    } view_sp52;
    struct 
    {
      unsigned char pad[84];
      s16 value;
    } view_sp54;
    struct 
    {
      unsigned char pad[88];
      s32 value;
    } view_sp58;
    struct 
    {
      unsigned char pad[92];
      s32 value;
    } view_sp5C;
    struct 
    {
      unsigned char pad[96];
      u32 value;
    } view_sp60;
    struct 
    {
      unsigned char pad[100];
      u32 value;
    } view_sp64;
    struct 
    {
      unsigned char pad[104];
      u16 value;
    } view_sp68;
    struct 
    {
      unsigned char pad[105];
      u8 value;
    } view_unksp69;
  } m2c_initial_frame;
  s16 temp_s3;
  s16 temp_s4;
  s16 temp_s5;
  s32 temp_a0;
  s32 temp_fp;
  s32 temp_lo;
  s32 temp_s0;
  s32 temp_s0_2;
  s32 temp_s1;
  s32 temp_s1_2;
  s32 temp_s3_2;
  s32 temp_s4_2;
  s32 temp_s7;
  s32 temp_t0;
  s32 temp_t1;
  s32 temp_v0;
  void *var_s6;
  temp_lo = (*((u16 *) (((char *) arg0) + 0x3A))) * (arg3 >> 4);
  var_s6 = (char *)((*((s32 *) (((char *) arg0) + 0x74)))); var_s6 += (s32)((arg6 * 4));
  temp_fp = ((((u16) (*((u16 *) (((char *) arg0) + 0x32)))) >> 1) - 0x20) & 0x60;
  temp_t1 = ((s32) (temp_lo * (*((u16 *) (((char *) arg0) + 4))))) >> 0xC;
  m2c_initial_frame.view_sp58.value = temp_t1;
  m2c_initial_frame.view_sp3C.value = 0;
  m2c_initial_frame.view_sp44.value = 0;
  m2c_initial_frame.view_sp4C.value = 0;
  m2c_initial_frame.view_sp54.value = 0;
  m2c_initial_frame.view_sp68.value = *((u16 *) (((char *) (((*((u8 *) (((char *) arg0) + 0x1C))) * 4) + (&D_8011C800_overlay_001))) + 2));
  temp_a0 = ((s32) (temp_lo * (*((u16 *) (((char *) arg0) + 6))))) >> 0xC;
  m2c_initial_frame.view_sp5C.value = temp_a0;
  temp_s7 = arg1 - 1;
  m2c_initial_frame.view_sp60.value = ((u32) (arg1 * temp_t1)) >> 0xC;
  m2c_initial_frame.view_sp64.value = ((u32) (arg1 * temp_a0)) >> 0xC;
  loop_1:
  temp_s1 = ((s32) ((*((s8 *) (((char *) var_s6) + 2))) * m2c_initial_frame.view_sp58.value)) >> 0xC;

  temp_s4 = temp_s1 + m2c_initial_frame.view_sp60.value;
  m2c_initial_frame.view_sp38.value = (s16) temp_s1;
  m2c_initial_frame.view_sp48.value = (s16) temp_s1;
  m2c_initial_frame.view_sp40.value = temp_s4;
  m2c_initial_frame.view_sp50.value = temp_s4;
  temp_s0 = ((s32) ((*((s8 *) (((char *) var_s6) + 3))) * m2c_initial_frame.view_sp5C.value)) >> 0xC;
  temp_s3 = temp_s0 + m2c_initial_frame.view_sp64.value;
  m2c_initial_frame.view_sp3A.value = (s16) temp_s0;
  m2c_initial_frame.view_sp42.value = (s16) temp_s0;
  m2c_initial_frame.view_sp4A.value = temp_s3;
  m2c_initial_frame.view_sp52.value = temp_s3;
  temp_s1_2 = (*((u8 *) (((char *) var_s6) + 0))) << 0x18;
  temp_s0_2 = (*((u8 *) (((char *) var_s6) + 1))) << 0x10;
  temp_s4_2 = temp_s1_2 + (temp_s7 << 0x18);
  temp_s3_2 = temp_s0_2 + (temp_s7 << 0x10);
  func_80042E10_overlay_001(&m2c_initial_frame.view_sp38.value);
  do
  {
    func_8004344C_overlay_001(((s32) (&m2c_initial_frame.view_sp10.value)) | 4);
  }
  while (0);
  temp_s5 = func_800434E8_overlay_001();
  if (!(func_800434E8_overlay_001() & 0x8000))
  {
    do
    {
      if (arg6)
      {
        func_80042FCC_overlay_001(&m2c_initial_frame.view_sp40.value, &m2c_initial_frame.view_sp48.value, &m2c_initial_frame.view_sp50.value);
      }
      else
      {
        func_80042FCC_overlay_001(&m2c_initial_frame.view_sp40.value, &m2c_initial_frame.view_sp48.value, &m2c_initial_frame.view_sp50.value);
      }
    }
    while (0);
    if (((((u32) temp_s5) >> 9) != 0) && (((u32) temp_s5) <= 0x7FFFU))
    {
      *((s32 *) (((char *) (&m2c_initial_frame.view_sp10.value)) + 8)) = (s32) ((temp_s1_2 | temp_s0_2) | temp_fp);
      *((s32 *) (((char *) (&m2c_initial_frame.view_sp10.value)) + 0x10)) = (s32) (temp_s4_2 | temp_s0_2);
      *((s32 *) (((char *) (&m2c_initial_frame.view_sp10.value)) + 0x18)) = (s32) (temp_s1_2 | temp_s3_2);
      *((s32 *) (((char *) (&m2c_initial_frame.view_sp10.value)) + 0x20)) = (s32) (temp_s4_2 | temp_s3_2);
      *((s16 *) (((char *) (&m2c_initial_frame.view_sp10.value)) + 0x1A)) = temp_s5;
      *((s32 *) (((char *) (&m2c_initial_frame.view_sp10.value)) + 0)) = (s32) (arg5 | (~0xFF));
      func_80043490_overlay_001((&m2c_initial_frame.view_sp10.value) + 0xC, (&m2c_initial_frame.view_sp10.value) + 0x14, (&m2c_initial_frame.view_sp10.value) + 0x1C);
      *((s16 *) (((char *) (&m2c_initial_frame.view_sp10.value)) + 0x22)) = 1;
      *((u8 *) (((char *) (&m2c_initial_frame.view_sp10.value)) + 3)) = m2c_initial_frame.view_unksp69.value;
      *((void **) (((char *) (&m2c_initial_frame.view_sp10.value)) + 0x24)) = (void *) (((*((u8 *) (((char *) arg0) + 0x1C))) * 0x1C) + (&D_801240C8_overlay_001));
      temp_v0 = func_8004500C_overlay_001(arg0, *((s32 *) (((char *) (&D_800C7650_overlay_001)) + 0x18204)));
      var_s6 += 4;
      temp_t0 = arg2 - 1;
      arg2 = temp_t0;
      *((s32 *) (((char *) (&D_800C7650_overlay_001)) + 0x18204)) = temp_v0;
      if (temp_t0 != 0)
      {
        goto loop_1;
      }
    }
  }
}

