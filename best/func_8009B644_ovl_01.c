s32 func_80042B08_ovl_01();
s32 func_80042B24_ovl_01(s32);
s32 func_8004C24C_ovl_01(s32, s32, void *, s32);
s32 func_8004CDB8_ovl_01(s32);
s32 func_800789BC_ovl_01();
s32 func_8009B854_ovl_01();
s32 func_8009BA0C_ovl_01(s32, s32);
extern s32 D_800C7650_ovl_01;
extern s32 D_800DF650_ovl_01;
extern s32 D_800E7650_ovl_01;
extern s32 D_80113A70_ovl_01;
extern s32 D_80131EC0_ovl_01;
extern s32 D_80131EFC_ovl_01;
extern s32 D_801320AC_ovl_01;
extern s32 D_801320B0_ovl_01;
extern void *D_801320B8_ovl_01;
extern void *D_8013A3D0;
void func_8009B644_ovl_01(void)
{
  s16 temp_v1_3;
  union 
  {
    s32 *pointer;
    s32 value;
  } __repair_phase_storage;
  void *temp_v1;
  void *temp_v1_2;
  __repair_phase_storage.pointer = (s32 *) (((char *) (&D_800C7650_ovl_01)) + 0x19A3C);
  if ((*__repair_phase_storage.pointer) & 0x10000)
  {
    do
    {
      func_8004CDB8_ovl_01(1);
    }
    while ((*__repair_phase_storage.pointer) & 0x10000);
  }
  do
  {
    func_800789BC_ovl_01();
  }
  while (0);
  D_801320B0_ovl_01 = 1;
  __repair_phase_storage.value = ((*((u16 *) (((char *) D_801320B8_ovl_01) + 0x1E0))) & 0x8000) == 0;
  loop_4:
  if ((*((u8 *) (((char *) (&D_80113A70_ovl_01)) + 0xE89))) != 0)
  {
    if (D_801320AC_ovl_01 != 0)
    {
      func_8009B854_ovl_01();
      if (__repair_phase_storage.value != 0)
      {
        func_8009B854_ovl_01();
      }
    }
    func_80042B24_ovl_01(0);
    temp_v1 = *((void **) (((char *) (&D_800DF650_ovl_01)) + 0x200));
    *((void **) (((char *) (&D_800DF650_ovl_01)) + 0x200)) = (void *) ((*((void **) (((char *) (&D_800DF650_ovl_01)) + 0x200))) + 8);
    *((s32 *) (((char *) temp_v1) + 0)) = 0xE3001801;
    *((s32 *) (((char *) temp_v1) + 4)) = 0;
    temp_v1_2 = *((void **) (((char *) (&D_800DF650_ovl_01)) + 0x200));
    *((void **) (((char *) (&D_800DF650_ovl_01)) + 0x200)) = (void *) ((*((void **) (((char *) (&D_800DF650_ovl_01)) + 0x200))) + 8);
    *((s32 *) (((char *) temp_v1_2) + 0)) = 0xE3001A01;
    *((s32 *) (((char *) temp_v1_2) + 4)) = 0x10;
    func_8009BA0C_ovl_01(0xE3001801, 0xE3001A01);
    if (((u32) ((*((u16 *) (((char *) D_8013A3D0) + 0x22A))) - 0x29)) < 0xDBU)
    {
      temp_v1_3 = *((s16 *) (((char *) (&D_800E7650_ovl_01)) + 0x15E6));
      if (temp_v1_3 == 0x32)
      {
        func_8004C24C_ovl_01(0x20, 0xC8, (*((u16 *) (((char *) (&D_80131EFC_ovl_01)) + 0))) + (&D_80131EC0_ovl_01), 0x4000);
      }
      __repair_phase_storage.value = 0x20;
      if (temp_v1_3 == 0x34)
      {
        do
        {
          func_8004C24C_ovl_01(__repair_phase_storage.value, 0xB8, (*((u16 *) (((char *) (&D_80131EFC_ovl_01)) + 2))) + (&D_80131EC0_ovl_01), 0x4000);
        }
        while (0);
        temp_v1 = &D_80131EC0_ovl_01;
        func_8004C24C_ovl_01(__repair_phase_storage.value, 0xC8, (*((u16 *) (((char *) (&D_80131EFC_ovl_01)) + 4))) + temp_v1, 0x4000);
      }
    }
    func_80042B08_ovl_01();
    *((u16 *) (((char *) D_8013A3D0) + 0x22A)) = (u16) ((*((u16 *) (((char *) D_8013A3D0) + 0x22A))) + 1);
    func_8004CDB8_ovl_01(1);
    goto loop_4;
  }

  D_801320B0_ovl_01 = 0;
}

