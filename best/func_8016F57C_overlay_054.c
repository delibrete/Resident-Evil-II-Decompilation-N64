inline static int __repair_inline(s32 a, s32 b)
{
  return a > b;
}

s32 func_80032EA4_ovl_01(void *, s32, s32, s16);
s32 func_80052C00_ovl_01(s32, s32);
s32 func_80052C9C_ovl_01(s32, s32, s32);
s32 func_80173874_overlay_054(void *, s32, s32, s32);
s16 func_80173A94_overlay_054(void *, s32, s32, s32 *);
extern s32 D_800C7650;
extern s32 D_800E10D0;
void func_8016F57C_overlay_054(void *arg0)
{
  char *__repair_addr;
  s32 sp10;
  s32 *var_s2;
  s16 temp_a0;
  s16 temp_s0;
  s32 temp_a0_3;
  s32 temp_v0;
  s32 var_s5;
  char *new_var;
  u16 temp_s4;
  void *temp_s3;
  if ((*((u8 *) (((char *) arg0) + 0x2B4))) != 0)
  {
    var_s2 = &D_800E10D0;
    var_s2 = *((s32 **) (((char *) (&D_800C7650)) + 0x19D3C));
  }
  else
  {
  }
  temp_s3 = arg0 + 0x2B4;
  if ((*((u8 *) (((char *) arg0) + 0x2B4))) != 0)
  {
    var_s5 = (*((s32 *) (((char *) arg0) + 0x290))) & 0x3FFFFFFF;
  }
  else
  {
    var_s5 = *((s32 *) (((char *) arg0) + 0x28C));
  }
  if ((*((s16 *) (((char *) var_s2) + 0x1F2))) >= 0)
  {
    new_var = (char *) temp_s3;
    if ((*((u16 *) (((char *) (&D_800C7650)) + 0x19A78))) & 0x80)
    {
      *((u8 *) (new_var + 9)) = 0x1EU;
      *((u8 *) (new_var + 8)) = 0x1EU;
      return;
    }
    __repair_addr = (char *) ((*((s32 *) (((char *) arg0) + 0x234))) + ((*((u8 *) (((char *) arg0) + 0x25D))) * 0x178));
    temp_s4 = *((u16 *) (((char *) __repair_addr) + 0x5A));
    if (((((*((u8 *) (((char *) arg0) + 0x2B4))) == 0) && ((*((u16 *) (((char *) (&D_800C7650)) + 0x19A78))) & 0x20)) && (!((*((u16 *) (((char *) arg0) + 0x2D4))) & 0x8000))) && ((*((u8 *) (new_var + 0x19))) == 0))
    {
      temp_v0 = func_80032EA4_ovl_01(arg0, *((s32 *) (((char *) var_s2) + 0x28)), *((s32 *) (((char *) var_s2) + 0x30)), (s16) (((*((u8 *) (((char *) arg0) + 0x2CD))) << 0xB) + 0x100)) << 0x10;
      if ((__repair_inline(0xA8D, var_s5) && (temp_v0 == 0)) && ((*((s16 *) (((char *) var_s2) + 0x1F2))) == 0))
      {
        *((s8 *) (((char *) arg0) + 5)) = 6;
        *((s16 *) (((char *) arg0) + 6)) = 0;
        *((s16 *) (((char *) var_s2) + 0x1F2)) = -1;
        *((u8 *) (((char *) arg0) + 0x26F)) = (u8) ((*((u8 *) (((char *) arg0) + 0x26F))) | 0x80);
      }
    }
    else
      if ((((*((u8 *) (new_var + 1))) == 0) || ((*((u8 *) (((char *) (*((void **) (new_var + 0x1C)))) + 0x2CD))) != 0)) || (!((*((u16 *) (((char *) (&D_800C7650)) + 0x19A78))) & 0x20)))
    {
      if ((*((u8 *) (new_var + 9))) == 0)
      {
        temp_s0 = func_80173A94_overlay_054(arg0, 0xB, 1, &sp10);
        temp_a0 = func_80173A94_overlay_054(arg0, 0xB, 0x200, &sp10);
        if ((((((sp10 < 0x5DD) && ((temp_a0 << 0x10) == 0)) && (((0x800 - ((s16) temp_s4)) * temp_s0) >= 0)) && (!((*((u16 *) (((char *) arg0) + 0x2D4))) & 0x8000))) && ((*((u8 *) (((char *) arg0) + 0x2B4))) == 0)) && (!((*((u8 *) (((char *) var_s2) + 0x26F))) & 0x80)))
        {
          *((s8 *) (((char *) arg0) + 5)) = 0xA;
          *((s16 *) (((char *) arg0) + 6)) = 0;
          *((u16 *) (((char *) (&D_800C7650)) + 0x19A78)) = (u16) ((*((u16 *) (((char *) (&D_800C7650)) + 0x19A78))) | 0x80);
          func_80052C00_ovl_01(3, 0);
          func_80052C9C_ovl_01(6, 0x96, 0);
          return;
        }
      }
      *((u16 *) (((char *) arg0) + 0x66)) = (u16) ((*((u16 *) (((char *) arg0) + 0x66))) + temp_s4);
      temp_v0 = func_80173874_overlay_054(arg0, *((s32 *) (((char *) var_s2) + 0x28)), *((s32 *) (((char *) var_s2) + 0x30)), 0x100);
      *((u16 *) (((char *) arg0) + 0x66)) = (u16) ((*((u16 *) (((char *) arg0) + 0x66))) - temp_s4);
      if (((((__repair_inline(0xFA1, var_s5) && ((temp_v0 << 0x10) == 0)) && ((*((u8 *) (new_var + 8))) == 0)) && (!((*((u16 *) (((char *) (&D_800C7650)) + 0x19A78))) & 0x40))) && ((*((u8 *) (((char *) var_s2) + 4))) == 1)) && ((*((u8 *) (((char *) var_s2) + 5))) != 2))
      {
        *((s8 *) (((char *) arg0) + 5)) = 4;
        *((s16 *) (((char *) arg0) + 6)) = 0;
        return;
      }
      *((u16 *) (((char *) arg0) + 0x66)) = (u16) ((*((u16 *) (((char *) arg0) + 0x66))) + temp_s4);
      temp_v0 = func_80173874_overlay_054(arg0, *((s32 *) (((char *) var_s2) + 0x28)), *((s32 *) (((char *) var_s2) + 0x30)), 0x100);
      *((u16 *) (((char *) arg0) + 0x66)) = (u16) ((*((u16 *) (((char *) arg0) + 0x66))) - temp_s4);
      if ((((((u32) (var_s5 - 0xFA0)) < 0x1389U) && ((temp_v0 << 0x10) == 0)) && ((*((u8 *) (new_var + 0xA))) == 0)) && (!((*((u16 *) (((char *) arg0) + 0x2D4))) & 0x8000)))
      {
        *((s8 *) (((char *) arg0) + 5)) = 5;
        *((s16 *) (((char *) arg0) + 6)) = 0;
        *((s8 *) (new_var + 0x26)) = 0;
      }
    }
  }
}

