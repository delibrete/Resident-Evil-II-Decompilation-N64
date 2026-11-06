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
inline static int __repair_inline(s32 a, s32 b)
{
  return a < b;
}

s16 func_8000FEC0();
s32 func_8000FF58();
s32 func_80010500();
extern f64 D_80011E90;
extern s32 D_80011ED8;
extern s32 D_80011EDC;
extern f64 D_80011EE0;
extern f64 D_80011EE8;
void func_8000FA80(void *arg0, u8 arg1)
{
  union 
  {
    unsigned char bytes[128];
    struct 
    {
      unsigned char pad[24];
      u8 value;
    } view_sp18;
    struct 
    {
      unsigned char pad[25];
      u8 value;
    } view_sp19;
    struct 
    {
      unsigned char pad[56];
      s16 value;
    } view_sp38;
    struct 
    {
      unsigned char pad[64];
      s32 value;
    } view_sp40;
    struct 
    {
      unsigned char pad[68];
      s32 value;
    } view_sp44;
  } m2c_initial_frame;
  s32 *var_a2;
  char *var_a0;
  char *var_a0_2;
  f64 temp_fs1;
  f64 var_fs0;
  f64 var_fv1;
  s16 temp_v0_3;
  s16 temp_v0_4;
  s16 temp_v1;
  s16 var_a3;
  s16 var_s2_2;
  s16 var_v1;
  s16 var_v1_2;
  s32 temp_a0;
  s32 temp_a0_2;
  s32 temp_a1;
  s32 temp_a2;
  s32 temp_v0;
  s32 temp_v0_2;
  s32 var_a1;
  s32 var_a1_2;
  s32 var_s0;
  s32 var_s2;
  s32 var_v0;
  s32 var_v1_3;
  s32 var_v1_4;
  u8 *temp_v1_2;
  char *new_var;
  char *var_a0_3;
  char *var_s1;
  u8 *var_s1_2;
  char *var_s1_3;
  void *temp_a3;
  var_s1 = &m2c_initial_frame.view_sp18.value;
  temp_v0 = *((s32 *) (((char *) arg0) + 0x24));
  var_fs0 = *((f64 *) (((char *) arg0) + 0));
  new_var = (char *) arg0;
  if (temp_v0 >= 0)
  {
    goto block_2;
  }
  var_v0 = 6;
  goto block_4;
  block_2:
  if (temp_v0 != 0)
  {
    goto block_5;
  }

  temp_a0 = arg1 & 0xFF;
  var_v0 = 1;
  if (((temp_a0 == 0x67) | (temp_a0 == 0x47)) == 0)
  {
    goto block_5;
  }
  block_4:
  *((s32 *) (new_var + 0x24)) = var_v0;

  block_5:
  temp_v0_3 = func_8000FEC0(&m2c_initial_frame.view_sp38.value, arg0);

  if (temp_v0_3 <= 0)
  {
    goto block_9;
  }
  var_a2 = &D_80011EDC;
  temp_a3 = *((void **) (((char *) arg0) + 8));
  if (temp_v0_3 != 2)
  {
    goto block_8;
  }
  var_a2 = &D_80011ED8;
  block_8:
  *((s32 *) (new_var + 0x14)) = 3;

  *((s8 *) (((char *) temp_a3) + 0)) = (s8) (*((s8 *) (((char *) var_a2) + 0)));
  *((s8 *) (((char *) temp_a3) + 1)) = (s8) (*((s8 *) (((char *) var_a2) + 1)));
  *((s8 *) (((char *) temp_a3) + 2)) = (s8) (*((s8 *) (((char *) var_a2) + 2)));
  return;
  block_9:
  var_a3 = 0;

  if (temp_v0_3 != 0)
  {
    goto block_11;
  }
  m2c_initial_frame.view_sp38.value = 0;
  goto block_65;
  block_11:
  if (!(var_fs0 < 0.0))
  {
    goto block_13;
  }

  var_fs0 = -var_fs0;
  block_13:
  temp_v1 = ((m2c_initial_frame.view_sp38.value * 0x7597) / 100000) - 4;

  m2c_initial_frame.view_sp38.value = temp_v1;
  if (temp_v1 >= 0)
  {
    goto block_20;
  }
  var_v1 = ((-temp_v1) + 3) & (~3);
  m2c_initial_frame.view_sp38.value = -var_v1;
  if (var_v1 <= 0)
  {
    goto block_27;
  }
  var_a0 = &D_80011E90;
  loop_16:
  var_v1 = (s16) (var_v1 >> 1);

  if (!(var_v1 & 1))
  {
    goto block_18;
  }
  var_fs0 *= *(f64 *)var_a0;
  block_18:
  var_a0 += 8;

  if (var_v1 > 0)
  {
    goto loop_16;
  }
  goto block_27;
  block_20:
  if (temp_v1 <= 0)
  {
    goto block_27;
  }

  var_fv1 = D_80011EE0;
  temp_v0_4 = temp_v1 & (~3);
  var_v1_2 = temp_v0_4;
  m2c_initial_frame.view_sp38.value = temp_v0_4;
  if (var_v1_2 <= 0)
  {
    goto block_26;
  }
  var_a0_2 = &D_80011E90;
  loop_23:
  var_v1_2 = (s16) (var_v1_2 >> 1);

  if (!(var_v1_2 & 1))
  {
    goto block_25;
  }
  var_fv1 *= *(f64 *)var_a0_2;
  block_25:
  var_a0_2 += 8;

  if (var_v1_2 > 0)
  {
    goto loop_23;
  }
  block_26:
  var_fs0 /= var_fv1;

  block_27:
  temp_a0 = *((s32 *) (((char *) arg0) + 0x24));

  {
    s32 __repair_value;
    temp_a1 = temp_a0 + 6;
    var_s2 = temp_a1;
  }
  if ((arg1 & 0xFF) != 0x66)
  {
    goto block_29;
  }
  var_s2 = (temp_a0 + 0xA) + m2c_initial_frame.view_sp38.value;
  block_29:
  if (var_s2 < 0x14)
  {
    goto block_31;
  }

  var_s2 = 0x13;
  block_31:
  *(u8 *)var_s1 = 0x30;

  var_s1_2 = var_s1 + 1;
  temp_fs1 = D_80011EE8;
  loop_32:
  var_v1_3 = 1;

  if (var_fs0 > 0.0)
  {
    goto block_34;
  }
  var_v1_3 = 0;
  block_34:
  var_s2 -= 8;

  if (!(__repair_inline(0, var_s2) & var_v1_3))
  {
    goto block_48;
  }
  var_a1 = (s32) var_fs0;
  var_s1_3 = var_s1_2 + 8;
  if (var_s2 <= 0)
  {
    goto block_37;
  }
  var_fs0 = (var_fs0 - ((f64) var_a1)) * temp_fs1;
  block_37:
  var_s0 = 8;

  if (var_a1 <= 0)
  {
    goto block_43;
  }
  var_s0 = 7;
  loop_39:
  if (var_s0 < 0)
  {
    goto block_43;
  }

  func_80010500(&m2c_initial_frame.view_sp40.value, var_a1, 0xA);
  var_s1_3 -= 1;
  *(u8 *)var_s1_3 = m2c_initial_frame.view_sp44.value + 0x30;
  var_a1 = m2c_initial_frame.view_sp40.value;
  var_s0 -= 1;
  if (__repair_inline(0, var_a1))
  {
    goto loop_39;
  }
  goto block_44;
  block_42:
  *(u8 *)var_s1_3 = 0x30;

  block_43:
  var_s0 -= 1;

  block_44:
  if (var_s0 < 0)
  {
    goto block_46;
  }

  var_s1_3 -= 1;
  goto block_42;
  block_46:
  var_s1_2 = var_s1_3 + 8;

  goto loop_32;
  block_48:
  var_s2_2 = (var_s1_2 - 1) - (&m2c_initial_frame.view_sp18.value);

  m2c_initial_frame.view_sp38.value = ((u16) m2c_initial_frame.view_sp38.value) + 7;
  var_s1 = &m2c_initial_frame.view_sp19.value;
  if (m2c_initial_frame.view_sp19.value != 0x30)
  {
    goto block_51;
  }
  loop_50:
  var_s1 += 1;

  m2c_initial_frame.view_sp38.value = ((u16) m2c_initial_frame.view_sp38.value) - 1;
  var_s2_2 -= 1;
  if ((*(u8 *)var_s1) == 0x30)
  {
    goto loop_50;
  }
  block_51:
  temp_a1 = *((s32 *) (((char *) arg0) + 0x24));

  temp_a0_2 = arg1 & 0xFF;
  if (temp_a0_2 != 0x66)
  {
    goto block_53;
  }
  var_a3 = (temp_a1 + 1) + m2c_initial_frame.view_sp38.value;
  goto block_54;
  block_53:
  var_a3 = temp_a1 + ((temp_a0_2 == 0x65) | (temp_a0_2 == 0x45));

  block_54:
  if (var_s2_2 >= var_a3)
  {
    goto block_56;
  }

  var_a3 = var_s2_2;
  block_56:
  if (var_a3 <= 0)
  {
    goto block_65;
  }

  var_v1_4 = 0x30;
  if (var_a3 >= var_s2_2)
  {
    goto block_59;
  }
  var_v1_4 = ((-(((u8) (*((u8 *) (((char *) (&var_s1[var_a3])) + 0)))) >= 0x35U)) & 0x39) | 0x30;
  block_59:
  var_a1_2 = var_a3 - 1;

  var_a0_3 = &(*((u8 *) (((char *) (&var_s1[var_a3])) + (-1))));
  temp_a2 = var_v1_4 & 0xFF;
  if ((*((u8 *) (((char *) (&var_s1[var_a3])) + (-1)))) != temp_a2)
  {
    goto block_61;
  }
  loop_60:
  var_a0_3 -= 1;

  var_a3 -= 1;
  var_a1_2 -= 1;
  if ((*(u8 *)var_a0_3) == temp_a2)
  {
    goto loop_60;
  }
  block_61:
  temp_v1_2 = &var_s1[var_a1_2];

  if ((var_v1_4 & 0xFF) != 0x39)
  {
    goto block_63;
  }
  *temp_v1_2 += 1;
  block_63:
  if (var_a1_2 >= 0)
  {
    goto block_66;
  }

  var_s1 -= 1;
  var_a3 += 1;
  m2c_initial_frame.view_sp38.value = ((u16) m2c_initial_frame.view_sp38.value) + 1;
  block_65:
  block_66:
  func_8000FF58(arg0, arg1 & 0xFF, var_s1, var_a3, (s32) m2c_initial_frame.view_sp38.value);


  return;
}

