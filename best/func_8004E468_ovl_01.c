#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif
s32 func_8004ECFC_overlay_001();
s32 func_8004F7A4_overlay_001();
s32 func_8004F844_overlay_001();
s32 func_80066804_overlay_001();
s16 func_80069F4C_overlay_001();
s32 func_80083800_overlay_001();
extern s32 D_800C7650_overlay_001;
extern s32 D_800E10D0_overlay_001;
extern s32 D_800E1898_overlay_001;
extern s32 D_8010B9A0_overlay_001;
extern s32 D_8010B9C8_overlay_001;
extern s32 D_801126AC_overlay_001;
extern s32 func_801126B0_overlay_001;
s32 func_8004E468_ovl_01(s32 arg0)
{
  union 
  {
    unsigned char bytes[72];
    struct 
    {
      unsigned char pad[16];
      u16 value;
    } view_sp10;
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
      unsigned char pad[28];
      s32 value;
    } view_sp1C;
    struct 
    {
      unsigned char pad[32];
      s32 value;
    } view_sp20;
    struct 
    {
      unsigned char pad[30];
      u16 value;
    } view_unksp1E;
  } m2c_initial_frame;
  s16 temp_a0;
  s16 var_a0_2;
  char *var_s0;
  s32 temp_s0;
  s32 temp_s1;
  s32 temp_v0;
  s32 temp_v0_2;
  s32 temp_v1;
  s32 var_a0;
  s32 *new_var;
  temp_a0 = ((*((u16 *) (((char *) (&D_800E10D0_overlay_001)) + 0x66))) + 0x200) & (~0x3FF);
  if (((u8) (*((u8 *) (((char *) (&D_800E10D0_overlay_001)) + 0x1A2)))) < 0x1FU)
  {
    new_var = &D_800E10D0_overlay_001;
    m2c_initial_frame.view_sp14.value = 0;
    m2c_initial_frame.view_sp10.value = *((arg0 * 2) + (&D_8010B9A0_overlay_001));
    /*__repair_pointer_balance*/if ((unsigned long)new_var & 0x100) {
func_80083800_overlay_001(temp_a0, &m2c_initial_frame.view_sp10.value, &m2c_initial_frame.view_sp10.value);
} else {
func_80083800_overlay_001(temp_a0, &m2c_initial_frame.view_sp10.value, &m2c_initial_frame.view_sp10.value);
}
    m2c_initial_frame.view_sp18.value = ((s16) m2c_initial_frame.view_sp10.value) + (*((s32 *) (((char *) (&D_800E10D0_overlay_001)) + 0x28)));
    m2c_initial_frame.view_sp1C.value = (*((s32 *) (((char *) new_var) + 0x2C))) - 0x708;
    m2c_initial_frame.view_sp20.value = m2c_initial_frame.view_sp14.value + (*((s32 *) (((char *) new_var) + 0x30)));
    temp_s0 = func_80066804_overlay_001(&m2c_initial_frame.view_sp18.value, 0, 1 << (*((u8 *) (((char *) new_var) + 0x1A2))), 0x8000);
    temp_s1 = func_8004ECFC_overlay_001(new_var);
    if ((temp_s0 & 2) || ((var_a0 = temp_a0 << 0x10, temp_s1 != 0)))
    {
      var_a0 = temp_a0 << 0x10;
      if (m2c_initial_frame.view_sp1C.value >= func_80069F4C_overlay_001(&m2c_initial_frame.view_sp18.value, *((u16 *) (((char *) new_var) + 0x136)), 0x8000, 0))
      {
        var_a0_2 = temp_a0;
        if (!(D_801126AC_overlay_001 & 1))
        {
          var_a0 = temp_a0 << 0x10;
          if (func_8004F844_overlay_001(&m2c_initial_frame.view_sp18.value, &D_800E10D0_overlay_001) == 0)
          {
            if (temp_s1 != 0)
            {
              *((s32 *) (((char *) (&D_800E10D0_overlay_001)) + 0x280)) = temp_s1;
            }
            else
            {
              *((s32 *) (((char *) (&D_800E10D0_overlay_001)) + 0x280)) = 0;
            }
            *((s8 *) (((char *) new_var) + 5)) = 8;
            *((s8 *) (((char *) (&D_800E10D0_overlay_001)) + 7)) = 0;
            *((s8 *) (((char *) new_var) + 6)) = 0;
            return 1;
          }
          goto block_12;
        }
        goto block_13;
      }
    }
    goto block_12;
  }
  var_a0 = temp_a0 << 0x10;
  block_12:
  var_a0_2 = (s16) (var_a0 >> 0x10);

  block_13:
  m2c_initial_frame.view_sp14.value = 0;

  m2c_initial_frame.view_sp10.value = *((arg0 * 2) + (&D_8010B9C8_overlay_001));
  func_80083800_overlay_001(var_a0_2, &m2c_initial_frame.view_sp10.value, &m2c_initial_frame.view_sp10.value);
  m2c_initial_frame.view_sp18.value = ((s16) m2c_initial_frame.view_sp10.value) + (*((s32 *) (((char *) new_var) + 0x28)));
  m2c_initial_frame.view_sp20.value = m2c_initial_frame.view_sp14.value + (*((s32 *) (((char *) new_var) + 0x30)));
  m2c_initial_frame.view_sp1C.value = *((s32 *) (((char *) new_var) + 0x2C));
  temp_v0 = func_80069F4C_overlay_001(&m2c_initial_frame.view_sp18.value, *((u16 *) (((char *) new_var) + 0x136)), (*((u8 *) (((char *) (&D_800E10D0_overlay_001)) + 9))) << 8, 0);
  m2c_initial_frame.view_sp1C.value = temp_v0;
  if (func_801126B0_overlay_001 < temp_v0)
  {
    m2c_initial_frame.view_sp1C.value = func_801126B0_overlay_001;
  }
  temp_v0_2 = func_80066804_overlay_001(&m2c_initial_frame.view_sp18.value, 0, 1 << (*((u8 *) (((char *) new_var) + 0x1A2))), (*((u8 *) (((char *) new_var) + 9))) << 8) & 4;
  if ((*((s32 *) (((char *) (&D_800E10D0_overlay_001)) + 0x2C))) < m2c_initial_frame.view_sp1C.value)
  {
    if ((temp_v0_2 != 0) || ((*((s32 *) (((char *) new_var) + 0x280))) != 0))
    {
      var_s0 = &D_800E1898_overlay_001;
      if (((u32) (&D_800E1898_overlay_001)) < ((u32) (*((u32 *) (((char *) (&D_800C7650_overlay_001)) + 0x20F48)))))
      {
        loop_20:
        temp_v1 = *(s32 *)var_s0;

        if (((temp_v1 & 1) && (!(temp_v1 & 2))) && (var_s0 != (*((s32 *) (((char *) (&D_800E10D0_overlay_001)) + 0x280)))))
        {
          if (func_8004F7A4_overlay_001(&m2c_initial_frame.view_sp18.value, var_s0, *((u16 *) (((char *) new_var) + 0x136)), 1) == 0)
          {
            m2c_initial_frame.view_sp1C.value = *((s32 *) (((char *) new_var) + 0x2C));
            if (func_8004F7A4_overlay_001(&m2c_initial_frame.view_sp18.value, var_s0, *((u16 *) (((char *) new_var) + 0x136)), 1) == 0)
            {
              m2c_initial_frame.view_sp1C.value = (s32) ((s16) m2c_initial_frame.view_unksp1E.value);
              goto block_26;
            }
          }
          goto block_31;
        }
        block_26:
        var_s0 += 0x368;

        if (((u32) var_s0) >= ((u32) (*((u32 *) (((char *) (&D_800C7650_overlay_001)) + 0x20F48)))))
        {
          goto block_27;
        }
        goto loop_20;
      }
      block_27:
      if (func_8004F844_overlay_001(&m2c_initial_frame.view_sp18.value, &D_800E10D0_overlay_001) == 0)
      {
        if ((*((s32 *) (((char *) new_var) + 0x280))) != 0)
        {
          *((s32 *) (((char *) new_var) + 0x280)) = 0;
        }
        *((s8 *) (((char *) new_var) + 5)) = 8;
        *((s8 *) (((char *) (&D_800E10D0_overlay_001)) + 6)) = 2;
        *((s8 *) (((char *) (&D_800E10D0_overlay_001)) + 7)) = 0;
        return 1;
      }

      return 0;
    }
    return 0;
  }
  block_31:
  return 0;

}

