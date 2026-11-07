f32 func_80047DA0_ovl_01(f32, f32);
f32 func_80048090_ovl_01(f32);
extern f32 D_800B8EEC_ovl_01;
extern f64 D_800B8EF0_ovl_01;
extern f32 D_800B8EF8_ovl_01;
extern f32 D_800B8EFC_ovl_01;
extern s32 D_800C7650_ovl_01;
extern s8 D_8010DBA2_ovl_01;
extern s8 D_8010DBA3_ovl_01;
extern s8 D_8010DBA4_ovl_01;
extern s8 D_8010DBA5_ovl_01;
extern s8 D_8010DBA6_ovl_01;
extern s8 D_8010DBA7_ovl_01;
extern s8 D_8010DBA8_ovl_01;
extern s8 D_8010DBA9_ovl_01;
extern f32 D_8010DBAC_ovl_01;
extern s32 D_8010DD08_ovl_01;
extern u16 D_8010DD0A_ovl_01;
extern f32 D_8010DD0C_ovl_01;
extern s32 D_8010DD10_ovl_01;
inline static int inline_fn(u16 *arg0)
{
  return (*arg0) + D_8010DD0A_ovl_01;
}

void func_80055264_ovl_01(void *arg0, s32 arg1)
{
  f32 temp_fs0;
  f32 temp_fs0_2;
  f32 temp_fs1;
  s32 temp_a1;
  f32 new_var3;
  int new_var4;
  s32 temp_a1_2;
  s8 new_var2;
  s32 var_a0_2;
  s32 var_v0;
  s32 var_v0_2;
  s32 var_v0_3;
  s32 var_v0_4;
  s32 *new_var5;
  s32 new_var;
  s8 temp_s0;
  s8 temp_s1;
  s8 var_a0;
  u32 temp_v1;
  u32 temp_v1_2;
  if (((u8) (*((u8 *) (((char *) (&D_800C7650_ovl_01)) + 0x2148E)))) < 2U)
  {
    new_var5 = &D_800C7650_ovl_01;
    var_a0 = *((s8 *) (((char *) new_var5) + 0x18210));
    if (((D_8010DBA9_ovl_01 < (*((s8 *) (((char *) new_var5) + 0x18211)))) || ((*((s8 *) (((char *) new_var5) + 0x18211))) < D_8010DBA8_ovl_01)) && (((var_v0 = var_a0 * 2, (D_8010DBA7_ovl_01 < var_a0) != 0)) || ((var_v0 = var_a0 * 2, 0 != (var_a0 < D_8010DBA8_ovl_01)))))
    {
      var_a0 += var_v0;
    }
    if (D_8010DBA3_ovl_01 < var_a0)
    {
      temp_v1 = ((u32) (arg1 & 0xFF)) >> 3;
      if (temp_v1 != 0)
      {
        var_v0_2 = D_8010DD08_ovl_01 + temp_v1;
      }
      else
      {
        var_v0_2 = D_8010DD08_ovl_01 + 1;
      }
      D_8010DD08_ovl_01 = var_v0_2;
      var_a0_2 = arg1 & 0xFF;
      if (var_a0_2 < D_8010DD08_ovl_01)
      {
        D_8010DD08_ovl_01 = var_a0_2;
      }
    }
    else
    {
      new_var2 = var_a0;
      if (new_var2 < D_8010DBA4_ovl_01)
      {
        temp_v1_2 = ((u32) (arg1 & 0xFF)) >> 3;
        if (temp_v1_2 != 0)
        {
          var_v0_3 = D_8010DD08_ovl_01 - temp_v1_2;
        }
        else
        {
          var_v0_3 = D_8010DD08_ovl_01 - 1;
        }
        D_8010DD08_ovl_01 = var_v0_3;
        ;
        if ((arg1 & 0xFF) < (-D_8010DD08_ovl_01))
        {
          D_8010DD08_ovl_01 = -temp_a1_2;
        }
      }
      else
      {
        new_var4 = (D_8010DBA5_ovl_01 < new_var2) || (new_var2 < D_8010DBA6_ovl_01);
        if (new_var4)
        {
          var_v0_4 = D_8010DBA6_ovl_01 + 0x80;
          if (new_var2 < D_8010DBA6_ovl_01)
          {
            var_a0_2 = (new_var2 - D_8010DBA6_ovl_01) << 8;
            if (var_v0_4 < 0)
            {
              var_v0_4 = D_8010DBA6_ovl_01 + 0x8F;
            }
          }
          else
          {
            var_v0_4 = 0x80 - D_8010DBA5_ovl_01;
            var_a0_2 = (new_var2 - D_8010DBA5_ovl_01) << 8;
            if (var_v0_4 < 0)
            {
              var_v0_4 += 0xF;
            }
          }
          D_8010DD08_ovl_01 = ((s32) (((s32) ((var_a0_2 / ((s32) (var_v0_4 >> 4))) * (arg1 & 0xFF))) / ((s8) D_8010DBA2_ovl_01))) >> 8;
        }
        else
        {
          D_8010DD08_ovl_01 = 0;
        }
      }
    }
    *((u16 *) (((char *) arg0) + 0x66)) = (u16) inline_fn((u16 *) (((char *) arg0) + 0x66));
    return;
  }
  temp_s0 = *((s8 *) (((char *) new_var5) + 0x18210));
  var_v0_4 = (s8)(-(*((s8 *) (((char *) (&D_800C7650_ovl_01)) + 0x18211))));
  temp_fs1 = func_80047DA0_ovl_01((f32) var_v0_4, (f32) temp_s0) - D_800B8EEC_ovl_01;
  temp_fs0 = (f32) ((temp_s0 * temp_s0) + (var_v0_4 * var_v0_4));
  temp_fs0_2 = temp_fs0 * func_80048090_ovl_01(temp_fs0);
  D_8010DBAC_ovl_01 = temp_fs1;
  new_var3 = temp_fs0_2;
  new_var = (s32) new_var3;
  D_8010DD10_ovl_01 = new_var;
  *((u16 *) (((char *) arg0) + 0x66)) = (u16) ((s32) ((((f32) (((f64) (D_8010DD0C_ovl_01 + temp_fs1)) + D_800B8EF0_ovl_01)) * D_800B8EF8_ovl_01) / D_800B8EFC_ovl_01));
}

