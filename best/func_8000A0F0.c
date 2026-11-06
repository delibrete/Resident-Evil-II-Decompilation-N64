s32 func_800087A0();
s32 func_80009CAC();
s32 func_80009F8C();
s32 func_8000A66C();
s32 func_8000A0F0(void *arg0)
{
  union 
  {
    unsigned char bytes[104];
    struct 
    {
      unsigned char pad[16];
      u16 value;
    } view_sp10;
    struct 
    {
      unsigned char pad[44];
      u16 value;
    } view_sp2C;
    struct 
    {
      unsigned char pad[46];
      u16 value;
    } view_sp2E;
    struct 
    {
      unsigned char pad[48];
      u16 value;
    } view_sp30;
    struct 
    {
      unsigned char pad[72];
      u16 value;
    } view_sp48;
    struct 
    {
      unsigned char pad[80];
      u16 value;
    } view_sp50;
    struct 
    {
      unsigned char pad[82];
      u16 value;
    } view_sp52;
  } m2c_initial_frame;
  s32 temp_v0;
  s32 temp_v0_3;
  s32 temp_v0_5;
  s32 temp_v0_6;
  s32 var_a0;
  s32 var_v0;
  u16 *temp_a1;
  u16 *temp_a1_2;
  char *var_a1_2;
  u16 *new_var;
  u16 *var_s1;
  u16 temp_a0;
  u16 temp_a2;
  u16 temp_v0_2;
  u8 temp_v1;
  void *temp_v0_4;
  if (((*((u8 *) (((char *) arg0) + 0x65))) == 0) || ((*((u8 *) (((char *) arg0) + 0x65)) = 0U, var_v0 = func_8000A66C(), var_v0 == 0)))
  {
    var_v0 = func_800087A0(*((s32 *) (((char *) arg0) + 4)), *((s32 *) (((char *) arg0) + 8)), 1, &m2c_initial_frame.view_sp10.value);
    temp_a1 = &m2c_initial_frame.view_sp10.value;
    if (var_v0 == 0)
    {
      m2c_initial_frame.view_sp52.value = 0;
      m2c_initial_frame.view_sp50.value = 0;
      new_var = &m2c_initial_frame.view_sp52.value;
      do
      {
        temp_v0_2 = *temp_a1;
        temp_a1 += 2;
        temp_a2 = m2c_initial_frame.view_sp50.value + temp_v0_2;
        temp_a0 = (*new_var) + (~temp_v0_2);
        m2c_initial_frame.view_sp50.value = temp_a2;
        m2c_initial_frame.view_sp52.value = temp_a0;
      }
      while (((u32) temp_a1) < ((u32) (&m2c_initial_frame.view_sp2C.value)));
      var_s1 = &m2c_initial_frame.view_sp10.value;
      if ((m2c_initial_frame.view_sp2C.value != (temp_a2 & 0xFFFF)) || (m2c_initial_frame.view_sp2E.value != (temp_a0 & 0xFFFF)))
      {
        var_a0 = func_80009F8C(arg0, var_s1);
        if (var_a0 == 0xA)
        {
          temp_a1 = var_s1;
          var_s1 = &m2c_initial_frame.view_sp30.value;
          temp_v0 = func_80009CAC(arg0, temp_a1, var_s1);
          if (temp_v0 != 0)
          {
            return temp_v0;
          }
          goto block_11;
        }
        var_v0 = var_a0;
        if (var_a0 == 0)
        {
          goto block_11;
        }
        return var_v0;
      }
      block_11:
      var_a0 = 0;

      if (!((*((u16 *) (((char *) var_s1) + 0x18))) & 1))
      {
        temp_a1_2 = var_s1;
        var_s1 = &m2c_initial_frame.view_sp30.value;
        var_v0 = func_80009CAC(arg0, temp_a1_2, var_s1);
        if (var_v0 == 0)
        {
          var_a0 = 0;
          if (!(m2c_initial_frame.view_sp48.value & 1))
          {
            return 0xB;
          }
          goto block_15;
        }
        return var_v0;
      }
      block_15:
      var_a1_2 = var_s1;

      do
      {
        temp_v0_4 = arg0 + var_a0;
        var_a0 += 1;
        *((u8 *) (((char *) temp_v0_4) + 0xC)) = (u8) (*((u16 *) var_a1_2));
        var_a1_2 += 1;
      }
      while (var_a0 < 0x20);
      *((s32 *) (((char *) arg0) + 0x4C)) = (s32) (*((u8 *) (((char *) var_s1) + 0x1B)));
      temp_v1 = *((u8 *) (((char *) var_s1) + 0x1A));
      *((s32 *) (((char *) arg0) + 0x50)) = 0x10;
      *((s32 *) (((char *) arg0) + 0x54)) = 8;
      *((u8 *) (((char *) arg0) + 0x64)) = temp_v1;
      *((s32 *) (((char *) arg0) + 0x60)) = (s32) ((temp_v1 * 2) + 3);
      temp_v0_5 = ((*((u8 *) (((char *) arg0) + 0x64))) + 1) * 8;
      *((s32 *) (((char *) arg0) + 0x58)) = temp_v0_5;
      *((s32 *) (((char *) arg0) + 0x5C)) = (s32) (temp_v0_5 + ((*((u8 *) (((char *) arg0) + 0x64))) * 8));
      temp_v0_6 = func_800087A0(*((s32 *) (((char *) arg0) + 4)), *((s32 *) (((char *) arg0) + 8)), 7, arg0 + 0x2C);
      var_v0 = temp_v0_6 & (-(temp_v0_6 != 0));
      return var_v0;
    }
  }
  return var_v0;
}

