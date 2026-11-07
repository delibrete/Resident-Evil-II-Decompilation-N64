s32 func_80040E88_ovl_01(void *, s32);
s32 func_80069F4C_ovl_01(void *, s32, s32, s32);
s32 func_80163448_ovl_21(void *);
s32 func_80036764_ovl_01_510_24(void *, s32, s32, s32);
extern s32 func_801126B0_ovl_01;
typedef struct 
{
  unsigned char pad[44];
  int value;
} __repair_field_2C;
void func_80163058_ovl_21(void *arg0)
{
  u8 state = *((u8 *) (((u8 *) arg0) + 6));
  s32 *s1 = *((s32 **) (((u8 *) arg0) + 0x234));
  void *new_var;
  s32 a0;
  volatile char __repair_result_a0;
  s32 a1;
  s32 __repair_phase_a1;
  if (state < 5)
  {
    if (state == 0)
    {
      *((u16 *) (((u8 *) arg0) + 0x1F4)) = 0;
      *((s16 *) (((u8 *) arg0) + 0x1E2)) = 0x32;
      *((u8 *) (((u8 *) arg0) + 6)) = (*((u8 *) (((u8 *) arg0) + 6))) + 1;
    }
    new_var = arg0;
    *((s16 *) (((u8 *) new_var) + 0x1E2)) += (*((u16 *) (((u8 *) new_var) + 0x1F4))) + 2;
    ((__repair_field_2C *) new_var)->value += *((s16 *) (((u8 *) new_var) + 0x1E2));
    a1 = *((s16 *) (((u8 *) new_var) + 0x1DC));
    a0 = a1 - 0xC00;
    *((u16 *) (((u8 *) new_var) + 0x1F4)) += 2;
    if (a0 < 0)
    {
      a0 = -a0;
    }
    if (a0 >= 0x11)
    {
      if (a1 >= 0xC00)
      {
        a0 = (*((u16 *) (((u8 *) new_var) + 0x1DC))) + 0x10;
      }
      else
      {
        a0 = (*((u16 *) (((u8 *) new_var) + 0x1DC))) - 0x10;
      }
      *((s16 *) (((u8 *) new_var) + 0x1DC)) = a0;
      do
      {
        func_80040E88_ovl_01(((u8 *) new_var) + 0x1D8, *((s32 *) (((u8 *) new_var) + 0x70)));
      }
      while (0);
    }
    __repair_result_a0 = func_80069F4C_ovl_01(((u8 *) new_var) + 0x28, 1, 0x400, 0);
    __repair_phase_a1 = func_801126B0_ovl_01;
    if (__repair_phase_a1 < __repair_result_a0)
    {
      a0 = *((s16 *) (((u8 *) (&func_801126B0_ovl_01)) + 2));
    }
    if (a0 < (-0x1C1F))
    {
      return;
    }
    if (((__repair_field_2C *) new_var)->value < a0)
    {
      ((__repair_field_2C *) new_var)->value = a0;
      *((s32 *) (((u8 *) s1) + 0x2F0)) = 1;
      *((s32 *) (((u8 *) s1) + 0x468)) = 1;
      *((s16 *) (((u8 *) new_var) + 0x1E2)) = 0x14;
    }
  }
  else
    if (state == 5)
  {
    a0 = func_80036764_ovl_01_510_24(new_var, 4, 0, 0);
    *((u8 *) (((u8 *) new_var) + 6)) = (*((u8 *) (((u8 *) new_var) + 6))) + a0;
    ((__repair_field_2C *) new_var)->value += *((s16 *) (((u8 *) new_var) + 0x1E2));
    func_80163448_ovl_21(new_var);
    if ((*((s32 *) (((u8 *) new_var) + 0x30))) == (*((s16 *) (((u8 *) new_var) + 0x38))))
    {
      *((u8 *) (((u8 *) new_var) + 6)) = (*((u8 *) (((u8 *) new_var) + 6))) + 1;
    }
  }
}

