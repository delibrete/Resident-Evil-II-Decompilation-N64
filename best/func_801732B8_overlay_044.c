static __inline__ u8 __repair_inline(u8 a) { return a; }
s32 func_80077D48_ovl_01(s32, void *);
s32 func_8008A974_ovl_01(void *, s32, s32, s32);
s32 func_8016F4D0_overlay_044(void *);
s32 func_8016F6B4_overlay_044(void *, void *, s32);
s32 func_80172594_overlay_044(void *);
extern s32 D_80173EF8_overlay_044;
void func_801732B8_overlay_044(void *arg0, s32 arg1, s32 arg2)
{
  int __repair_constant = 3;
  s32 var_a3;
  s16 temp_a0;
  s16 temp_v0;
  u8 temp_v1;
  temp_v1 = __repair_inline(*((u8 *) (((char *) arg0) + 7)));
  switch (temp_v1)
  {
    case 0:
      *((u8 *) (((char *) arg0) + 0x26F)) = (u8) ((*((u8 *) (((char *) arg0) + 0x26F))) | 0x80);
      func_80077D48_ovl_01(7, arg0);
      do { func_8016F6B4_overlay_044(arg0, ((*((u8 *) (((char *) arg0) + 0x2CB))) * 8) + (&D_80173EF8_overlay_044), 0); } while (0);
      *((s32 *) (((char *) arg0) + 0x1E8)) = 0x13000000;
      *((s16 *) (((char *) arg0) + 0x1E4)) = 0;
      *((s16 *) (((char *) arg0) + 0x1E0)) = 0;
      *((s16 *) (((char *) arg0) + 0x1E2)) = 0;
      *((u16 *) (((char *) arg0) + 0x2C8)) = (u16) ((*((u16 *) (((char *) arg0) + 0x2C8))) | 2);
      *((u8 *) (((char *) arg0) + 7)) = (u8) ((*((u8 *) (((char *) arg0) + 7))) + 1);
      *((s32 *) (((char *) arg0) + 0x2C)) = (s32) ((*((s32 *) (((char *) arg0) + 0x2C))) + 0x546);

    case 1:
      func_8008A974_ovl_01(arg0, arg1, arg2, 0x1000);
      *((s8 *) (((char *) arg0) + 0x1E9)) = 0;
      if ((*((s32 *) (((char *) arg0) + 0x2C))) >= 0)
    {
      *((s32 *) (((char *) arg0) + 0x2BC)) = 0;
      func_8016F4D0_overlay_044(arg0);
      *((s32 *) (((char *) arg0) + 0x1E8)) = 0x13000000;
      *((s32 *) (((char *) arg0) + 0)) = (s32) ((*((s32 *) (((char *) arg0) + 0))) & (~8));
      *((u8 *) (((char *) arg0) + 7)) = (u8) ((*((u8 *) (((char *) arg0) + 7))) + 1);
      case 2:
        var_a3 = 0x400;

      block_10:
      *((u8 *) (((char *) arg0) + 7)) = (u8) ((*((u8 *) (((char *) arg0) + 7))) + func_8008A974_ovl_01(arg0, arg1, arg2, var_a3));

    }
      break;

    case 3:
      if ((*((s16 *) (((char *) arg0) + 0x1F2))) < 0)
    {
      *((s8 *) (((char *) arg0) + 0x2CE)) = __repair_constant;
      *((u8 *) (((char *) arg0) + 0x26F)) = (u8) ((*((u8 *) (((char *) arg0) + 0x26F))) & 0x7F);
      *((u8 *) (((char *) arg0) + 6)) = (u8) ((*((u8 *) (((char *) arg0) + 6))) + 1);
      *((s32 *) (((char *) arg0) + 0)) = (s32) ((*((s32 *) (((char *) arg0) + 0))) & (~0xC));
    }
    else
    {
      *((s32 *) (((char *) arg0) + 0x1E8)) = 0x10000000;
      *((u8 *) (((char *) arg0) + 7)) = (u8) ((*((u8 *) (((char *) arg0) + 7))) + 1);
      case 4:
        var_a3 = 0x1000;

      goto block_10;
    }
      break;

    case 5:
      *((s8 *) (((char *) arg0) + 0x2CE)) = __repair_constant;
      *((u8 *) (((char *) arg0) + 0x26F)) = (u8) ((*((u8 *) (((char *) arg0) + 0x26F))) & 0x7F);
      *((s32 *) (((char *) arg0) + 0)) = (s32) ((*((s32 *) (((char *) arg0) + 0))) & (~0xC));
      func_80172594_overlay_044(arg0);
      break;

  }

  temp_a0 = *((s16 *) (((char *) arg0) + 0x2E0));
  temp_v0 = (u16) (*((s16 *) (((char *) arg0) + 0x1E2)));{ s16 __repair_value; __repair_value = temp_v0 + 0x30; temp_v0 = __repair_value; }
  if ((((*((s32 *) (((char *) arg0) + 0x2C))) + (*((s16 *) (((char *) arg0) + 0x1E2)))) + 0x48) < temp_a0)
  {
    *((s16 *) (((char *) arg0) + 0x1E2)) = temp_v0;
    *((s32 *) (((char *) arg0) + 0x2C)) = (s32) ((*((s32 *) (((char *) arg0) + 0x2C))) + temp_v0);
    *((s32 *) (((char *) arg0) + 0x28)) = (s32) ((*((s32 *) (((char *) arg0) + 0x28))) + (*((s16 *) (((char *) arg0) + 0x1E0))));
    *((s32 *) (((char *) arg0) + 0x30)) = (s32) ((*((s32 *) (((char *) arg0) + 0x30))) + (*((s16 *) (((char *) arg0) + 0x1E4))));
    return;
  }
  *((s32 *) (((char *) arg0) + 0x2C)) = (s32) temp_a0;
}

