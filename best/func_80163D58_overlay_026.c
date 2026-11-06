extern unsigned char D_800E10D8;
s32 func_80033634_ovl_01();
s32 func_80052C00_ovl_01();
s32 func_80052C9C_ovl_01();
s32 func_80052D40_ovl_01();
s32 func_80077D48_ovl_01();
s32 func_80089D34_ovl_01();
s32 func_80166B18_overlay_026();
extern char D_800E10D0[];
void func_80163D58_overlay_026(s32 *arg0, s32 arg1, s32 arg2)
{
  s32 *temp_v0;
  s32 temp_s1;
  s32 var_a0;
  u32 var_a1;
  void **new_var;
  u8 temp_v1;
  temp_v1 = *((u8 *) (((char *) arg0) + 7));
  new_var = &(*((void **) (D_800E10D0 + 0x234)));
  switch (temp_v1)
  {
    case 0:
      *((u8 *) (((char *) arg0) + 7)) = 1U;
      *((s32 *) (((char *) arg0) + 0x1E8)) = 0x0A003F00;
      func_80052C9C_ovl_01(0x14, 0x78, 0);
      func_80052D40_ovl_01(0x1E, 0x78, 0x28, 0x14);

    case 1:
      if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x40) != 0)
    {
      *((u8 *) (((char *) arg0) + 7)) = 2U;
      *((s32 *) (((char *) arg0) + 0x1E8)) = 0x3F00;
    }
      temp_s1 = *(*((s32 **) (((char *) arg0) + 0x214)));
      if (temp_s1 & 0x10000)
    {
      func_80052C00_ovl_01(0x1E, 0);
      func_80052C9C_ovl_01(3, 0xC8, 5);
      func_80052C9C_ovl_01(3, 0xC8, 0xF);
      func_80052C9C_ovl_01(8, 0xC8, 0x19);
      func_80052D40_ovl_01(0x3C, 0xC8, 0, 0x21);
      *((s32 *) (((char *) (*new_var)) + 0xBC0)) &= ~1;
      var_a1 = 0xF;
      if (D_800E10D8 & 1)
      {
        var_a0 = 0x1608;
        do
        {
          {
            var_a1 += 1;
          }
          temp_v0 = (*new_var) + var_a0;
          *temp_v0 &= ~1;
          var_a0 += 0x178;
        }
        while (var_a1 < 0x13U);
      }
      func_80077D48_ovl_01(7, arg0);
      func_80166B18_overlay_026(&D_800E10D0, 8, 8);
    }
      if (temp_s1 & 0x20000)
    {
      func_80166B18_overlay_026(arg0, (((func_80033634_ovl_01() & 0xFF) % 3) + 0xB) & 0xFF, 4);
      if (!(func_80033634_ovl_01() & 3))
      {
        func_80166B18_overlay_026(arg0, (((func_80033634_ovl_01() & 0xFF) % 3) + 0xB) & 0xFF, 5);
      }
    }
      if (temp_s1 & 0x40000)
    {
      func_80166B18_overlay_026(&D_800E10D0, 8, 8);
      return;
    }
      return;

    case 2:
      *((s8 *) (((char *) arg0) + 0x2B8)) = 1;
      *((s16 *) (((char *) arg0) + 0x2BA)) = 0x100;
      if (!(func_80033634_ovl_01((s32 *) 1) & 0xF))
    {
      func_80166B18_overlay_026(arg0, (((func_80033634_ovl_01(arg0) & 0xFF) % 3) + 0xB) & 0xFF, 4);
    }
      func_80089D34_ovl_01(arg0, arg1, arg2, 0x40);
      break;

  }

}

