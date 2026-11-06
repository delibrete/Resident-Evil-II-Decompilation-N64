s32 func_80033634_ovl_01();
s32 func_800377B0_ovl_01(s32, s32, void *, s32);
s32 func_80077D48_ovl_01(s32, void *);
s32 func_80174420_overlay_039(void *);
s32 func_801745CC_overlay_039(void *);
s32 func_801746B4_overlay_039(void *);
s32 func_80174798_overlay_039(void *);
s32 func_80177D04_overlay_039(void *, s32 *);
extern s32 D_800C7650;
extern s32 D_800E10D4;
extern s32 D_8017B078_overlay_039;
extern s32 D_8017B300_overlay_039;
void func_801764E4_overlay_039(void *arg0, s32 *arg1, s32 arg2)
{
  int __repair_literal;
  s32 (*var_v0)(void *, s32 *, s32, s32 *);
  u8 *new_var3;
  s32 *temp_a1;
  s32 *var_a3;
  s32 var_a0;
  u16 temp_v1_6;
  u8 temp_v1_7;
  void *temp_v1;
  void *temp_v1_2;
  void *temp_v1_3;
  char *new_var;
  char *new_var2;
  void *temp_v1_4;
  void *temp_v1_5;
  s32 *phi_a1;
  new_var2 = ((char *) arg0) + 0x234;
  var_a3 = arg1;
  new_var = ((char *) arg0) + 0x2B6;
  if (!((*((u16 *) new_var)) & 0x4000))
  {
    *((u16 *) (((char *) (&D_800C7650)) + 0x2149C)) = (u16) ((*((u16 *) (((char *) (&D_800C7650)) + 0x2149C))) + 1);
    *((u16 *) (((char *) arg0) + 0x2B6)) = (u16) ((*((u16 *) (((char *) arg0) + 0x2B6))) | 0x4000);
  }
  *((u16 *) (((char *) arg0) + 0x2B6)) = (u16) ((*((u16 *) (((char *) arg0) + 0x2B6))) & 0xFDFF);
  if (((*((u8 *) (((char *) (&D_800C7650)) + 0x19A84))) == 5) && ((*((s32 *) (((char *) (&D_800C7650)) + 0x19CD0))) == arg0))
  {
    *((u8 *) (((char *) (&D_800C7650)) + 0x19CEF)) = (u8) ((*((u8 *) (((char *) (&D_800C7650)) + 0x19CEF))) & 0x7F);
    *((u8 *) (((char *) (&D_800C7650)) + 0x19CDC)) = (u8) ((*((u8 *) (((char *) (&D_800C7650)) + 0x19CDC))) & 0xED);
    *((s32 *) (((char *) arg0) + 0)) = (s32) ((*((s32 *) (((char *) arg0) + 0))) & (~0x1004));
    D_800E10D4 = 0x01000000;
    *((s32 *) (((char *) (&D_800C7650)) + 0x19A80)) = (s32) ((*((s32 *) (((char *) (&D_800C7650)) + 0x19A80))) & (~0x1004));
  }
  if ((*((u8 *) (((char *) arg0) + 6))) == 0)
  {
    temp_v1 = *((void **) (((char *) arg0) + 0x234));
    *((s32 *) (((char *) temp_v1) + 0x468)) = (s32) ((*((s32 *) (((char *) temp_v1) + 0x468))) | 0x8000);
    temp_v1_2 = *((void **) (((char *) arg0) + 0x234));
    *((s32 *) (((char *) temp_v1_2) + 0x5E0)) = (s32) ((*((s32 *) (((char *) temp_v1_2) + 0x5E0))) | 0x8000);
    temp_v1_3 = *((void **) new_var2);
    *((s32 *) (((char *) temp_v1_3) + 0x8D0)) = (s32) ((*((s32 *) (((char *) temp_v1_3) + 0x8D0))) | 0x8000);
    temp_v1_4 = *((void **) (((char *) arg0) + 0x234));
    *((s32 *) (((char *) temp_v1_4) + 0xA48)) = (s32) ((*((s32 *) (((char *) temp_v1_4) + 0xA48))) | 0x8000);
    temp_v1_5 = *((void **) (((char *) arg0) + 0x234));
    *((s32 *) (((char *) temp_v1_5) + 0xBC0)) = (s32) ((*((s32 *) (((char *) temp_v1_5) + 0xBC0))) | 0x8000);
  }
  if ((*((u16 *) (((char *) arg0) + 0x1AA))) & 1)
  {
    __repair_literal = 4;
    var_v0 = *((((*((u8 *) (((char *) arg0) + 5))) - 1) * __repair_literal) + (&D_8017B300_overlay_039));
    phi_a1 = var_a3;
    goto block_28;
  }
  temp_v1_6 = *((u16 *) (((char *) arg0) + 0x2B6));
  if (temp_v1_6 & 0x10)
  {
    func_80177D04_overlay_039(arg0, var_a3);
    return;
  }
  if (temp_v1_6 & 2)
  {
    do
    {
      func_800377B0_ovl_01(0x1F40, 0, (*((void **) new_var2)) + 0x38, 0);
    }
    while (0);
    var_a0 = 0xB;
    if (func_80033634_ovl_01() & 1)
    {
      var_a0 = 0xD;
    }
    func_80077D48_ovl_01(var_a0, arg0);
    if (((*((u8 *) (((char *) arg0) + 5))) == 0xA) && (!((*((u16 *) (((char *) arg0) + 0x1AA))) & 0x80)))
    {
      func_80174420_overlay_039(arg0);
    }
    if ((*((u8 *) (((char *) arg0) + 5))) == 0xB)
    {
      func_801745CC_overlay_039(arg0);
    }
    new_var3 = &(*((u8 *) (((char *) arg0) + 5)));
    temp_v1_7 = *new_var3;
    if ((temp_v1_7 == 9) || (temp_v1_7 == 0x11))
    {
      if (!((*((u16 *) (((char *) arg0) + 0x1AA))) & 0x80))
      {
        func_801746B4_overlay_039(arg0);
      }
    }
    if ((*new_var3) == 0xE)
    {
      func_80174798_overlay_039(arg0);
    }
    *((s32 *) (((char *) arg0) + 4)) = 0x07090000;
    return;
  }
  temp_a1 = var_a3;
  var_a3 = &D_8017B078_overlay_039;
  var_v0 = *((((((*new_var3) - 1) * 9) + (*((u8 *) (((char *) arg0) + 0x26E)))) * 4) + (&D_8017B078_overlay_039));
  phi_a1 = temp_a1;
  block_28:
  var_v0(arg0, phi_a1, arg2, var_a3);

}

