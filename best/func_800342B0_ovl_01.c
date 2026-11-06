s32 func_80034C0C_ovl_01(void *, s32 *, s16 *, s16);
s32 func_80040E88_ovl_01(void *, void *, u16);
extern s32 D_800C7650_ovl_01;
void func_800342B0_ovl_01(void *arg0, s16 arg1)
{
  volatile unsigned int pad;
  s16 sp10;
  u16 sp12;
  u16 sp14;
  u16 __repair_result_sp14;
  s32 sp18;
  s32 sp1C;
  s32 __repair_result_sp1C;
  s32 sp20;
  s32 sp24;
  s16 temp_a1_2;
  s16 temp_v0;
  s16 temp_v0_3;
  s16 temp_v0_4;
  s32 temp_a2;
  s32 temp_v1_2;
  s32 temp_v1_3;
  s32 var_v0_2;
  u16 temp_a0_2;
  u16 temp_a0_3;
  u16 temp_a0_4;
  u16 temp_a0_5;
  u16 temp_a2_2;
  u16 temp_a2_3;
  u16 temp_s2;
  int var_a1;
  int var_a1_2;
  u16 var_v0;
  void *temp_a0;
  void *temp_a1;
  void *temp_s0;
  union 
  {
    void *pointer;
    s32 value;
  } __repair_phase_storage;
  void *var_a0;
  void *var_a0_2;
  void *var_v1;
  if (!((*((u8 *) (((char *) arg0) + 0x25C))) & 1))
  {
    __repair_phase_storage.pointer = *((void **) (((char *) arg0) + 0x254));
    temp_a1 = *((void **) (((char *) arg0) + 0x234));
    temp_s2 = *((u16 *) (((char *) temp_a1) + 0x5A));
    temp_a0 = (*((s32 *) (((char *) __repair_phase_storage.pointer) + 0x234))) + ((*((u8 *) (((char *) __repair_phase_storage.pointer) + 0x25D))) * 0x178);
    sp18 = *((s32 *) (((char *) temp_a0) + 0x4C));
    __repair_result_sp1C = *((s32 *) (((char *) temp_a0) + 0x50));
    sp20 = *((s32 *) (((char *) temp_a0) + 0x54));
    sp24 = *((s32 *) (((char *) temp_a0) + 0x58));
    temp_s0 = temp_a1 + ((*((u8 *) (((char *) arg0) + 0x25D))) * 0x178);
    if ((*((u8 *) (((char *) arg0) + 0x25C))) & 4)
    {
      temp_v0 = *((s16 *) (((char *) arg0) + 0x20E));
      sp1C = (s32) temp_v0;
      temp_a1_2 = *((s16 *) (((char *) arg0) + 0x20C));
      sp18 = (s32) temp_a1_2;
      sp20 = (s32) (*((s16 *) (((char *) arg0) + 0x210)));
      var_a0 = temp_s0 + 0x4C;
      if ((temp_v0 & 0xFFFF) == 0x8000)
      {
        var_v1 = (*((s32 *) (((char *) temp_a0) + 0x234))) + ((*((u8 *) (((char *) temp_a0) + 0x25D))) * 0x178);
        temp_a0 = *((void **) (((char *) (((temp_a1_2 * 4) + (&D_800C7650_ovl_01)) + (0x10000 | 0x8000))) + 0x1D38));
        if (temp_a1_2 == 0x15)
        {
          var_v1 = (*((void **) (((char *) arg0) + 0x234))) + ((*((u8 *) (((char *) arg0) + 0x25D))) * 0x178);
        }
        sp18 = *((s32 *) (((char *) var_v1) + 0x4C));
        sp1C = *((s32 *) (((char *) var_v1) + 0x50));
        sp20 = *((s32 *) (((char *) var_v1) + 0x54));
        sp24 = *((s32 *) (((char *) var_v1) + 0x58));
        goto block_6;
      }
    }
    else
    {
      block_6:
      var_a0 = temp_s0 + 0x4C;

    }
    func_80034C0C_ovl_01(var_a0, &sp18, &sp10, (s16) (arg1 + temp_s2));
    if ((*((u8 *) (((char *) arg0) + 0x25C))) & 8)
    {
      sp10 = 0;
      sp12 = temp_s2 + (((u16) (*((s16 *) (((char *) arg0) + 0x20E)))) + arg1);
      sp14 = (u16) (*((s16 *) (((char *) arg0) + 0x210)));
    }
    if ((*((u8 *) (((char *) arg0) + 0x25C))) & 0x40)
    {
      if ((*((s16 *) (((char *) arg0) + 0x210))) == 0)
      {
        *((s16 *) (((char *) arg0) + 0x210)) = 1;
        *((s16 *) (((char *) arg0) + 0x20E)) = (s16) (temp_s2 + ((*((u16 *) (((char *) temp_s0) + 0x138))) + (arg1 - 0x80)));
      }
      sp12 = (u16) (*((s16 *) (((char *) arg0) + 0x20E)));
    }
    if ((*((u8 *) (((char *) arg0) + 0x25C))) & 2)
    {
      sp12 = temp_s2 + (arg1 + (*((u16 *) (((char *) temp_s0) + 0x5A))));
    }
    if ((*((u8 *) (((char *) arg0) + 0x25C))) & 0x10)
    {
      __repair_result_sp14 = *((u16 *) (((char *) temp_s0) + 0x5C));
    }
    if ((arg0 == __repair_phase_storage.pointer) && (!((*((u8 *) (((char *) arg0) + 0x25C))) & 0x80)))
    {
      sp12 = temp_s2 + (arg1 + (*((u16 *) (((char *) temp_s0) + 0x5A))));
      sp14 = *((u16 *) (((char *) temp_s0) + 0x5C));
    }
    var_a1 = *((u16 *) (((char *) temp_s0) + 0x134));
    __repair_result_sp14 = *((u16 *) (((char *) temp_s0) + 0x138));
    if ((*((u8 *) (((char *) arg0) + 0x25C))) & 0x80)
    {
      var_a1 = (u16) (*((u8 *) (((char *) temp_s0) + 0x13C)));
    }
    temp_a2 = (((s16) sp12) - arg1) - ((s16) temp_s2);
    if ((((s16) __repair_result_sp14) * 2) < ((temp_a2 + ((s16) __repair_result_sp14)) & 0xFFF))
    {
      __repair_phase_storage.value = arg1 + temp_s2;
      if (temp_a2 & 0x800)
      {
        var_v0 = __repair_phase_storage.value - __repair_result_sp14;
      }
      else
      {
        var_v0 = __repair_result_sp14 + __repair_phase_storage.value;
      }
      sp12 = var_v0;
    }
    __repair_result_sp14 = *((u16 *) (((char *) temp_s0) + 0x130));
    temp_a2_2 = __repair_result_sp14 - var_a1;
    temp_v1_2 = var_a1 + (var_v0 - (__repair_result_sp14 + (temp_s2 + (arg1 + (*((u16 *) (((char *) temp_s0) + 0x5A)))))));
    *((u16 *) (((char *) temp_s0) + 0x130)) = temp_a2_2;
    if (!(temp_v1_2 & 0x800))
    {
      *((u16 *) (((char *) temp_s0) + 0x130)) = (u16) (temp_a2_2 + (var_a1 * 2));
    }
    if ((temp_v1_2 & 0xFFF) < (((s32) (var_a1 << 0x10)) >> 0xF))
    {
      *((u16 *) (((char *) temp_s0) + 0x130)) = (u16) (var_v0 - (temp_s2 + (arg1 + (*((u16 *) (((char *) temp_s0) + 0x5A))))));
      if ((*((u8 *) (((char *) arg0) + 0x25C))) & 0x40)
      {
        temp_v0_3 = ((u16) (*((s16 *) (((char *) arg0) + 0x20C)))) - 1;
        *((s16 *) (((char *) arg0) + 0x20C)) = temp_v0_3;
        var_v0_2 = arg1 << 0x10;
        if ((temp_v0_3 << 0x10) == 0)
        {
          *((u8 *) (((char *) arg0) + 0x25C)) = 0x12U;
          var_v0_2 = arg1 << 0x10;
        }
        *((s16 *) (((char *) arg0) + 0x20E)) = (s16) (temp_s2 + (arg1 + (((s16) temp_s2) - ((*((s16 *) (((char *) arg0) + 0x20E))) - ((var_v0_2 >> 0x10) + 0x80)))));
      }
    }
    *((u16 *) (((char *) temp_s0) + 0x5A)) = (u16) ((*((u16 *) (((char *) temp_s0) + 0x5A))) + (*((u16 *) (((char *) temp_s0) + 0x130))));
    if ((*((u8 *) (((char *) arg0) + 0x25C))) & 0x20)
    {
      if ((*((s16 *) (((char *) arg0) + 0x210))) == 0)
      {
        *((s16 *) (((char *) arg0) + 0x210)) = 1;
        *((s16 *) (((char *) arg0) + 0x20E)) = (s16) (*((u16 *) (((char *) temp_s0) + 0x13A)));
      }
      sp14 = (u16) (*((s16 *) (((char *) arg0) + 0x20E)));
    }
    var_a1_2 = *((u16 *) (((char *) temp_s0) + 0x136));
    temp_a0_4 = *((u16 *) (((char *) temp_s0) + 0x13A));
    if ((*((u8 *) (((char *) arg0) + 0x25C))) & 0x80)
    {
      var_a1_2 = (u16) (*((u8 *) (((char *) temp_s0) + 0x13D)));
    }
    if ((((s16) temp_a0_4) * 2) < ((((s16) sp14) + ((s16) temp_a0_4)) & 0xFFF))
    {
      if (sp14 & 0x800)
      {
        sp14 = -((s16) temp_a0_4);
      }
      else
      {
        sp14 = temp_a0_4;
      }
    }
    temp_a0_5 = *((u16 *) (((char *) temp_s0) + 0x132));
    temp_a2_3 = temp_a0_5 - var_a1_2;
    temp_v1_3 = var_a1_2 + (temp_a0_4 - ((*((u16 *) (((char *) temp_s0) + 0x5C))) + temp_a0_5));
    *((u16 *) (((char *) temp_s0) + 0x132)) = temp_a2_3;
    if (!(temp_v1_3 & 0x800))
    {
      *((u16 *) (((char *) temp_s0) + 0x132)) = (u16) (temp_a2_3 + (var_a1_2 * 2));
    }
    if ((temp_v1_3 & 0xFFF) >= (((s32) (var_a1_2 << 0x10)) >> 0xF))
    {
      var_a0_2 = temp_s0 + 0x58;
    }
    else
    {
      *((u16 *) (((char *) temp_s0) + 0x132)) = (u16) (temp_a0_4 - (*((u16 *) (((char *) temp_s0) + 0x5C))));
      if (!((*((u8 *) (((char *) arg0) + 0x25C))) & 0x20))
      {
        var_a0_2 = temp_s0 + 0x58;
      }
      else
      {
        if (((s16) sp14) != 0)
        {
          temp_v0_4 = ((u16) (*((s16 *) (((char *) arg0) + 0x20C)))) - 1;
          *((s16 *) (((char *) arg0) + 0x20C)) = temp_v0_4;
          if ((temp_v0_4 << 0x10) == 0)
          {
            *((u8 *) (((char *) arg0) + 0x25C)) = 0x12U;
          }
          *((s16 *) (((char *) arg0) + 0x20E)) = 0;
        }
        var_a0_2 = temp_s0 + 0x58;
        if (((*((u8 *) (((char *) arg0) + 0x25C))) & 0x20) && (((s16) sp14) == 0))
        {
          *((s16 *) (((char *) arg0) + 0x20E)) = (s16) (*((u16 *) (((char *) temp_s0) + 0x13A)));
        }
      }
    }
    *((u16 *) (((char *) temp_s0) + 0x5C)) = (u16) ((*((u16 *) (((char *) temp_s0) + 0x5C))) + (*((u16 *) (((char *) temp_s0) + 0x132))));
    func_80040E88_ovl_01(var_a0_2, temp_s0 + 8, temp_a2_3);
    *((u16 *) (((char *) temp_s0) + 0x5A)) = (u16) ((*((u16 *) (((char *) temp_s0) + 0x5A))) - (*((u16 *) (((char *) temp_s0) + 0x130))));
    *((u16 *) (((char *) temp_s0) + 0x5C)) = (u16) ((*((u16 *) (((char *) temp_s0) + 0x5C))) - (*((u16 *) (((char *) temp_s0) + 0x132))));
  }
}

