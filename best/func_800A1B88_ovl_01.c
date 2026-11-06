s32 func_8009FE58_ovl_01();
s32 func_800A0298_ovl_01();
s32 func_800A03A4_ovl_01();
s32 func_800A04B8_ovl_01();
s32 func_800A0668_ovl_01();
s32 func_800A0820_ovl_01(u32, s32 *);
s32 func_800A8278_ovl_01(s32, u8, s32 *, s32 *);
s8 func_800A8304_ovl_01(u8);
s32 func_800B22AC_ovl_01(s32);
extern void *D_8013BC20;
extern s32 D_8013BC30;
extern s32 D_80143BF0;
extern s8 D_80143BF4;
extern s32 *D_80143BF8;
extern s32 D_80147F40;
extern s32 D_80147F44;
typedef struct { int value; } __repair_field_0;
void func_800A1B88_ovl_01(void)
{
  s32 *var_s2;
  s32 temp_a0;
  s32 temp_s4;
  s32 temp_s5;
  s32 temp_s6;
  s32 var_a0;
  u32 *temp_a0_2;
  u32 *temp_a1;
  u32 temp_lo;
  u32 temp_v0;
  s32 *new_var;
  u32 temp_v0_2;
  u32 var_s7;
  void **temp_v1_2;
  void *temp_s1;
  void *temp_v1;
  void *var_s0;
  if (D_80147F40 != 0)
  {
    var_s7 = 0;
    new_var = &D_80143BF0;
    var_s2 = &D_8013BC30;
    do
    {
      if ((*((u8 *) (((char *) var_s2) + 0xFC0))) != 0)
      {
        D_80143BF8 = var_s2;
        ((__repair_field_0 *)new_var)->value = var_s7;
        D_80143BF4 = func_800A8304_ovl_01(*((u8 *) (((char *) var_s2) + 0xFC4)));
        if (((*((s32 *) (((char *) D_80143BF8) + 0xF68))) != 0) && ((*(*((s32 **) (((char *) D_80143BF8) + 0xF6C)))) != (-1)))
        {
          loop_5:
          temp_a1 = *((s32 **) (((char *) D_80143BF8) + 0xF6C));

          if (((u32) ((*((s32 *) (((char *) D_80143BF8) + 0xF74))) + (*((s32 *) (((char *) D_80143BF8) + 0x120))))) >= ((u32) (((__repair_field_0 *)temp_a1)->value)))
          {
            temp_a0 = *((s32 *) (((char *) temp_a1) + 4));
            *((s32 *) (((char *) D_80143BF8) + 0x124)) = temp_a0;
            /*__repair_pointer_balance*/if ((unsigned long)new_var & 0x100) {
func_800A8278_ovl_01(temp_a0, *((u8 *) (((char *) new_var) + 3)), D_80143BF8, &D_80143BF0);
} else {
func_800A8278_ovl_01(temp_a0, *((u8 *) (((char *) new_var) + 3)), D_80143BF8, &D_80143BF0);
}
            temp_a0_2 = *((u32 **) (((char *) D_80143BF8) + 0xF6C));
            *((u32 **) (((char *) D_80143BF8) + 0xF6C)) = (u32 *) (temp_a0_2 + 8);
            if ((*((s32 *) (((char *) temp_a0_2) + 8))) != (-1))
            {
              goto loop_5;
            }
          }
        }
        var_a0 = ((s32) (D_80147F40 << 0x10)) / ((s32) D_80147F44);
        temp_lo = (((u32) ((((*((s32 *) (((char *) D_80143BF8) + 0x124))) * 0xC00) / 60) * var_a0)) >> 3) * (*((u16 *) (((char *) D_80143BF8) + 0xFC2)));
        *((s32 *) (((char *) D_80143BF8) + 0x118)) = (s32) ((temp_lo >> 8) & 0xFFFF);
        temp_v0 = temp_lo >> 0x18;
        *((u32 *) (((char *) D_80143BF8) + 0x11C)) = temp_v0;
        *((s32 *) (((char *) D_80143BF8) + 0x120)) = (s32) (((s32) temp_v0) >> 1);
        if ((*((s32 *) (((char *) D_80143BF8) + 0xF68))) != 0)
        {
          var_a0 = (s32) (*((u32 *) (((char *) D_80143BF8) + 0x11C)));
          temp_v0_2 = (*((s32 *) (((char *) D_80143BF8) + 0xF70))) + (*((s32 *) (((char *) D_80143BF8) + 0x118)));
          *((s32 *) (((char *) D_80143BF8) + 0xF70)) = (s32) (temp_v0_2 & 0xFFFF);
          *((s32 *) (((char *) D_80143BF8) + 0xF74)) = (s32) ((*((s32 *) (((char *) D_80143BF8) + 0xF74))) + ((temp_v0_2 >> 0x10) + var_a0));
        }
        temp_s6 = func_800A0820_ovl_01((u32) var_a0, D_80143BF8);
        temp_s5 = func_8009FE58_ovl_01();
        func_800A04B8_ovl_01();
        func_800A0668_ovl_01();
        func_800A0298_ovl_01();
        var_s0 = *((void **) (((char *) D_80143BF8) + 0xF7C));
        temp_s4 = func_800A03A4_ovl_01();
        if (var_s0 != NULL)
        {
          do
          {
            temp_s1 = ((__repair_field_0 *)var_s0)->value;
            if (func_800B22AC_ovl_01(*((s32 *) (((char *) var_s0) + 8))) == (-1))
            {
              temp_v1 = ((__repair_field_0 *)var_s0)->value;
              if (temp_v1 != NULL)
              {
                *((void ***) (((char *) temp_v1) + 4)) = (void **) (*((void ***) (((char *) var_s0) + 4)));
              }
              temp_v1_2 = *((void ***) (((char *) var_s0) + 4));
              if (temp_v1_2 != NULL)
              {
                *temp_v1_2 = ((__repair_field_0 *)var_s0)->value;
              }
              else
              {
                *((void **) (((char *) D_80143BF8) + 0xF7C)) = (void *) (((__repair_field_0 *)var_s0)->value);
              }
              ((__repair_field_0 *)var_s0)->value = (void *) D_8013BC20;
              if (D_8013BC20 != NULL)
              {
                *((void **) (((char *) D_8013BC20) + 4)) = var_s0;
              }
              *((void ***) (((char *) var_s0) + 4)) = NULL;
              D_8013BC20 = var_s0;
            }
            var_s0 = temp_s1;
          }
          while (var_s0 != NULL);
        }
        if (((!(temp_s6 & 0xFF)) && (!(temp_s5 & 0xFF))) && (!(temp_s4 & 0xFF)))
        {
          *((u8 *) (((char *) var_s2) + 0xFC0)) = 0U;
          *((s8 *) (((char *) var_s2) + 0xFC1)) = 1;
        }
      }
      do
      {/*__repair_loop_weight*/do {
        var_s7 += 1;} while (0);
      }
      while (0);
      var_s2 += 0xFF8;
    }
    while (var_s7 < 8U);
  }
}

