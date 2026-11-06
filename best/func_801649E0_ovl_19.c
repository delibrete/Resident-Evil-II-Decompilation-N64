static inline static u8 __repair_inline(u8 a)
{
  return a;
}

s32 func_80032B8C_ovl_01(void *, s32);
s32 func_80033634_ovl_01();
s32 func_800377B0_ovl_01(s32, s16, void *, s16 *);
s32 func_80077D48_ovl_01(s32, void *);
s32 func_80089D34_ovl_01(void *, s32, s32, s32);
void func_801649E0_ovl_19(void *arg0, s32 arg1, s32 arg2)
{
  s16 sp10;
  s16 sp12;
  s16 sp14;
  s16 temp_a0_2;
  s16 temp_v0;
  s16 temp_v1_5;
  s32 *temp_s0;
  s32 *var_s0;
  s32 *var_v1_2;
  s32 temp_a0;
  s32 temp_v0_2;
  s32 temp_v1_3;
  u16 *new_var;
  s32 temp_v1_6;
  s32 var_a0;
  s32 var_a0_2;
  s32 var_a0_3;
  u8 temp_v1;
  u8 temp_v1_2;
  u8 temp_v1_4;
  void *temp_s2;
  void *var_a2;
  void *var_v1;
  void *new_var2;
  ;
  temp_s2 = *((void **) (((char *) arg0) + 0x208));
  switch (*((u8 *) (((char *) arg0) + 6)))
  {
    new_var2 = arg0;
    case 0:
      *((s32 *) (((char *) new_var2) + 0x1E8)) = (s32) (((func_80033634_ovl_01() & 7) << 0x10) + 0x09000F00);
      *((u8 *) (((char *) new_var2) + 6)) = 1U;
      *((s16 *) (((char *) new_var2) + 0x1F4)) = 0;
      func_800377B0_ovl_01(0x817D0, 0, (*((s32 **) (((char *) new_var2) + 0x234))) + 0x38, NULL);
      temp_v1_2 = __repair_inline(*((u8 *) (((char *) new_var2) + 5)));
      *((s16 *) (((char *) new_var2) + 0x1F2)) = -1;
      *((s8 *) (((char *) new_var2) + 0x207)) = 0;
      if (((((u32) (temp_v1_2 - 9)) < 2U) || ((temp_v1_3 = temp_v1_2 & 0xFF, temp_v1_3 == 0x10))) || (temp_v1_3 == 0x11))
    {
      func_800377B0_ovl_01((((func_80033634_ovl_01() & 0xFF) * 4) + 0xC18) | 0x05040000, *((s16 *) (((char *) new_var2) + 0x66)), new_var2 + 0x14, NULL);
      *((s8 *) (((char *) new_var2) + 0x207)) = 1;
    }
      temp_v1_4 = *((u8 *) (((char *) new_var2) + 5));
      if ((temp_v1_4 == 0xB) || (temp_v1_4 == 0xE))
    {
      func_800377B0_ovl_01((((func_80033634_ovl_01() & 0xFF) * 4) + 0xC18) | 0x040F0000, *((s16 *) (((char *) new_var2) + 0x66)), new_var2 + 0x14, NULL);
      *((s8 *) (((char *) new_var2) + 0x207)) = 1;
    }
      if ((*((u8 *) (((char *) new_var2) + 5))) == 0xC)
    {
      *((u16 *) (((char *) new_var2) + 0x1E0)) = 0U;
      *((s16 *) (((char *) new_var2) + 0x1E4)) = 0;
    }
      func_80077D48_ovl_01(3, new_var2);
      new_var = (u16 *) (((char *) temp_s2) + 6);

    case 1:
      func_80089D34_ovl_01(new_var2, arg1, arg2, 0x100);
      func_80032B8C_ovl_01(new_var2, 0);
      *((u16 *) (((char *) new_var2) + 0x1E0)) = (u16) ((*((u16 *) (((char *) new_var2) + 0x1E0))) - ((*((s16 *) (((char *) new_var2) + 0x1F4))) * 0x14));
      *((s16 *) (((char *) new_var2) + 0x1F4)) = (s16) (((u16) (*((s16 *) (((char *) new_var2) + 0x1F4)))) + 1);
      if (((s16) (*((u16 *) (((char *) new_var2) + 0x1E0)))) < 0)
    {
      *((u8 *) (((char *) new_var2) + 6)) = 2U;
      var_a0 = 0xA;
      var_a2 = *((s32 **) (((char *) new_var2) + 0x234));
      var_s0 = (s32 *) var_a2;
      *((s16 *) (((char *) new_var2) + 0x1F4)) = (s16) (func_80033634_ovl_01() & 7);
      var_v1 = var_s0 + 0x128;
      do
      {
        var_a0 -= 1;
        *var_s0 |= 0x2000;
        *((s16 *) (((char *) var_v1) + (-4))) = 0x1000;
        *((s16 *) (((char *) var_v1) + (-2))) = 0x1000;
        *((s16 *) (((char *) var_v1) + 0)) = 0x1000;
        var_v1 += 0x178;
        var_s0 += 0x178;
      }
      while (var_a0 != 0);
    }
      break;

    case 2:
      temp_v1_5 = *((s16 *) (((char *) new_var2) + 0x1F4));
      if ((temp_v1_5 == 0x1E) || (temp_v1_5 == 0x3C))
    {
      *((s8 *) (((char *) new_var2) + 0x1EA)) = 7;
      *((s32 *) (((char *) new_var2) + 0x1E8)) = (s8) (((u8) (*((s32 *) (((char *) new_var2) + 0x1E8)))) + 1);
    }
      temp_v0 = ((u16) (*((s16 *) (((char *) new_var2) + 0x1F4)))) + 1;
      *((s16 *) (((char *) new_var2) + 0x1F4)) = temp_v0;
      if ((!(temp_v0 & 0x1F)) && ((*((s8 *) (((char *) new_var2) + 0x207))) == 0))
    {
      temp_s0 = *((s32 **) (((char *) new_var2) + 0x234));
      sp10 = (((u32) (func_80033634_ovl_01() & 0xFF)) >> 1) + 0x40;
      sp12 = 0xC8;
      sp14 = 0x40 - (((u32) (func_80033634_ovl_01() & 0xFF)) >> 1);
      func_800377B0_ovl_01(0x805F4, (func_80033634_ovl_01() & 0xFF) * 0x10, temp_s0 + 0x38, &sp10);
    }
      var_a0_2 = 0xA;
      var_a2 = (char *) (*((s32 **) (((char *) new_var2) + 0x234)));
      var_a2 += (s32) 0x128;
      do
    {
      var_a0_2 -= 1;
      temp_v1_6 = (u16) ((*((u16 *) (((char *) var_a2) + 0))) + 0xA);
      *((u16 *) (((char *) var_a2) + (-4))) = (u16) ((*((u16 *) (((char *) var_a2) + (-4)))) + 0xA);
      *((u16 *) (((char *) var_a2) + 0)) = temp_v1_6;
      *((u16 *) (((char *) var_a2) + (-2))) = (u16) ((*((u16 *) (((char *) var_a2) + (-2)))) - 0x28);
      var_a2 += 0x178;
    }
    while (var_a0_2 != 0);
      temp_s0 = *((s32 **) (((char *) new_var2) + 0x234));
      var_a0_3 = 0xA;
      if ((*((u8 *) (((char *) temp_s0) + 0x63))) != 0x20)
    {
      var_v1_2 = temp_s0 + 0x60;
      do
      {
        temp_s0 += 0x178;
        var_a0_3 -= 1;
        *var_v1_2 += 0xFFFEFFFF;
        var_v1_2 += 0x178;
      }
      while (var_a0_3 != 0);
      temp_s0 -= 0x178;
    }
      temp_a0 = *((s32 *) (((char *) temp_s2) + 0x18));
      if ((temp_a0 & 0xFF0000) != 0x200000)
    {
      *((s32 *) (((char *) (*((void **) (((char *) new_var2) + 0x208)))) + 0x18)) = (s32) ((temp_a0 + 0xFFFC0000) + 0x03000300);
      *((s8 *) (((char *) temp_s2) + 0x1B)) = 1;
      *((u16 *) (((char *) temp_s2) + 4)) = (u16) ((*((u16 *) (((char *) temp_s2) + 4))) + 0xA);
      *new_var = (u16) ((*new_var) + 0xA);
    }
      if ((*((s16 *) (((char *) temp_s0) + 0x126))) < 0)
    {
      *((u8 *) (((char *) new_var2) + 6)) = 3U;
    }
      func_80089D34_ovl_01(new_var2, arg1, arg2, 0x100);
      break;

    case 3:
      *((s32 *) (((char *) new_var2) + 4)) = 0x07000000;
      break;

  }

  temp_a0 = *((s32 *) (((char *) new_var2) + 0x2C));
  {
    s32 __repair_value;
    __repair_value = temp_a0 + 0x64;
    temp_v0_2 = __repair_value;
  }
  if (temp_a0 < (*((s16 *) (((char *) new_var2) + 0x25E))))
  {
    temp_a0_2 = *((s16 *) (((char *) new_var2) + 0x25E));
    *((s32 *) (((char *) new_var2) + 0x2C)) = temp_v0_2;
    if (temp_v0_2 >= temp_a0_2)
    {
      *((s32 *) (((char *) new_var2) + 0x2C)) = (s32) temp_a0_2;
    }
  }
}

