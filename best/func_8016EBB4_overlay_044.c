s32 func_8006A81C_ovl_01(s32);
s32 func_8008386C_ovl_01(s16, s32, s16 *, s16 *);
extern s32 D_80173A68_overlay_044;
extern s32 D_80173CD4_overlay_044;
extern s32 D_80174048_overlay_044;
void func_8016EBB4_overlay_044(void *arg0)
{
  char *new_var;
  union 
  {
    unsigned char bytes[32];
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
  } m2c_initial_frame;
  s32 temp_a0;
  m2c_initial_frame.view_sp10.value = M2C_UNALIGNED32(*((s32 *) (((char *) (&D_80173A68_overlay_044)) + 0)));
  m2c_initial_frame.view_sp14.value = M2C_UNALIGNED32(*((s32 *) (((char *) (&D_80173A68_overlay_044)) + 4)));
  func_8008386C_ovl_01(*((s16 *) (((char *) arg0) + 0x66)), *((s32 *) (((char *) arg0) + 0x70)), &m2c_initial_frame.view_sp10.value, &m2c_initial_frame.view_sp10.value);
  *((s32 *) (((char *) arg0) + 0x28)) = (s32) ((*((s16 *) (((char *) arg0) + 0x2D0))) + m2c_initial_frame.view_sp10.value);
  *((s32 *) (((char *) arg0) + 0x2C)) = (s32) ((*((s32 *) (((char *) arg0) + 0x2C))) + m2c_initial_frame.view_sp12.value);
  *((s32 *) (((char *) arg0) + 0x30)) = (s32) ((*((s16 *) (((char *) arg0) + 0x2D4))) + m2c_initial_frame.view_sp14.value);
  temp_a0 = func_8006A81C_ovl_01(*((s32 *) (((char *) arg0) + 0x70))) * 0x18;
  *((u16 *) (((char *) (&D_80174048_overlay_044)) + 0)) = (u16) (*((((*((u8 *) (((char *) arg0) + 0x2B4))) * 6) + temp_a0) + (&D_80173CD4_overlay_044)));
  new_var = (char *)(((char *) ((((*((u8 *) (((char *) arg0) + 0x2B4))) * 6) + temp_a0) + (&D_80173CD4_overlay_044)))); new_var += (s32)(4);
  *((u16 *) (((char *) (&D_80174048_overlay_044)) + 2)) = (u16) (*((u16 *) (((char *) ((((*((u8 *) (((char *) arg0) + 0x2B4))) * 6) + temp_a0) + (&D_80173CD4_overlay_044))) + 2)));
  *((u16 *) (((char *) (&D_80174048_overlay_044)) + 4)) = (u16) (*((u16 *) new_var));
  *((s32 *) (((char *) arg0) + 0)) = (s32) ((*((s32 *) (((char *) arg0) + 0))) & (~8));
}

