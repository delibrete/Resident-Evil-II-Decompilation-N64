s32 func_80040E88_overlay_001(s16 *, s32 *);
s32 func_8004251C_overlay_001(s32, s32 *, void *);
s32 func_8004279C_overlay_001(s32 *, s16 *, u16 *);
extern s32 D_80110EB4_overlay_001;
extern s32 D_80110ECC_overlay_001;
void func_8005BED0_ovl_01(void *arg0)
{
  union 
  {
    unsigned char bytes[88];
    struct 
    {
      unsigned char pad[16];
      s32 value;
    } view_sp10;
    struct 
    {
      unsigned char pad[48];
      s16 value;
    } view_sp30;
    struct 
    {
      unsigned char pad[50];
      s16 value;
    } view_sp32;
    struct 
    {
      unsigned char pad[52];
      s16 value;
    } view_sp34;
    struct 
    {
      unsigned char pad[56];
      u16 value;
    } view_sp38;
    struct 
    {
      unsigned char pad[60];
      u16 value;
    } view_sp3C;
  } m2c_initial_frame;
  s32 *temp_s1;
  s16 *var_a0;
  s32 temp_a1;
  
  s32 temp_s2;
  s32 temp_v1;
  u8 temp_a0;
  u8 temp_a1_2;
  void *temp_s0;
  void *var_s3;
  temp_a1 = (*((u16 *) (((char *) arg0) + 0x1AA))) & 0xFFF;
  if (temp_a1 != 0)
  {
    temp_a1_2 = *((u8 *) (((char *) (temp_a1 + (&D_80110EB4_overlay_001))) + (-1)));
    temp_a1 = temp_a1_2 - 1;
    if (temp_a1_2 != 0)
    {
      temp_a0 = *((u8 *) (((char *) arg0) + 8));
      var_s3 = (char *) (*((s32 *) (((char *) arg0) + 0x234)));
      var_s3 += (s32) ((*((temp_a1 * 6) + (&D_80110ECC_overlay_001))) * 0x178);
      if (temp_a0 & 1)
      {
        var_s3 += 0x5E0;
      }
      temp_v1 = temp_a0 & 0xFF;
      if ((temp_v1 == 0xE) || ((var_a0 = var_s3 + 0x58, temp_v1 == 0x41)))
      {
        var_s3 += 0x178;
        var_a0 = var_s3 + 0x58;
      }
      temp_s2 = *((s32 *) (((char *) arg0) + 0x234));
      *((s32 *) (((char *) var_s3) + 0)) = (s32) ((*((s32 *) (((char *) var_s3) + 0))) | 0x41);
      temp_s0 = (char *) (temp_a1 * 6);
      temp_s0 += (s32) (&D_80110ECC_overlay_001);
      temp_s1 = var_s3 + 8;
 do { *((s8 *) (((char *) var_s3) + 0x111)) = 1; do { *((s8 *) (((char *) var_s3) + 0x112)) = 0; *((s16 *) (((char *) var_s3) + 0x11C)) = (s16) ((s8) (*((u8 *) (((char *) temp_s0) + 1)))); *((s16 *) (((char *) var_s3) + 0x58)) = 0; *((s16 *) (((char *) var_s3) + 0x5A)) = 0; *((s16 *) (((char *) var_s3) + 0x5C)) = 0; *((s16 *) (((char *) var_s3) + 0x11E)) = (s16) (*((u8 *) (((char *) temp_s0) + 3))); func_80040E88_overlay_001(var_a0, temp_s1); func_8004251C_overlay_001(temp_s2 + 0x1060, temp_s1, var_s3 + 0x38); } while (0); *((u16 *) (((char *) var_s3) + 0x28)) = (u16) (*((u16 *) (((char *) arg0) + 0x25E))); m2c_initial_frame.view_sp30.value = 0; m2c_initial_frame.view_sp34.value = 0; m2c_initial_frame.view_sp32.value = (*((u16 *) (((char *) temp_s0) + 4))) + (*((u16 *) (((char *) arg0) + 0x66))); func_80040E88_overlay_001(&m2c_initial_frame.view_sp30.value, &m2c_initial_frame.view_sp10.value); m2c_initial_frame.view_sp32.value = 0; } while (0);
      m2c_initial_frame.view_sp30.value = (s16) (*((u8 *) (((char *) temp_s0) + 2)));
      func_8004279C_overlay_001(&m2c_initial_frame.view_sp10.value, &m2c_initial_frame.view_sp30.value, &m2c_initial_frame.view_sp38.value);
      *((u16 *) (((char *) var_s3) + 0x2A)) = m2c_initial_frame.view_sp38.value;
      *((u16 *) (((char *) var_s3) + 0x2C)) = m2c_initial_frame.view_sp3C.value;
    }
  }
}
