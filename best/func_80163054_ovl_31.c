s32 func_80032B8C_ovl_01();
s32 func_80032DEC_ovl_01();
s32 func_80032EA4_ovl_01();
s32 func_800334F8_ovl_01();
s32 func_80066804_ovl_01();
s32 func_80077D48_ovl_01();
s32 func_80089D34_ovl_01();
extern char D_800C7650_ovl_01[];
extern s16 D_8016C29A_ovl_31;
extern s16 D_8016C29C_ovl_31;
extern s16 D_8016C29E_ovl_31;
void func_80163054_ovl_31(void *arg0, s32 arg1, s32 arg2)
{
  s32 sp10;
  s32 sp14;
  s32 sp18;
  s32 var_a3;
  s16 var_a1;
  u16 temp_v0;
  u8 temp_v1;
  temp_v1 = *((u8 *) (((char *) arg0) + 6));
  switch (temp_v1)
  {
    case 0:
      *((s32 *) (((char *) arg0) + 0x1E8)) = 0x02001F00;
      *((u8 *) (((char *) arg0) + 6)) = 1U;
      *((u16 *) (((char *) arg0) + 0x1F4)) = 0U;
      D_8016C29E_ovl_31 = 0;
      func_80077D48_ovl_01(0, arg0);

    case 1:
      if (D_8016C29E_ovl_31 != 0)
    {
      var_a3 = -0x10;
      var_a1 = D_8016C29A_ovl_31;
      temp_v0 = D_8016C29C_ovl_31;
      D_8016C29E_ovl_31 = ((u16) D_8016C29E_ovl_31) - 1;
      goto block_8;
    }
      do { func_80032DEC_ovl_01(arg0, *((s16 *) (((char *) arg0) + 0x260)), *((s16 *) (((char *) arg0) + 0x262)), 0x10); } while (0);
      if (func_80032EA4_ovl_01(arg0, *((s16 *) (((char *) arg0) + 0x260)), *((s16 *) (((char *) arg0) + 0x262)), 0x338) != 0)
    {
      var_a1 = *((s16 *) (((char *) arg0) + 0x260));
      temp_v0 = *((s16 *) (((char *) arg0) + 0x262));
      var_a3 = 0x20;
      block_8:
      func_80032DEC_ovl_01(arg0, var_a1, temp_v0, var_a3);

    }
      func_800334F8_ovl_01(arg0, arg1, arg2);
      *((u16 *) (((char *) arg0) + 0x1E0)) += 0xA;
      if ((*((s32 *) (((char *) arg0) + 0x1AC))) & 1)
    {
      temp_v0 = (*((u16 *) (((char *) arg0) + 0x1F4))) + 1;
      *((u16 *) (((char *) arg0) + 0x1F4)) = temp_v0;
      if (((s16) temp_v0) >= 0x5B)
      {
        sp10 = *((s32 *) (((char *) arg0) + 0x120));
        sp14 = *((s32 *) (((char *) arg0) + 0x124));
        sp18 = *((s32 *) (((char *) arg0) + 0x128));
        func_80066804_ovl_01(&sp10, 0x6A4, 1, 0x500);
        if ((*((void **) (D_800C7650_ovl_01 + 0x199B8))) != NULL)
        {
          D_8016C29E_ovl_31 = 8;
          D_8016C29A_ovl_31 = (*((u16 *) (((char *) (*((void **) (D_800C7650_ovl_01 + 0x199B8)))) + 0))) + (((u16) (*((u16 *) (((char *) (*((void **) (D_800C7650_ovl_01 + 0x199B8)))) + 4)))) >> 1);
          D_8016C29C_ovl_31 = (*((u16 *) (((char *) (*((void **) (D_800C7650_ovl_01 + 0x199B8)))) + 2))) + (((u16) (*((u16 *) (((char *) (*((void **) (D_800C7650_ovl_01 + 0x199B8)))) + 6)))) >> 1);
        }
      }
    }
    else
    {
      *((u16 *) (((char *) arg0) + 0x1F4)) = 0U;
    }
      func_80089D34_ovl_01(arg0, arg1, arg2, 0x80);
      func_80032B8C_ovl_01(arg0, 0);
      return;

  }

}

