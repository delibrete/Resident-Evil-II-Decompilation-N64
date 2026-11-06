s32 func_8004F4AC_overlay_001();
s32 func_8004F514_overlay_001();
s32 func_8004F57C_overlay_001();
extern char D_800B8B40_overlay_001[];
extern char D_800C7650_overlay_001[];
extern s32 D_800E1898_overlay_001;
extern char D_800E7650_overlay_001[];
void func_8004EDB4_ovl_01(void *arg0, void *arg1)
{
  u16 sp10;
  s32 sp14;
  s32 sp28;
  s32 *sp34;
  u32 sp38;
  s32 sp3C;
  s32 *var_t4;
  s32 *var_t6;
  s32 *temp_s2;
  char *var_s0;
  char *var_s0_2;
  char *var_s1;
  s32 temp_a0;
  s32 temp_a0_2;
  s32 temp_a0_3;
  s32 temp_a0_4;
  s32 temp_a0_5;
  s32 temp_a0_6;
  s32 temp_a0_7;
  s32 temp_a0_8;
  s32 temp_a2;
  s32 temp_a2_2;
  s32 temp_a2_3;
  s32 temp_a2_4;
  s32 temp_a2_5;
  s32 temp_a2_6;
  s32 temp_a2_7;
  s32 temp_a3_2;
  s32 temp_a3_3;
  s32 temp_fp;
  s32 temp_s4;
  s32 temp_s6;
  s32 temp_s6_2;
  s32 temp_s7;
  s32 temp_t0;
  s32 temp_t0_4;
  s32 temp_t1;
  s32 temp_t1_3;
  s32 temp_t2;
  s32 temp_t2_2;
  s32 temp_t3;
  s32 temp_t5;
  s32 temp_t5_2;
  s32 temp_v0;
  s32 temp_v0_2;
  s32 temp_v0_3;
  s32 temp_v0_4;
  s32 temp_v0_5;
  s32 temp_v1_2;
  s32 temp_v1_3;
  s32 temp_v1_4;
  s32 temp_v1_5;
  void *new_var;
  s32 var_a1;
  s32 var_a1_2;
  s32 var_a1_3;
  s32 var_a1_4;
  s32 var_s4;
  s32 var_t7;
  s32 var_v0;
  s32 var_v1;
  s32 var_v1_2;
  u16 temp_a3_4;
  u16 temp_t0_2;
  u16 temp_t3_2;
  u16 temp_t4;
  u16 temp_t6;
  u32 temp_a1;
  u32 temp_a3;
  u32 temp_a3_5;
  u32 temp_t0_3;
  u32 temp_t0_5;
  u32 temp_t1_2;
  u32 temp_t8;
  u32 temp_v1;
  void *temp_s3;
  void *var_s1_2;
  sp10 = M2C_UNALIGNED32(*((s32 *) (D_800B8B40_overlay_001 + 0)));
  sp14 = M2C_UNALIGNED32(*((s32 *) (D_800B8B40_overlay_001 + 4)));
  sp10 += *((u16 *) (((char *) arg0) + 0x136));
  if (((!((*((s32 *) (((char *) arg0) + 0))) & 0x40)) && ((temp_s3 = arg0 + 0x120, ((*((s32 *) (((char *) arg1) + 0))) & 2) == 0))) && ((temp_v0 = func_8004F57C_overlay_001(arg0), *((s32 *) (((char *) arg0) + 0x280)) = temp_v0, temp_s2 = arg1 + 0x120, temp_v0 == arg1)))
  {
    temp_t0 = *((s32 *) (((char *) arg1) + 0x120));
    temp_a2 = *((s32 *) (((char *) temp_s2) + 8));
    temp_s6 = -((s32) (((u16) (*((u16 *) (((char *) temp_s3) + 0xC)))) >> 1));
    var_t7 = temp_s6 + (*((u16 *) (((char *) temp_s2) + 0xC)));
    temp_a3 = var_t7 * 2;
    temp_s6_2 = temp_s6 + (*((u16 *) (((char *) temp_s2) + 0xE)));
    temp_fp = temp_t0 - (*((s32 *) (((char *) arg0) + 0x120)));
    temp_a1 = temp_s6_2 * 2;
    temp_s7 = temp_a2 - (*((s32 *) (((char *) temp_s3) + 8)));
    var_s4 = temp_a3 < ((u32) (temp_fp + var_t7));
    if (temp_a1 < ((u32) (temp_s7 + temp_s6_2)))
    {
      var_s4 |= 2;
    }
    temp_v1 = (temp_t0 - ((*((s16 *) (((char *) arg0) + 0x3A))) + (*((s16 *) (((char *) temp_s3) + 0x10))))) + var_t7;
    temp_t8 = temp_a3 < temp_v1;
    sp38 = temp_v1;
    sp38 = temp_t8;
    if (temp_a1 < ((u32) ((temp_a2 - ((*((s16 *) (((char *) arg0) + 0x3E))) + (*((s16 *) (((char *) temp_s3) + 0x12))))) + temp_s6_2)))
    {
      sp38 = temp_t8 | 2;
    }
    if (var_s4 & 1)
    {
      var_s0 = &D_800E1898_overlay_001;
      var_v0 = var_s4 & 2;
      if (((u32) (&D_800E1898_overlay_001)) < ((u32) (*((u32 *) (D_800C7650_overlay_001 + 0x20F48)))))
      {
        var_s1 = (char *) D_800E1898_overlay_001;
        var_s1 += (s32) 0x12C;
        loop_10:
        if (var_s0 != arg1)
        {
          temp_a0 = *((s32 *) var_s0);
          if ((temp_a0 & 0x101) == 0x101)
          {
            var_t6 = &D_800E7650_overlay_001;
            if ((!(temp_a0 & 2)) && ((sp34 = var_s0 + 0x120, ((*((s32 *) (((char *) temp_s2) + 4))) - (*((u16 *) (((char *) temp_s2) + 0x1A)))) == ((*((s32 *) (((char *) var_s1) + (-8)))) - (*((u16 *) (((char *) var_s1) + 0xE)))))))
            {
              temp_t6 = *((u16 *) (((char *) temp_s2) + 0xE));
              sp3C = (s32) temp_t6;
              temp_t0_2 = *((u16 *) (((char *) var_s1) + 2));
              temp_t3 = *((s32 *) (((char *) var_s1) + (-4)));
              temp_t2 = *((s32 *) (((char *) temp_s2) + 8));
              temp_a2_2 = (temp_t6 + temp_t0_2) - (*((u16 *) (((char *) temp_s3) + 0xC)));
              if ((((((u32) ((temp_t3 - temp_t2) + temp_a2_2)) < ((u32) (temp_a2_2 * 2))) && ((temp_t5 = *((s32 *) (((char *) temp_s3) + 8)), temp_t1 = temp_t3 - temp_t5, (((u32) (temp_t0_2 * 2)) < ((u32) (temp_t1 + temp_t0_2))) == 0))) && ((temp_a2_3 = *((s32 *) (((char *) arg1) + 0x120)), temp_v1_2 = *((s32 *) (((char *) var_s1) + (-0xC))), temp_v0_2 = ((*((u16 *) (((char *) temp_s2) + 0xC))) + (*((u16 *) (((char *) var_s1) + 0)))) + 0xC8, (((u32) (temp_v0_2 * 2)) < ((u32) ((temp_v1_2 - temp_a2_3) + temp_v0_2))) == 0))) && (((temp_a2_3 - temp_v1_2) ^ temp_fp) > 0))
              {
                temp_a3_2 = -((s32) (((u16) (*((u16 *) (((char *) temp_s3) + 0xE)))) >> 1));
                temp_a2_4 = temp_a3_2 + temp_t6;
                temp_a3_3 = temp_a3_2 + temp_t0_2;
                temp_t0_3 = temp_a2_4 * 2;
                temp_t1_2 = temp_a3_3 * 2;
                var_a1 = ((u32) ((temp_t2 - temp_t5) + temp_a2_4)) < temp_t0_3;
                if (((u32) (temp_t1 + temp_a3_3)) < temp_t1_2)
                {
                  var_a1 |= 2;
                }
                if (var_a1 == 3)
                {
                  temp_a0_2 = (*((s16 *) (((char *) arg0) + 0x3E))) + (*((s16 *) (((char *) temp_s3) + 0x12)));
                  var_a1_2 = temp_t0_3 < ((u32) ((temp_t2 - temp_a0_2) + temp_a2_4));
                  if (temp_t1_2 < ((u32) ((temp_t3 - temp_a0_2) + temp_a3_3)))
                  {
                    var_a1_2 |= 2;
                  }
                  if (var_a1_2 != 0)
                  {
                    goto block_82;
                  }
                }
                else
                {
                  if ((sp38 != 0) || (!(var_a1 & 1)))
                  {
                    var_s4 = 2;
                    if (var_a1 != 1)
                    {
                      temp_a0_3 = (*((s16 *) (((char *) arg0) + 0x3E))) + (*((s16 *) (((char *) temp_s3) + 0x12)));
                      if ((((u32) ((temp_t2 - temp_a0_3) + temp_a2_4)) >= temp_t0_3) || (((u32) (((*((s32 *) (((char *) sp34) + 8))) - temp_a0_3) + temp_a3_3)) >= temp_t1_2))
                      {
                        if ((temp_s7 ^ (temp_t2 - (*((s32 *) (((char *) sp34) + 8))))) < 0)
                        {
                          sp28 = var_t7;
                          func_8004F4AC_overlay_001(arg0, temp_s2, temp_fp, var_t7);
                        }
                        goto block_33;
                      }
                      goto block_77;
                    }
                    do { func_8004F514_overlay_001(arg0, sp34, (*((s32 *) (((char *) sp34) + 8))) - temp_t5, temp_s6_2); } while (0);
                    return;
                  }
                  goto block_81;
                }
              }
              else
              {
                goto block_32;
              }
            }
            else
            {
              goto block_34;
            }
          }
          else
          {
            goto block_33;
          }
        }
        else
        {
          block_32:
          block_33:
          var_t6 = &D_800E7650_overlay_001;


          block_34:
          var_s0 += 0x368;

          var_s1 += 0x368;
          if (((u32) var_s0) >= ((u32) (*((u32 *) (((char *) var_t6) + 0xF48)))))
          {
            goto block_35;
          }
          goto loop_10;
        }

      }
      else
      {
        goto block_36;
      }
    }
    else
    {
      block_35:
      var_v0 = var_s4 & 2;

      block_36:
      if ((var_v0 != 0) && ((var_s0_2 = &D_800E1898_overlay_001, (((u32) (&D_800E1898_overlay_001)) < ((u32) (*((u32 *) (D_800C7650_overlay_001 + 0x20F48))))) != 0)))
      {
        var_s1_2 = D_800E1898_overlay_001 + 0x12E;
        loop_39:
        if (var_s0_2 != arg1)
        {
          temp_a0_4 = *((s32 *) (((char *) var_s0_2) + 0));
          if ((temp_a0_4 & 0x101) == 0x101)
          {
            var_t4 = &D_800E7650_overlay_001;
            if (!(temp_a0_4 & 2))
            {
              sp34 = var_s0_2 + 0x120;
              if (((*((s32 *) (((char *) temp_s2) + 4))) - (*((u16 *) (((char *) temp_s2) + 0x1A)))) == ((*((s32 *) (((char *) var_s1_2) + (-0xA)))) - (*((u16 *) (((char *) var_s1_2) + 0xC)))))
              {
                temp_t4 = *((u16 *) (((char *) temp_s2) + 0xC));
                sp3C = (s32) temp_t4;
                temp_a3_4 = *((u16 *) (((char *) var_s1_2) + (-2)));
                temp_t3_2 = *((u16 *) (((char *) temp_s3) + 0xC));
                temp_t2_2 = *((s32 *) (((char *) var_s1_2) + (-0xE)));
                temp_t1_3 = *((s32 *) (((char *) arg1) + 0x120));
                temp_a0_5 = (temp_t4 + temp_a3_4) - temp_t3_2;
                if ((((((u32) ((temp_t2_2 - temp_t1_3) + temp_a0_5)) < ((u32) (temp_a0_5 * 2))) && ((temp_t5_2 = *((s32 *) (((char *) arg0) + 0x120)), temp_t0_4 = temp_t2_2 - temp_t5_2, (((u32) (temp_a3_4 * 2)) < ((u32) (temp_t0_4 + temp_a3_4))) == 0))) && ((temp_a2_5 = *((s32 *) (((char *) temp_s2) + 8)), temp_v1_3 = *((s32 *) (((char *) var_s1_2) + (-6))), temp_v0_3 = ((*((u16 *) (((char *) temp_s2) + 0xE))) + (*((u16 *) (((char *) var_s1_2) + 0)))) + 0xC8, (((u32) (temp_v0_3 * 2)) < ((u32) ((temp_v1_3 - temp_a2_5) + temp_v0_3))) == 0))) && (((temp_a2_5 - temp_v1_3) ^ temp_s7) > 0))
                {
                  temp_a2_6 = -((s32) (temp_t3_2 >> 1));
                  temp_a0_6 = temp_a2_6 + temp_t4;
                  temp_a2_7 = temp_a2_6 + temp_a3_4;
                  temp_a3_5 = temp_a0_6 * 2;
                  new_var = arg0;
                  temp_t0_5 = temp_a2_7 * 2;
                  var_a1_3 = ((u32) ((temp_t1_3 - temp_t5_2) + temp_a0_6)) < temp_a3_5;
                  if (((u32) (temp_t0_4 + temp_a2_7)) < temp_t0_5)
                  {
                    var_a1_3 |= 2;
                  }
                  if (var_a1_3 == 3)
                  {
                    temp_v1_4 = (*((s16 *) (((char *) new_var) + 0x3A))) + (*((s16 *) (((char *) temp_s3) + 0x10)));
                    var_a1_4 = ((u32) ((temp_t1_3 - temp_v1_4) + temp_a0_6)) < temp_a3_5;
                    if (((u32) ((temp_t2_2 - temp_v1_4) + temp_a2_7)) < temp_t0_5)
                    {
                      var_a1_4 |= 2;
                    }
                    if (var_a1_4 != 3)
                    {
                      goto block_78;
                    }
                  }
                  else
                  {
                    var_s4 = 1;
                    if (sp38 == 0)
                    {
                      if (var_a1_3 & 1)
                      {
                        block_77:
                        block_78:
                        func_8004F514_overlay_001(new_var, temp_s2, temp_s7, temp_s6_2);


                        return;
                      }
                      goto block_58;
                    }
                    block_58:
                    if (var_a1_3 == 1)
                    {
                      func_8004F4AC_overlay_001(new_var, sp34, (*((s32 *) (((char *) var_s0_2) + 0x120))) - temp_t5_2, var_t7);
                      return;
                    }

                    temp_v1_5 = (*((s16 *) (((char *) new_var) + 0x3A))) + (*((s16 *) (((char *) temp_s3) + 0x10)));
                    if ((((u32) ((temp_t1_3 - temp_v1_5) + temp_a0_6)) >= temp_a3_5) || (((u32) (((*((s32 *) (((char *) var_s0_2) + 0x120))) - temp_v1_5) + temp_a2_7)) >= temp_t0_5))
                    {
                      if ((temp_fp ^ (temp_t1_3 - (*((s32 *) (((char *) var_s0_2) + 0x120))))) < 0)
                      {
                        sp28 = var_t7;
                        func_8004F514_overlay_001(new_var, temp_s2, temp_s7, temp_s6_2);
                      }
                      goto block_66;
                    }
                    block_81:
                    block_82:
                    func_8004F4AC_overlay_001(new_var, temp_s2, temp_fp, var_t7);


                  }
                }
                else
                {
                  goto block_65;
                }
              }
              else
              {
                goto block_66;
              }
            }
            else
            {
              goto block_67;
            }
          }
          else
          {
            goto block_66;
          }
        }
        else
        {
          block_65:
          block_66:
          var_t4 = &D_800E7650_overlay_001;


          block_67:
          var_s0_2 += 0x368;

          var_s1_2 += 0x368;
          if (((u32) var_s0_2) >= ((u32) (*((u32 *) (((char *) var_t4) + 0xF48)))))
          {
            goto block_68;
          }
          goto loop_39;
        }

      }
      else
      {
        block_68:
        temp_s4 = var_s4 & (sp38 ^ var_s4);

        if (temp_s4 & 1)
        {
          temp_a0_7 = *((s32 *) (((char *) new_var) + 0x28));
          temp_v0_4 = (*((s32 *) (((char *) arg1) + 0x120))) - (*((s16 *) (((char *) temp_s3) + 0x10)));
          if (temp_fp >= 0)
          {
            var_v1 = temp_v0_4 - var_t7;
          }
          else
          {
            var_v1 = temp_v0_4 + var_t7;
          }
          *((s32 *) (((char *) new_var) + 0x28)) = var_v1;
          *((s32 *) (((char *) new_var) + 0x120)) += var_v1 - temp_a0_7;
        }
        if (temp_s4 & 2)
        {
          temp_a0_8 = *((s32 *) (((char *) new_var) + 0x30));
          temp_v0_5 = (*((s32 *) (((char *) temp_s2) + 8))) - (*((s16 *) (((char *) temp_s3) + 0x12)));
          if (temp_s7 >= 0)
          {
            var_v1_2 = temp_v0_5 - temp_s6_2;
          }
          else
          {
            var_v1_2 = temp_v0_5 + temp_s6_2;
          }
          *((s32 *) (((char *) new_var) + 0x30)) = var_v1_2;
          *((s32 *) (((char *) temp_s3) + 8)) += var_v1_2 - temp_a0_8;
        }
        *((s32 *) (((char *) new_var) + 0x280)) = func_8004F57C_overlay_001(new_var, temp_s3);
      }

    }
  }
}

