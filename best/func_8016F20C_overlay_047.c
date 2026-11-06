extern int D_800E10F8;
extern int D_800E1100;
extern unsigned char D_800E133F;
s32 func_80032C08_ovl_01();
s32 func_80032DEC_ovl_01();
s32 func_80033634_ovl_01();
s32 func_80089D34_ovl_01();
extern char D_800C7650[];
void func_8016F20C_overlay_047(void *arg0, s32 arg1, s32 arg2)
{
  unsigned long temp_a0;
  u16 temp_v0;
  u8 temp_v1;
  temp_v1 = *((u8 *) (((char *) arg0) + 6));
  switch (temp_v1)
  {
    case 0:
      *((s32 *) (((char *) arg0) + 0x1E8)) = 0x02000300;
      *((u8 *) (((char *) arg0) + 6)) = 1U;
      *((u16 *) (((char *) arg0) + 0x1E2)) = -0xB4U;
      temp_v0 = (*((u16 *) (((char *) arg0) + 0x1E0))) + 0xC8;
      *((u16 *) (((char *) arg0) + 0x1E0)) = temp_v0;
      if (((s16) temp_v0) >= 0x12D)
    {
      *((u16 *) (((char *) arg0) + 0x1E0)) = 0x12CU;
    }
      *((s16 *) (((char *) arg0) + 0x1F4)) = 0;
      *((s16 *) (((char *) arg0) + 0x1F6)) = 0;

    case 1:
      func_80032DEC_ovl_01(arg0, D_800E10F8);
      func_80089D34_ovl_01(arg0, arg1, arg2, 0x200);
      func_80032C08_ovl_01(arg0, 0, 0);
      temp_v0 = (*((u16 *) (((char *) arg0) + 0x1E2))) + ((*((s16 *) (((char *) arg0) + 0x1F4))) * 0xF);
      *((u16 *) (((char *) arg0) + 0x1E2)) = temp_v0;
      if (((temp_v0 << 0x10) > 0) && ((*((s16 *) (((char *) arg0) + 0x1F6))) == 0))
    {
      *((s16 *) (((char *) arg0) + 0x1F6)) = 1;
      *((s32 *) (((char *) arg0) + 0x1E8)) = 0x03000700;
    }
      temp_a0 = *((s16 *) (((char *) arg0) + 0x25E));
      *((s16 *) (((char *) arg0) + 0x1F4)) = (s16) (((u16) (*((s16 *) (((char *) arg0) + 0x1F4)))) + 1);
      if (temp_a0 < (*((s32 *) (((char *) arg0) + 0x2C))))
    {
      *((s32 *) (((char *) arg0) + 0x2C)) = (s32) temp_a0;
      *((s32 *) (((char *) arg0) + 4)) = 0x01010000;
      *((u16 *) (((char *) arg0) + 0x1E0)) -= 0x96;
      if (func_80033634_ovl_01(temp_a0) & 1)
      {
        *((s32 *) (((char *) arg0) + 4)) = 0x01070000;
      }
    }
      if ((((u32) (*((u32 *) (((char *) arg0) + 0x28C)))) < 0x2BCU) && (D_800E133F == 0))
    {
      *((s32 *) (((char *) arg0) + 4)) = 0x01040000;
    }
      return;

  }

}

