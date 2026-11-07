extern unsigned char D_800E10D4;
extern unsigned char D_800E10D5;
extern short D_800E12C2;
extern short D_800E10FA;
extern short D_800E1102;
extern unsigned short D_800E1206;
extern int D_800E1100;
extern int D_800E10F8;
extern unsigned char D_800E1272;
s16 func_80032D44_ovl_01();
s32 func_80032DEC_ovl_01();
s32 func_80033634_ovl_01();
s32 func_80066804_ovl_01();
s32 func_80083800_ovl_01();
s16 func_8016ECD4_overlay_050();
extern char D_800C7650[];
void func_8016FECC_overlay_050(void *arg0)
{
  s16 sp10;
  volatile short sp14;
  s32 sp18;
  s32 sp20;
  s16 temp_s2;
  s16 temp_v0;
  s16 var_v0_2;
  s16 var_v0_3;
  s16 var_v0_4;
  s16 var_v0_5;
  s16 var_v0_7;
  s16 var_v1;
  s32 var_a1;
  s32 var_v0;
  int new_var;
  u16 var_v0_6;
  u32 temp_a0;
  if (((D_800E10D4 != 5) || (D_800E10D5 != 1)) && (D_800E12C2 >= 0))
  {
    temp_s2 = func_80032D44_ovl_01(*((s16 *) (((char *) arg0) + 0x2A)), *((s16 *) (((char *) arg0) + 0x32)));
    temp_v0 = func_8016ECD4_overlay_050(arg0);
    var_v1 = temp_v0;
    if (var_v1 < 0)
    {
    }
    if ((var_v1 < 0x2AA) && (((u32) (*((u32 *) (((char *) arg0) + 0x28C)))) < 0x7D0U))
    {
      var_v1 = -var_v1;
      if ((D_800E12C2 >= 0x47) || ((sp14 = 0, sp10 = D_800E1206 + 0x12C, func_80083800_ovl_01(temp_s2, &sp10, &sp10), sp20 = sp14 + D_800E1100, sp18 = sp10 + D_800E10F8, var_v0 = 0x01060000, func_80066804_ovl_01(&sp18, 0, 1 << D_800E1272, 0x8000) == 0)))
      {
        goto block_10;
      }
      goto block_60;
    }
    block_10:
    if ((D_800E12C2 < 0x33) && ((*((u8 *) (((char *) arg0) + 0x2C9))) == 0))
    {
      var_v0_2 = temp_v0;
      if (var_v0_2 < 0)
      {
        var_v0_2 = -var_v0_2;
      }
      if ((var_v0_2 >= 0x2AA) || ((var_v0 = 0x01030000, (((u32) (*((u32 *) (((char *) arg0) + 0x28C)))) < 0x898U) == 0)))
      {
        goto block_16;
      }
      goto block_60;
    }

    block_16:
    if (((*((u8 *) (((char *) arg0) + 0x2C6))) != 0) && ((*((u8 *) (((char *) arg0) + 0x2C8))) == 0))
    {
      var_v0_3 = temp_v0;
      if (var_v0_3 < 0)
      {
        var_v0_3 = -var_v0_3;
      }
      if (var_v0_3 < 0x2AA)
      {
        var_v0 = 0x01060000;
        if (((u32) (*((u32 *) (((char *) arg0) + 0x28C)))) >= 0x898U)
        {
          goto block_23;
        }
        goto block_60;
      }
      goto block_23;
    }

    block_23:
    if (D_800E12C2 >= 0x29)
    {
      if ((*((u8 *) (((char *) arg0) + 0x2C6))) == 0)
      {
        temp_a0 = *((u32 *) (((char *) arg0) + 0x28C));
        var_a1 = 0;
        if (temp_a0 < 0x898U)
        {
          var_v0_4 = temp_v0;
          if (temp_v0 < 0)
          {
            var_v0_4 = -temp_v0;
          }
          var_v0_5 = temp_v0;
          if (var_v0_4 < 0x320)
          {
            new_var = var_v0_5 < 0;
            if (new_var)
            {
              var_v0_5 = -var_v0_5;
            }
            if ((var_v0_5 >= 0x24) || (temp_a0 < 0x640U))
            {
              var_a1 = 1;
            }
          }
          if (var_a1 == 0)
          {
            goto block_50;
          }
          if (((*((u16 *) (((char *) arg0) + 0x2C0))) & 0x40) && (func_80033634_ovl_01(temp_a0, var_a1) & 2))
          {
            var_v0_6 = (*((u16 *) (((char *) arg0) + 0x2C0))) & 0xFFDF;
          }
          else
          {
            var_v0_6 = (*((u16 *) (((char *) arg0) + 0x2C0))) | 0x20;
          }
          *((u16 *) (((char *) arg0) + 0x2C0)) = var_v0_6;
          var_v0 = 0x01040000;
          if ((temp_v0 << 0x10) <= 0)
          {
            var_v0 = 0x01050000;
          }
          goto block_60;
        }
      }
      goto block_51;
    }

    if (((*((u8 *) (((char *) arg0) + 0x2C6))) == 0) && (((u32) (*((u32 *) (((char *) arg0) + 0x28C)))) < 0x7D0U))
    {
      var_v0_7 = temp_v0;
      if (temp_v0 < 0)
      {
        var_v0_7 = -temp_v0;
      }
      if (var_v0_7 < 0x1F4)
      {
        *((u16 *) (((char *) arg0) + 0x2C0)) |= 0x20;
        var_v0 = 0x01040000;
        if (temp_v0 <= 0)
        {
          var_v0 = 0x01050000;
        }
        goto block_60;
      }
      block_50:
      func_80032DEC_ovl_01(arg0, *((s16 *) (((char *) arg0) + 0x260)), *((s16 *) (((char *) arg0) + 0x262)), 0x20);

      goto block_51;
    }
    block_51:
    if (((((((*((u8 *) (((char *) arg0) + 0x2C7))) == 0) && (((*((u16 *) (((char *) arg0) + 0x1AA))) & 0x300) != 0x100)) && ((*((u8 *) (((char *) arg0) + 5))) != 2)) && (D_800E12C2 >= 0x51)) && ((func_80033634_ovl_01() & 0x1F) == 8)) && (((u32) ((*((u32 *) (((char *) arg0) + 0x28C))) - 0xC81)) < 0x1F3U))
    {
      temp_s2 = temp_v0;
      if (temp_s2 < 0)
      {
        temp_s2 = -temp_s2;
      }
      var_v0 = 0x01080000;
      if (temp_s2 < 0xC8)
      {
        block_60:
        *((s32 *) (((char *) arg0) + 4)) = var_v0;

      }
    }

  }
}

