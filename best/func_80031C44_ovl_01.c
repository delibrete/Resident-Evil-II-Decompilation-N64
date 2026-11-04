s32 func_80004CFC(s32 arg0, void *arg1, u16, s32);
s32 func_80004EC4(u16, s32);
s32 func_80005E84(u16, s32);
s32 func_80005EE8(u16, s32);
s32 func_80031BB0_ovl_01(void *, s32);
s32 func_800824E8_ovl_01(s32);
s32 func_800837DC_ovl_01(s32 *, s32);
s32 func_80087504_ovl_01(s32, void *, void *, u16, void *);
s32 func_800876CC_ovl_01(s32, void *, void *, u16, void *);
s32 func_80087898_ovl_01(void *, u16);
extern s32 D_800B861C_ovl_01;
extern s32 D_800B8620_ovl_01;
extern s32 D_800C7650_ovl_01;
extern s32 D_800E8E58_ovl_01;
extern u8 D_800EB178_ovl_01;
extern s32 D_800EB188_ovl_01;
extern s32 D_800EB230_ovl_01;
extern s32 D_80126C20_ovl_01;
extern s32 D_80128750_ovl_01;
extern s32 D_801289B0_ovl_01;
extern s32 D_80128C10_ovl_01;
extern s32 D_80128E70_ovl_01;
s32 func_80031C44_ovl_01(s32 arg0, void *arg1, s32 arg2)
{
  s32 *var_a0;
  s32 temp_a0;
  s32 temp_s2;
    
  s32 temp_s2_2;
  volatile long new_var2;
  
  
  
  s32 var_a0_2;
  s32 var_s2;
  s32 var_s2_2;
  s32 var_v0;
  u16 temp_s1;
  u16 temp_s4;
  u8 var_s0;
  void *temp_s0;
  s32 new_var;
  void *temp_v0;
  void *temp_v0_2;
  var_s0 = *((u8 *) (((char *) arg1) + 8));
  if (((u32) (var_s0 - 0x50)) < 0xBU)
  {
    if (var_s0 & 1)
    {
      if (func_800837DC_ovl_01(&D_800E8E58_ovl_01, 6) != 0)
      {
        var_s0 = 0x59;
      }
    }
    else
    {
      if (func_800837DC_ovl_01(&D_800E8E58_ovl_01, 5) != 0)
      {
        var_s0 = 0x58;
      }
      if (func_800837DC_ovl_01(&D_800E8E58_ovl_01, 0xF) != 0)
      {
        var_s0 = 0x5A;
      }
    }
  }
  if ((*((s32 *) (((char *) (&D_800C7650_ovl_01)) + 0x19A5C))) >= 0)
  {
    if ((*((u8 *) (((char *) (&D_800C7650_ovl_01)) + 0x19A88))) == 0xE)
    {
      var_a0 = &D_80128C10_ovl_01;
    }
    else
    {
      var_a0 = &D_80128750_ovl_01;
    }
  }
  else
    if (((u32) ((*((u8 *) (((char *) (&D_800C7650_ovl_01)) + 0x19A88))) - 0xC)) < 2U)
  {
    var_a0 = &D_80128E70_ovl_01;
  }
  else
  {
    var_a0 = &D_801289B0_ovl_01;
  }
  temp_s2 = (arg2 + 7) & (~7);
  temp_v0 = ((((var_s0 - 0x10) * 4) + 2) * 2) + var_a0;
  temp_s1 = *((u16 *) (((char *) temp_v0) + 0));
  new_var2 = arg0;
  temp_s4 = *((u16 *) (((char *) temp_v0) + 2));
  *((s32 *) (((char *) arg1) + 0xC4)) = temp_s2;
  temp_s2_2 = temp_s2 + func_80004CFC(arg0, arg1, *(((temp_s4 + 7) * 2) + (&D_80126C20_ovl_01)), temp_s2);
  func_800824E8_ovl_01(*((s32 *) (((char *) arg1) + 0xC4)));
  temp_s0 = arg1 + 0x78;
  var_s2_2 = func_80031BB0_ovl_01(temp_s0, temp_s2_2);
  func_80087898_ovl_01(temp_s0, temp_s1);
  if ((((((new_var2 == 0x1C) || (arg0 == 0x1F)) || (arg0 == 0x1E)) || (arg0 == 0x21)) || (arg0 == 0x22)) || (new_var2 == 0x24))
  {
    D_800EB230_ovl_01 = -2;
  }
  if (((s32) temp_s1) >= 0)
  {
    if (arg1)
    {
      temp_v0_2 = arg1 + 0x78;
    }
    else
    {
      temp_v0_2 = arg1 + 0x78;
    }
    if (new_var2 == 0x4A)
    {
      var_s2_2 = func_800876CC_ovl_01(var_s2_2, arg1 + 0xB8, arg1 + 0xBC, temp_s1, temp_v0_2);
    }
    else
    {
      var_s2_2 = func_80087504_ovl_01(var_s2_2, arg1 + 0xB8, arg1 + 0xBC, temp_s1, temp_v0_2);
    }
  }
  else
  {
    *((s32 *) (((char *) arg1) + 0xB8)) = 0;
    *((s32 *) (((char *) arg1) + 0xBC)) = 0;
    *((s16 *) (((char *) arg1) + 0xD4)) = 0;
    *((s16 *) (((char *) arg1) + 0xD6)) = 0;
  }
  temp_s2_2 = (var_s2_2 + 7) & (~7);
  *((s32 *) (((char *) arg1) + 0xDC)) = -1;
  *((s32 *) (((char *) arg1) + 0x218)) = temp_s2_2;
  var_s2_2 = (func_80005E84(*(((temp_s4 + 1) * 2) + (&D_80126C20_ovl_01)), temp_s2_2) + 7) & (~7);
  *((s32 *) (((char *) arg1) + 0x1A4)) = var_s2_2;
  temp_s2_2 = (func_80005EE8(*(((temp_s4 + 2) * 2) + (&D_80126C20_ovl_01)), var_s2_2) + 7) & (~7);
  *((s32 *) (((char *) arg1) + 0x220)) = temp_s2_2;
  temp_s2 = (func_80005E84(*(((temp_s4 + 3) * 2) + (&D_80126C20_ovl_01)), temp_s2_2) + 7) & (~7);
  *((s32 *) (((char *) arg1) + 0x21C)) = temp_s2;
  temp_s2_2 = (func_80005EE8(*(((temp_s4 + 4) * 2) + (&D_80126C20_ovl_01)), temp_s2) + 7) & (~7);
  *((s32 *) (((char *) arg1) + 0x228)) = temp_s2_2;
  temp_s2 = (func_80005E84(*(((temp_s4 + 5) * 2) + (&D_80126C20_ovl_01)), temp_s2_2) + 7) & (~7);
  *((s32 *) (((char *) arg1) + 0x224)) = temp_s2;
  var_s2 = (func_80005EE8(*(((temp_s4 + 6) * 2) + (&D_80126C20_ovl_01)), temp_s2) + 7) & (~7);
  var_a0_2 = 0;
  if (D_800EB178_ovl_01 != 0xFF)
  {
    var_v0 = 0 & 0xFFFF;
    loop_32:
    if ((*((u8 *) (((char *) arg1) + 8))) != (&D_800EB178_ovl_01)[var_v0])
    {
      var_a0_2 += 1;
      var_v0 = var_a0_2 & 0xFFFF;
      if ((&D_800EB178_ovl_01)[var_a0_2 & 0xFFFF] != 0xFF)
      {
        goto loop_32;
      }
    }

    temp_a0 = var_a0_2 & 0xFFFF;
    if ((&D_800EB178_ovl_01)[temp_a0] != 0xFF)
    {
      *((s32 *) (((char *) arg1) + 0x258)) = (new_var = var_s2);
      var_s2 = ((var_s2 + func_80004EC4(*((temp_a0 * 2) + (&D_800EB188_ovl_01)), var_s2)) + 7) & (~7);
    }
    else
    {
      goto block_36;
    }
  }
  else
  {
    block_36:
    *((s32 *) (((char *) arg1) + 0x258)) = 0;

  }
  return var_s2;
}

