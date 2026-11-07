s32 func_80032B8C_ovl_01(void *, s32);
u16 func_80032EA4_ovl_01(void *, s32, s32, s32);
s32 func_80033174_ovl_01(void *, s32 *);
s32 func_800334F8_ovl_01(void *, s32, s32, s32);
s32 func_80059E30_ovl_01(s32, s32);
s32 func_80077D48_ovl_01(s32, void *);
s32 func_80089D34_ovl_01(void *, s32, s32, s32);
s32 func_80170334_overlay_058(void *);
s32 func_80173E84_overlay_058(void *, s32, s32);
s32 func_801740A8_overlay_058(void *arg0, s32);
s32 func_801740FC_overlay_058(void *);
s32 func_8017411C_overlay_058(void *, s32);
extern s32 D_800E10D0;
inline static s32 inline_fn(int arg0)
{
  return func_80059E30_ovl_01(arg0, 0);
}

void func_801708E0_overlay_058(void *arg0, s32 arg1, s32 arg2)
{
  void *new_var;
  s32 var_v1;
  u8 temp_v1;
  u8 var_v0;
  u16 *new_var2;
  new_var2 = (u16 *) (((char *) arg0) + 0x2B6);
  temp_v1 = *((u8 *) (((char *) arg0) + 7));
  switch (temp_v1)
  {
    case 0:
      *((u8 *) (((char *) arg0) + 7)) = 1U;
      *((s32 *) (((char *) arg0) + 0x1E8)) = 0x06000F00;
      func_800334F8_ovl_01(arg0, arg1, arg2, 0);
      func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
      new_var = arg0;
      func_80032B8C_ovl_01(arg0, 0);
      *((u8 *) (((char *) new_var) + 0x25C)) = (u8) ((*((u8 *) (((char *) arg0) + 0x25C))) | 1);
      return;

    case 1:
      func_800334F8_ovl_01(arg0, arg1, arg2, 0);
      func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
      func_80032B8C_ovl_01(arg0, 0);
      if ((*(*((s32 **) (((char *) arg0) + 0x214)))) & 0x10000)
    {
      *((u8 *) (((char *) arg0) + 7)) = 2U;
      do {*new_var2 = 0U;}while(0);
      if (func_80032EA4_ovl_01(arg0, *((s32 *) (((char *) (&D_800E10D0)) + 0x28)), *((s32 *) (((char *) (&D_800E10D0)) + 0x30)), 0x40) != 0)
      {
        *new_var2 = func_80032EA4_ovl_01(arg0, *((s32 *) (((char *) (&D_800E10D0)) + 0x28)), *((s32 *) (((char *) (&D_800E10D0)) + 0x30)), 0x10);
        return;
      }
    }

    default:
      return;

    case 2:
      var_v1 = 0x0B000F00;
      var_v0 = 3;
      block_20:
    *((u8 *) (((char *) arg0) + 7)) = var_v0;

      *((s32 *) (((char *) arg0) + 0x1E8)) = var_v1;
      func_800334F8_ovl_01(arg0, arg1, arg2, 0);
      func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
      return;

    case 3:
      *((u16 *) (((char *) arg0) + 0x66)) = (u16) ((*((u16 *) (((char *) arg0) + 0x66))) + (*new_var2));
      func_800334F8_ovl_01(arg0, arg1, arg2, 0);
      func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
      func_80032B8C_ovl_01(arg0, 0);
      if (((*(*((s32 **) (((char *) arg0) + 0x214)))) & 0x10000) && (func_8017411C_overlay_058(arg0, 4) != 0))
    {
      if ((*((s16 *) (((char *) (&D_800E10D0)) + 0x1F2))) < 0x14)
      {
        if (!(func_80033174_ovl_01(arg0, &D_800E10D0) & 0xFF))
        {
          *((s16 *) (((char *) arg0) + 6)) = 0x100;
          func_80077D48_ovl_01(4, arg0);
          return;
        }
        goto block_13;
      }
      block_13:
      if (inline_fn(0xA) != 2)
      {
        func_801740A8_overlay_058(arg0, func_80033174_ovl_01(arg0, &D_800E10D0) & 0xFF);
      }
      else
      {
        func_801740FC_overlay_058(arg0);
      }

      func_80077D48_ovl_01(0xD, arg0);
      func_80173E84_overlay_058(arg0, 6, 1);
      goto block_17;
    }
      block_17:
    if ((*(*((s32 **) (((char *) arg0) + 0x214)))) & 0x20000)
    {
      *((u8 *) (((char *) arg0) + 7)) = 4U;
      return;
    }

      break;

    case 4:
      var_v1 = 0x0C000F00;
      var_v0 = 5;
      goto block_20;

    case 5:
      func_800334F8_ovl_01(arg0, arg1, arg2, 0);
      if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x100) != 0)
    {
      *((s8 *) (((char *) arg0) + 5)) = 2;
      *((s16 *) (((char *) arg0) + 6)) = 0;
      *((s8 *) (((char *) arg0) + 0x2B4)) = 0;
      *((s8 *) (((char *) arg0) + 0x2B8)) = 0x3C;
      func_80077D48_ovl_01(0xA, arg0);
      func_80170334_overlay_058(arg0);
    }
      func_80032B8C_ovl_01(arg0, 0);
      break;

  }

}

