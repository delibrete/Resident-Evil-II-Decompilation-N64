extern short D_800E10FA;
extern short D_800E1102;
extern int D_800E10F8;
extern int D_800E1100;
extern unsigned char D_800E133F;
s32 func_80032B8C_ovl_01();
s16 func_80032D44_ovl_01();
s32 func_80032DEC_ovl_01();
s32 func_80032EA4_ovl_01();
s32 func_80033634_ovl_01();
s32 func_800377B0_ovl_01();
s32 func_80077D48_ovl_01();
s32 func_80089D34_ovl_01();
extern char D_800C7650[];
extern char D_8017A92C_overlay_039[];
void func_8017615C_overlay_039(void *arg0, s32 arg1, s32 arg2)
{
  s16 sp10;
  char *new_var;
  s16 sp12;
  s16 sp14;
  s32 sp18;
  s32 *new_var3;
  s32 sp1C;
  s16 temp_a2;
  s32 temp_a0;
  int new_var2;
  s32 temp_s0;
  s32 temp_s0_2;
  s32 temp_s1;
  s32 temp_s1_2;
  s32 var_a0;
  s32 var_a2;
  s32 var_s1;
  u8 temp_v0;
  u8 temp_v1;
  sp18 = M2C_UNALIGNED32(*((s32 *) (D_8017A92C_overlay_039 + 0)));
  sp1C = M2C_UNALIGNED32(*((s32 *) (D_8017A92C_overlay_039 + 4)));
  temp_v1 = *((u8 *) (((char *) arg0) + 6));
  new_var3 = &sp18;
  switch (temp_v1)
  {
    case 0:
      temp_v0 = *(new_var3 + (func_80033634_ovl_01() & 7));
      *((u8 *) (((char *) arg0) + 6)) = 1U;
      *((s32 *) (((char *) arg0) + 0x1E8)) = (s32) ((temp_v0 << 0x18) + 0x700);
      *((s16 *) (((char *) arg0) + 0x1F4)) = func_80032D44_ovl_01(*((s16 *) (((char *) arg0) + 0x2A)), *((s16 *) (((char *) arg0) + 0x32)), D_800E10FA);
      temp_a0 = ((*((u8 *) (((char *) arg0) + 0x26E))) % 3) & 0xFF;
      if (temp_a0 != 0)
    {
      temp_s1 = *((s32 *) (((char *) arg0) + 0x234));
      new_var2 = 0x138 - ((func_80033634_ovl_01() & 0xFF) * 4);
      sp10 = 0x100 - ((func_80033634_ovl_01(temp_a0) & 0xFF) * 2);
      sp12 = new_var2;
      sp14 = 0x100 - ((func_80033634_ovl_01() & 0xFF) * 2);
      temp_s0 = func_80033634_ovl_01();
      var_a0 = ((temp_s0 & 1) << 0x10) | (((func_80033634_ovl_01() & 0xFF) * 8) + 0x1B58);
      var_a2 = temp_s1 + 0x38;
      func_800377B0_ovl_01(var_a0, *((s16 *) (((char *) arg0) + 0x1F4)), var_a2, &sp10);
    }
    else
    {
      temp_s1_2 = *((s32 *) (((char *) arg0) + 0x234));
      sp10 = 0x7F - (func_80033634_ovl_01(temp_a0) & 0xFF);
      sp12 = 0x39F - (func_80033634_ovl_01() & 0xFF);
      sp14 = 0x7F - (func_80033634_ovl_01() & 0xFF);
      temp_s0_2 = func_80033634_ovl_01();
      var_a0 = ((temp_s0_2 & 1) << 0x10) | (((func_80033634_ovl_01() & 0xFF) * 8) + 0x17D0);
      var_a2 = temp_s1_2 + 0x1B0;
      func_800377B0_ovl_01(var_a0, *((s16 *) (((char *) arg0) + 0x1F4)), var_a2, &sp10);
    }
      if ((*((u8 *) (((char *) arg0) + 0x2D5))) == 0)
    {
      func_80077D48_ovl_01(0xC, arg0);
      *((u8 *) (((char *) arg0) + 0x2D5)) = 0x96U;
    }
      ;
      *((s16 *) (((char *) arg0) + 0x1F4)) = func_80032D44_ovl_01(*((s16 *) (((char *) arg0) + 0x2A)), *((s16 *) (((char *) arg0) + 0x32)), D_800E10FA, D_800E1102);
      *((s16 *) (((char *) arg0) + 0x1E0)) = (s16) ((func_80033634_ovl_01() & 0x3F) + 0x14);
      temp_a2 = *((s16 *) new_var);
      *((s16 *) (((char *) arg0) + 0x1E4)) = (s16) (0x40 - (func_80033634_ovl_01() & 0x7F));
      func_80032B8C_ovl_01(arg0, ((*((s16 *) (((char *) arg0) + 0x1F4))) - temp_a2) + 0x800, temp_a2);
      *((s16 *) (((char *) arg0) + 0x66)) = (s16) (((u16) (*((s16 *) (((char *) arg0) + 0x66)))) - ((func_80033634_ovl_01() & 0x7F) - 0x40));
      func_80032DEC_ovl_01(arg0, D_800E10F8, D_800E1100, 0x10);

    case 1:
      *((u8 *) (((char *) arg0) + 6)) += func_80089D34_ovl_01(arg0, arg1);
      return;

    case 2:
      *((s32 *) (((char *) arg0) + 4)) = 0x01010000;
      if (func_80033634_ovl_01() & 1)
    {
      *((s32 *) (((char *) arg0) + 4)) = 0x01020000;
    }
      var_s1 = 0;
      if (((func_80032EA4_ovl_01(arg0, D_800E10F8, D_800E1100, 0x200) == 0) && (((u32) (*((u32 *) (((char *) arg0) + 0x28C)))) < 0x1388U)) && (!(D_800E133F & 0x80)))
    {
      var_s1 = (func_80033634_ovl_01() & 7) == 0;
    }
      if (var_s1 != 0)
    {
      *((s32 *) (((char *) arg0) + 4)) = 0x010B0000;
    }
      return;

  }

}

