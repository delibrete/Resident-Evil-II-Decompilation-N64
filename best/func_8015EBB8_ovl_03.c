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
s32 func_800439B8_ovl_01();
extern s32 D_800DF650_ovl_01;
extern u16 D_80160B80_ovl_03;
extern s32 D_80160B9C_ovl_03;
extern s32 D_80160BB8_ovl_03;
extern s32 D_8016148C_ovl_03;
void func_8015EBB8_ovl_03(s32 arg0)
{
  s32 var_a3;
  s32 var_s0_2;
  s32 var_t0;
  char *new_var2;
  s32 var_t1;
  long temp_v1;
  char *var_a2;
  u32 var_s1;
  char *new_var;
  u32 var_s1_2;
  volatile unsigned char new_var3;
  u8 temp_v0;
  union 
  {
    void *pointer;
    s32 value;
  } __repair_phase_storage;
  void *temp_a0_2;
  void *temp_a1;
  s32 *new_var4;
  var_s1 = 0;
  var_a2 = &D_80160B80_ovl_03;
  do
  {
    var_a3 = 0;
    loop_2:
    __repair_phase_storage.pointer = (((*(u16 *)var_a2) + var_a3) * 0x28) + (&D_80160BB8_ovl_03);

    temp_v0 = *((u8 *) (((char *) ((&D_80160BB8_ovl_03) - 0x1C)) + 0xB));
    new_var = (char *) __repair_phase_storage.pointer;
    var_a3 += 1;
    *((u8 *) (((char *) __repair_phase_storage.pointer) + 2)) = temp_v0;
    *((u8 *) (new_var + 1)) = temp_v0;
    *((u8 *) (((char *) __repair_phase_storage.pointer) + 0)) = temp_v0;
    if (var_a3 == 0)
    {
      goto loop_2;
    }
    var_s1 += 1;
    var_a2 += 2;
  }
  while (var_s1 < 3U);
  var_s0_2 = 0;
  var_t1 = 0x4B0;
  var_a3 = 0x370;
  var_t0 = 0x3C0;
  do
  {
    if (arg0 == 0)
    {
      switch (D_8016148C_ovl_03)
      {
        new_var2 = (char *) (&D_800DF650_ovl_01);
        case 0:
          *((s16 *) (((char *) ((((*((u8 *) (new_var2 + 0x538))) * 0x14) + var_t0) + (&D_80160B9C_ovl_03))) + 0x26)) = 0x100;
          if (var_s0_2 == 0)
        {
          *((s16 *) (((char *) (((*((u8 *) (new_var2 + 0x538))) * 0x14) + (&D_80160B9C_ovl_03))) + 0x396)) = 0;
        }
        else
        {
          *((s16 *) (((char *) ((((*((u8 *) (new_var2 + 0x538))) * 0x14) + var_a3) + (&D_80160B9C_ovl_03))) + 0x26)) = 0;
        }
          break;

        case 1:
          *((s16 *) (((char *) ((((*((u8 *) (new_var2 + 0x538))) * 0x14) + var_a3) + (&D_80160B9C_ovl_03))) + 0x26)) = 0x100;
          if (var_s0_2 == 0)
        {
          *((s16 *) (((char *) (((*((u8 *) (((char *) (&D_800DF650_ovl_01)) + 0x538))) * 0x14) + new_var4)) + 0x3E6)) = 0;
        }
        else
        {
          new_var4 = &D_80160B9C_ovl_03;
          *((s16 *) (((char *) ((((*((u8 *) (((char *) (&D_800DF650_ovl_01)) + 0x538))) * 0x14) + var_t0) + new_var4)) + 0x26)) = 0;
        }
          break;

      }

      *((s16 *) (((char *) ((((*((u8 *) (new_var2 + 0x538))) * 0x14) + var_t1) + new_var4)) + 0x26)) = 0x100;
    }
    else
    {
      *((s16 *) (((char *) ((((*((u8 *) (new_var2 + 0x538))) * 0x14) + var_a3) + new_var4)) + 0x26)) = 0x100;
      new_var3 = 0x538;
      *((s16 *) (((char *) ((((*((u8 *) (new_var2 + 0x538))) * 0x14) + var_t0) + new_var4)) + 0x26)) = 0x100;
      if (var_s0_2 != 0)
      {
        *((s16 *) (((char *) ((((*((u8 *) (((char *) (&D_800DF650_ovl_01)) + 0x538))) * 0x14) + var_t1) + new_var4)) + 0x26)) = 0x100;
      }
      else
      {
        *((s16 *) (((char *) (((*((u8 *) (((char *) (&D_800DF650_ovl_01)) + new_var3))) * 0x14) + new_var4)) + 0x4D6)) = 0;
      }
    }
    var_t1 += 0x28;
    var_t0 += 0x28;
    var_s0_2 += 1;
    var_a3 += 0x28;
  }
  while (var_s0_2 == 0);
  var_s1_2 = 0;
  temp_a1 = (&D_80160BB8_ovl_03) - 0x1C;
  temp_a0_2 = ((&D_80160B80_ovl_03)[((u32) 0) >> 1] * 0x28) + (&D_80160BB8_ovl_03);
  temp_v1 = (*((u8 *) (((char *) temp_a1) + 0xB))) + (*((u8 *) (((char *) temp_a1) + 7)));
  *((s8 *) (((char *) temp_a0_2) + 2)) = temp_v1;
  *((s8 *) (((char *) temp_a0_2) + 1)) = temp_v1;
  *((s8 *) (((char *) temp_a0_2) + 0)) = temp_v1;
  var_s0_2 = 0;
  do
  {
    loop_25:
    __repair_phase_storage.value = (&D_80160B80_ovl_03)[var_s1_2] + var_s0_2;

    var_s0_2 += 1;
    *((s32 *) (new_var2 + 0x204)) = func_800439B8_ovl_01(*((s32 *) (new_var2 + 0x204)), (__repair_phase_storage.value * 0x28) + (&D_80160BB8_ovl_03));
    if (var_s0_2 == 0)
    {
      goto loop_25;
    }
    var_s1_2 += 1;
    var_s0_2 = 0;
  }
  while (var_s1_2 < 3U);
}

