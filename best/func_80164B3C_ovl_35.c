void func_80164B3C_ovl_35(void *arg0)
{
  char *var_a3_2;
  s32 temp_v0_2;
  s32 var_a3;
  
  u32 var_a2;
  u8 temp_v1;
  union 
  {
    void *pointer;
    s32 value;
  } __repair_phase_storage;
  void *temp_a1_2;
  void *temp_t0;
  void *var_a1;
  
  temp_v1 = *((u8 *) (((char *) arg0) + 7));
  temp_t0 = (char *)(arg0); temp_t0 += (s32)(0x2B4);
  switch (temp_v1)
  {
    case 0:
      *((u8 *) (((char *) arg0) + 7)) = 1U;
      *((s32 *) (((char *) arg0) + 0x1E8)) = 0;
      *((s32 *) (((char *) arg0) + 0x2C)) = (s32) (*((s16 *) (((char *) arg0) + 0x25E)));
      *((s8 *) (((char *) temp_t0) + 6)) = 1;
      *((s8 *) (((char *) temp_t0) + 7)) = 0;
      *((u8 *) (((char *) temp_t0) + 9)) |= 0x80;
      if ((*((s8 *) (((char *) temp_t0) + 0x17))) == 0)
    {
      var_a2 = 3;
      var_a3 = 0x468;
      do
      {
        var_a2 += 1;
        __repair_phase_storage.pointer = (*((s32 *) (((char *) arg0) + 0x234))) + var_a3;
        *((s16 *) (((char *) __repair_phase_storage.pointer) + 0x128)) = 0xFFF;
        *((s16 *) (((char *) __repair_phase_storage.pointer) + 0x126)) = 0xFFF;
        *((s16 *) (((char *) __repair_phase_storage.pointer) + 0x124)) = 0xFFF;
        *((s32 *) (((char *) __repair_phase_storage.pointer) + 0)) |= 0x400;
        var_a3 += 0x178;
      }
      while (var_a2 < 7U);
      *((s8 *) (((char *) temp_t0) + 0x18)) = 0x20;
    }

    case 1:
      var_a2 = 3;
      var_a3 = 0x468;
      do
    {
      var_a2 += 1;
      temp_a1_2 = (*((s32 *) (((char *) arg0) + 0x234))) + var_a3;
      *((u16 *) (((char *) temp_a1_2) + 0x124)) -= 0x80;
      *((u16 *) (((char *) temp_a1_2) + 0x128)) -= 0x80;
      *((u16 *) (((char *) temp_a1_2) + 0x126)) -= 0x80;
      var_a3 += 0x178;
    }
    while (var_a2 < 7U);
      if (((s16) (*((u16 *) (((char *) temp_a1_2) + 0x124)))) < 0x401)
    {
      *((u8 *) (((char *) arg0) + 7)) = 2U;
      return;
    }
      return;

    case 2:
      if ((*((s8 *) (((char *) arg0) + 0x2CB))) == 0)
    {
      var_a2 = 0;
      __repair_phase_storage.value = *((s32 *) (((char *) arg0) + 0x234));
      var_a3_2 = __repair_phase_storage.value + 0x468;
      ;
      temp_a1_2 = __repair_phase_storage.value + 0x1378;
      do
      {
        *((s32 *) var_a3_2) &= ~0x400;
        *((s32 *) (((char *) (__repair_phase_storage.value + 0x4C8)) + 0x54)) = (s32) (*((s32 *) (((char *) temp_a1_2) + 0x54)));
        *((s32 *) (((char *) (__repair_phase_storage.value + 0x4C8)) + 0x5C)) = (s32) (*((s32 *) (((char *) temp_a1_2) + 0x5C)));
        var_a2 += 1;
        *((s32 *) (((char *) (__repair_phase_storage.value + 0x4C8)) + 0x58)) = (s32) (*((s32 *) (((char *) temp_a1_2) + 0x58)));
        var_a3_2 += 0x178;
        *((s32 *) (((char *) (__repair_phase_storage.value + 0x4C8)) + 0x60)) = (s32) (*((s32 *) (((char *) temp_a1_2) + 0x60)));
        temp_v0_2 = *((s32 *) (((char *) temp_a1_2) + 0));
        temp_a1_2 += 0x178;
        *((s32 *) (((char *) (__repair_phase_storage.value + 0x4C8)) + 0)) = temp_v0_2;
        var_a1 += 0x178;
      }
      while (var_a2 < 4U);
      *((u8 *) (((char *) arg0) + 0x2BD)) = 0U;
    }
    else
    {
      *((s8 *) (((char *) arg0) + 0x2CC)) = 0x10;
    }
      *((s32 *) (((char *) arg0) + 4)) = 0x01010000;
      *((u8 *) (((char *) arg0) + 0x2BD)) &= 0x7F;
      *((u8 *) (((char *) arg0) + 0x26F)) &= 0x7F;
      *((u8 *) (((char *) temp_t0) + 0xC)) = (u8) (*((u8 *) (((char *) arg0) + 5)));
      *((u8 *) (((char *) temp_t0) + 0xD)) = (u8) (*((u8 *) (((char *) arg0) + 6)));
      *((u8 *) (((char *) temp_t0) + 0xE)) = (u8) (*((u8 *) (((char *) arg0) + 7)));
      return;

  }

}

