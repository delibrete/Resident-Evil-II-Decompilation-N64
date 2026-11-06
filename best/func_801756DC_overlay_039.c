extern unsigned char D_800E8FB2;
extern int D_800E10AC;
s32 func_80032B8C_ovl_01();
s32 func_800334F8_ovl_01();
s32 func_80033634_ovl_01();
s32 func_80035AAC_ovl_01_108();
s32 func_800377B0_ovl_01();
s32 func_80038EC8_ovl_01();
s32 func_80077D48_ovl_01();
s32 func_80089D34_ovl_01();
extern char D_800C7650[];
void func_801756DC_overlay_039(void *arg0, s32 arg1, s32 arg2)
{
  s16 sp18;
  s16 sp1A;
  s16 sp1C;
  
  s32 var_v1;
  s32 var_v1_2;
  s32 var_v1_3;
  s8 temp_v0;
  u8 temp_v1;
  void *temp_a2;
  union { void * pointer; s32 value; } __repair_phase_storage;
  void *temp_a3_2;
  void *temp_s0;
  void *temp_s0_2;
  void **new_var;
  void *temp_s0_3;
  void *temp_t0;
  void *temp_t0_2;
  void *temp_t0_3;
  temp_v1 = *((u8 *) (((char *) arg0) + 6));
  switch (temp_v1)
  {
    case 0:
      *((s32 *) (((char *) arg0) + 0x1E8)) = 0x01000F00;
      func_800334F8_ovl_01(arg0, arg1, arg2);
      *((s8 *) (((char *) arg0) + 0x1E9)) = (s8) (func_80033634_ovl_01() & 7);
      func_800334F8_ovl_01(arg0, arg1, arg2, 0);
      *((u8 *) (((char *) arg0) + 6)) = 1U;
      new_var = (void **) (((char *) arg0) + 0x234);
      *((u8 *) (((char *) arg0) + 0x26F)) |= 0x80;
      if ((*((u8 *) (((char *) arg0) + 5))) != 0xC)
    {
      temp_v0 = func_80033634_ovl_01() & 1;
      *((s8 *) (((char *) arg0) + 0x207)) = temp_v0;
      if (temp_v0 != 0)
      {
        temp_a2 = *((void **) (((char *) arg0) + 0x234));
        var_v1 = *((s32 *) (((char *) temp_a2) + 0x468));
        temp_t0 = temp_a2 + 0x468;
        if (D_800E8FB2 & 8)
        {
          var_v1 |= 0x4A;
        }
        *((s32 *) (((char *) temp_a2) + 0x468)) = var_v1;
        *((s16 *) (((char *) temp_t0) + 0x138)) = 0;
        *((s16 *) (((char *) temp_t0) + 0x134)) = 0;
        *((s16 *) (((char *) temp_t0) + 0x132)) = -0xA;
        *((s16 *) (((char *) temp_t0) + 0x136)) = 0;
        *((s16 *) (((char *) temp_t0) + 0x13C)) = 0;
        *((s32 *) (((char *) temp_t0) + 0x60)) = 0x10104F;
        *((s16 *) (((char *) temp_t0) + 0x130)) = (s16) ((*((u16 *) (((char *) arg0) + 0x66))) + 0x800);
        func_80038EC8_ovl_01(5, 3, temp_a2 + 0x4A0);
        *((s32 *) (((char *) (*((void **) (((char *) arg0) + 0x234)))) + 0x5E0)) = 0;
        func_80077D48_ovl_01(2, arg0);
        if (func_80033634_ovl_01() & 1)
        {
          __repair_phase_storage.pointer = *((void **) (((char *) arg0) + 0x234));
          var_v1 = *((s32 *) (((char *) __repair_phase_storage.pointer) + 0x758));
          temp_t0_2 = __repair_phase_storage.pointer + 0x758;
          if (D_800E8FB2 & 8)
          {
            var_v1 |= 0x4A;
          }
          temp_s0 = __repair_phase_storage.pointer + 0x790;
          *((s32 *) (((char *) __repair_phase_storage.pointer) + 0x758)) = var_v1;
          *((s16 *) (((char *) temp_t0_2) + 0x138)) = 0;
          *((s16 *) (((char *) temp_t0_2) + 0x134)) = 0;
          *((s16 *) (((char *) temp_t0_2) + 0x132)) = -0xA;
          *((s16 *) (((char *) temp_t0_2) + 0x136)) = 0;
          *((s16 *) (((char *) temp_t0_2) + 0x13C)) = 0;
          *((s32 *) (((char *) temp_t0_2) + 0x60)) = 0x10104F;
          *((s16 *) (((char *) temp_t0_2) + 0x130)) = (s16) ((*((u16 *) (((char *) arg0) + 0x66))) + 0x800);
          func_800377B0_ovl_01(0x1770, 0, temp_s0, NULL);
          func_800377B0_ovl_01(0x08001000, (func_80033634_ovl_01() & 0xFF) * 0x10, temp_s0, NULL);
          func_80038EC8_ovl_01(5, 3, temp_s0);
          temp_a3_2 = *new_var;
          var_v1 = *((s32 *) (((char *) temp_a3_2) + 0x8D0));
          temp_t0_3 = temp_a3_2 + 0x8D0;
          if (D_800E8FB2 & 8)
          {
            var_v1 |= 0x4A;
          }
          temp_s0_2 = temp_a3_2 + 0x908;
          *((s32 *) (((char *) temp_a3_2) + 0x8D0)) = var_v1;
          *((s16 *) (((char *) temp_t0_3) + 0x138)) = 0;
          *((s16 *) (((char *) temp_t0_3) + 0x134)) = 0;
          *((s16 *) (((char *) temp_t0_3) + 0x132)) = -0xA;
          *((s16 *) (((char *) temp_t0_3) + 0x136)) = 0;
          *((s16 *) (((char *) temp_t0_3) + 0x13C)) = 0;
          *((s32 *) (((char *) temp_t0_3) + 0x60)) = 0x10104F;
          *((s16 *) (((char *) temp_t0_3) + 0x130)) = (s16) ((*((u16 *) (((char *) arg0) + 0x66))) + 0x800);
          func_800377B0_ovl_01(0x1770, 0, temp_s0_2, NULL);
          func_80038EC8_ovl_01(5, 3, temp_s0_2);
          *((s32 *) (((char *) (*new_var)) + 0xA48)) = 0;
        }
      }
      sp18 = 0;
      sp1A = 0;
      sp1C = 0;
      temp_s0_3 = (*new_var) + 0x4A0;
      func_800377B0_ovl_01(0x1388, 0, temp_s0_3, &sp18);
      sp1A = 0x190;
      func_800377B0_ovl_01(0x1770, (func_80033634_ovl_01() & 0xFF) * 4, temp_s0_3, &sp18);
      sp1A = 0x320;
      func_800377B0_ovl_01(0xFA0, (func_80033634_ovl_01() & 0xFF) * 0x10, temp_s0_3, &sp18);
      func_800377B0_ovl_01(0x08001000, (func_80033634_ovl_01() & 0xFF) * 0x10, temp_s0_3, NULL);
    }
      if ((*((u8 *) (((char *) arg0) + 0x2D5))) == 0)
    {
      func_80077D48_ovl_01(0xC, arg0);
      *((u8 *) (((char *) arg0) + 0x2D5)) = 0x96U;
    }
      func_80035AAC_ovl_01_108(arg0);

    case 1:
      func_800334F8_ovl_01(arg0, arg1, arg2, 0);
      *((u8 *) (((char *) arg0) + 6)) += func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
      func_80032B8C_ovl_01(arg0, 0);
      return;

    case 2:
      if ((*((u8 *) (((char *) arg0) + 4))) == 3)
    {
      if ((func_80033634_ovl_01() & 3) || ((*((s8 *) (((char *) arg0) + 0x207))) == 0))
      {
        *((s16 *) (((char *) arg0) + 0x1F2)) = 0xA;
        goto block_28;
      }
      goto block_30;
    }
      block_28:
    if (((*((s16 *) (((char *) arg0) + 0x1A8))) != 0) || (D_800E10AC & 0x10000000))
    {
      block_30:
      *((u8 *) (((char *) arg0) + 4)) = 0x07000000;

      *((u16 *) (((char *) arg0) + 0x2B6)) &= 0xFFFB;
      return;
    }

      *((s16 *) (((char *) arg0) + 0x136)) = 0xC8;
      *((s16 *) (((char *) arg0) + 0x138)) = 0xC8;
      *((s16 *) (((char *) arg0) + 0x12C)) = 0xC8;
      *((s16 *) (((char *) arg0) + 0x12E)) = 0xC8;
      *((s16 *) (((char *) arg0) + 0x134)) = -0x15E;
      *((s16 *) (((char *) arg0) + 0x13A)) = 0x15E;
      *((s16 *) (((char *) arg0) + 0x1AA)) = 0x2001;
      *((s32 *) (((char *) arg0) + 0)) = (s32) (((*((s32 *) (((char *) arg0) + 0))) & 0xF3FFFFFF) | 0x04000000);
      __repair_phase_storage.value = 0x01000000;
      if (!(func_80033634_ovl_01(0xF3FFFFFF) & 1))
    {
      __repair_phase_storage.value = 0x01020000;
    }
      *((u8 *) (((char *) arg0) + 4)) = __repair_phase_storage.value;
      *((u8 *) (((char *) arg0) + 0x26F)) &= 0x7F;
      return;

  }

}

