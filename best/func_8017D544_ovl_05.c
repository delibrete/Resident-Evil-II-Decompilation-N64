s32 func_80043650_ovl_01(s32);
s32 func_8004500C_ovl_01(s32, void *, s32, s32);
s32 func_80084514_ovl_01(s32);
extern s32 D_800DF650;
extern s32 D_8017DDA0_overlay_005;
extern s32 D_8017DDAC_overlay_005;
extern s32 D_8017DECC_overlay_005;
extern s32 D_8017E0C4_overlay_005;
extern u8 D_8017E184_overlay_005;
extern s32 D_8017E4DC_overlay_005;
extern u8 D_8017E53F_overlay_005;
extern s32 D_8017E544_overlay_005;
extern u8 D_8017E54A_overlay_005;
extern u8 D_8017E54C_overlay_005;
extern s32 D_8017E550_overlay_005;
extern void *D_8017E558_overlay_005;
void func_8017D544_ovl_05(void)
{
  int __repair_constant = 8;
  s32 sp10;
  s32 sp18;
  void **sp1C;
  u8 *sp20;
  s32 sp24;
  s32 *sp28;
  s32 *var_t3;
  s16 temp_s0_2;
  s16 temp_s1_2;
  s32 temp_v0_5;
  s32 var_a0;
  s32 var_a0_2;
  s32 var_t2;
  s32 __repair_result_var_t2;
  s32 var_v1;
  s8 temp_s2;
  s8 temp_s3;
  u16 temp_v0_2;
  u16 temp_v0_3;
  u16 var_a3;
  u16 var_s7;
  u8 *temp_v0;
  u8 *var_fp;
  u8 *var_s6;
  u8 *var_t1;
  u8 temp_s0;
  
  u8 temp_s1;
  u8 temp_v0_4;
  u8 temp_v1;
  u8 temp_v1_2;
  void **var_t0;
  void *temp_s4;
  s32 *new_var2;
  void *temp_s5;
  if (D_8017E54A_overlay_005 & 0x20)
  {
    var_a0 = 0x20202;
  }
  else
  {
    var_a0 = 0xFFFDFDFE;
  }
  D_8017E550_overlay_005 += var_a0;
  temp_v0 = &D_8017E184_overlay_005;
  var_fp = (char *) (&D_8017E184_overlay_005);
  var_fp += (s32) 6;
  sp20 = temp_v0;
  sp24 = 0;
  D_8017E54A_overlay_005 += 1;
  if (((unsigned long) temp_v0) & 0x100)
  {
    func_80043650_ovl_01(var_a0);
  }
  else
  {
    func_80043650_ovl_01(var_a0);
  }
  var_t3 = &D_800DF650;
  __repair_result_var_t2 = 0;
  var_t1 = &D_8017E184_overlay_005;
  do
  {
    var_t1 -= __repair_constant;
    var_fp -= __repair_constant;
    if ((*var_t1) & 1)
    {
      temp_v1 = *((u8 *) (((char *) var_fp) + (-5)));
      var_a0_2 = 0;
      if (temp_v1 == D_8017E54C_overlay_005)
      {
        temp_v0 = (char *) (((*((D_8017E54C_overlay_005 * 2) + (&D_8017DDA0_overlay_005))) + (*(D_8017E54C_overlay_005 + (&D_8017E544_overlay_005)))) * 8);
        temp_v0 += (s32) (&D_8017DECC_overlay_005);
        *temp_v0 |= 0x22;
        temp_v1_2 = *var_t1;
        var_t2 = 0x2C808080;
        if (temp_v1_2 & 4)
        {
          var_t2 = 0x2EA07070;
        }
        if (temp_v1_2 & 0x20)
        {
          var_t2 = D_8017E550_overlay_005;
        }
        if (temp_v1_2 & 0x40)
        {
          var_t2 = 0x2EFF5858;
        }
        var_a0_2 = ((D_8017E53F_overlay_005 & 2) == 0) << 0xF;
      }
      else
      {
        if (temp_v1 >= 5U)
        {
          var_t2 = 0x2C606060;
          if (1)
          {
            var_a0_2 = 0x200;
          }
          if ((*((u8 *) (((char *) var_t3) + 0x538))) != 0)
          {
            if (temp_v1 == 6)
            {
              temp_v0_2 = (*((u16 *) (((char *) var_fp) + (-2)))) + 1;
              *((u16 *) (((char *) var_fp) + (-2))) = temp_v0_2;
              if (((s16) temp_v0_2) >= 0x169)
              {
                *((u16 *) (((char *) var_fp) + (-2))) = -0x77U;
              }
            }
            if ((*((u8 *) (((char *) var_fp) + (-5)))) == 7)
            {
              temp_v0_3 = (*((u16 *) (((char *) var_fp) + (-2)))) - 1;
              *((u16 *) (((char *) var_fp) + (-2))) = temp_v0_3;
              if (((s16) temp_v0_3) < (-0x78))
              {
                *((u16 *) (((char *) var_fp) + (-2))) = 0x167U;
              }
            }
          }
        }
        if (D_8017E53F_overlay_005 & 1)
        {
          var_a0_2 = 0;
        }
      }
      if (var_a0_2 & 0xFFFF)
      {
        var_s6 = &D_8017E184_overlay_005;
        temp_v1 = *((u8 *) (((char *) var_fp) + (-3)));
        var_v1 = 0;
        if (temp_v1 != 0)
        {
          do
          {
            if ((*var_s6) == 0xFF)
            {
              var_v1 += 1;
            }
            var_s6 += 1;
          }
          while (temp_v1 != var_v1);
        }
        var_s7 = *((u16 *) (((char *) var_fp) + (-2)));
        var_a3 = *((u16 *) (((char *) var_fp) + 0));
        if ((*var_s6) != 0xFF)
        {
          var_t0 = &D_8017E558_overlay_005;
          sp10 = ((u32) var_t1) < ((u32) (&D_8017E0C4_overlay_005));
          new_var2 = &var_t2;
          do
          {
            temp_s4 = *((void **) (((char *) var_t0) + 0));
            temp_s5 = ((*var_s6) * 4) + (&D_8017DDAC_overlay_005);
            temp_s1 = *((u8 *) (((char *) temp_s5) + 2));
            temp_s0 = *((u8 *) (((char *) temp_s5) + 3));
            sp18 = (s32) var_a3;
            sp1C = var_t0;
            sp20 = var_t1;
            sp24 = *new_var2;
            sp28 = var_t3;
            temp_s3 = (*((u8 *) (((char *) temp_s5) + 0))) + temp_s1;
            temp_s2 = (*((u8 *) (((char *) temp_s5) + 1))) + temp_s0;
            temp_s1_2 = temp_s1 + var_s7;
            temp_s0_2 = temp_s0 + var_a3;
            *((s32 *) (((char *) temp_s4) + 0)) = func_80084514_ovl_01(*new_var2);
            *((u16 *) (((char *) temp_s4) + 4)) = var_s7;
            *((u16 *) (((char *) temp_s4) + 6)) = var_a3;
            *((u8 *) (((char *) temp_s4) + 8)) = (u8) (*((u8 *) (((char *) temp_s5) + 0)));
            *((s16 *) (((char *) temp_s4) + 0xA)) = 0;
            *((s16 *) (((char *) temp_s4) + 0xC)) = temp_s1_2;
            *((u16 *) (((char *) temp_s4) + 0xE)) = var_a3;
            *((s8 *) (((char *) temp_s4) + 0x10)) = temp_s3;
            *((u8 *) (((char *) temp_s4) + 9)) = (u8) (*((u8 *) (((char *) temp_s5) + 1)));
            *((s16 *) (((char *) temp_s4) + 0x12)) = 0x9E;
            *((u16 *) (((char *) temp_s4) + 0x14)) = var_s7;
            *((s16 *) (((char *) temp_s4) + 0x16)) = temp_s0_2;
            *((u8 *) (((char *) temp_s4) + 0x11)) = (u8) (*((u8 *) (((char *) temp_s5) + 1)));
            *((s8 *) (((char *) temp_s4) + 0x19)) = temp_s2;
            *((s16 *) (((char *) temp_s4) + 0x1C)) = temp_s1_2;
            *((s16 *) (((char *) temp_s4) + 0x1E)) = temp_s0_2;
            *((s8 *) (((char *) temp_s4) + 0x20)) = temp_s3;
            *((s8 *) (((char *) temp_s4) + 0x21)) = temp_s2;
            *((s8 *) (((char *) temp_s4) + 3)) = 0;
            *((s16 *) (((char *) temp_s4) + 0x1A)) = 0;
            *((u8 *) (((char *) temp_s4) + 0x18)) = (u8) (*((u8 *) (((char *) temp_s5) + 0)));
            *((s32 **) (((char *) temp_s4) + 0x24)) = &D_8017E4DC_overlay_005;
            var_s6 += 1;
            sp18 = (s32) var_a3;
            sp1C = var_t0;
            sp20 = var_t1;
            sp24 = *new_var2;
            sp28 = var_t3;
            temp_v0_5 = func_8004500C_ovl_01(*((s32 *) (((char *) var_t3) + 0x200)), temp_s4, 0, (s32) var_a3);
            *((s32 *) (((char *) var_t3) + 0x200)) = temp_v0_5;
            *((s32 *) (((char *) var_t0) + (-0x1AA8))) = (s32) ((*((s32 *) (((char *) var_t0) + (-0x1AA8)))) + 0x28);
            var_s7 += *((u8 *) (((char *) temp_s5) + 2));
          }
          while ((*var_s6) != 0xFF);
        }
      }
    }
  }
  while (var_t1 != (&D_8017DECC_overlay_005));
}

