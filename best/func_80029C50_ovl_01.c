static inline static u8 __repair_inline(u8 a)
{
  return a;
}

s32 func_80029C50_ovl_01(void *arg0, s32 arg1)
{
  s32 var_s0;
  s32 var_s3;
  s32 var_s4;
  char *new_var;
  s32 var_v0;
  s32 var_v0_2;
  u8 *var_s1;
  u8 temp_v1;
  u8 var_v1;
  void *temp_a0;
  void *temp_a0_2;
  void *temp_a0_3;
  void *temp_v0;
  void *temp_v0_2;
  void *temp_v1_2;
  var_s1 = *((u8 **) (((char *) arg0) + 4));
  var_s0 = *((s32 *) (((char *) arg0) + 8));
  new_var = (char *) arg0;
  var_s3 = *((s32 *) (((char *) arg0) + 0x10));
  var_s4 = *((s32 *) (((char *) arg0) + 0xC));
  if (var_s3 < 0x19)
  {
    loop_2:
    var_v0_2 = var_s3 < arg1;

    if ((*((s32 *) (new_var + 0))) == 0)
    {
      var_s0 -= 1;
      if (var_s0 == 0)
      {
        temp_a0 = *((void **) (((char *) arg0) + 0x24));
        var_v0 = 0;
        if ((*((s32 (**)(void *)) (((char *) (*((void **) (((char *) temp_a0) + 0x14)))) + 0xC)))(temp_a0) != 0)
        {
          temp_v0 = *((void **) (((char *) (*((void **) (new_var + 0x24)))) + 0x14));
          var_s1 = *((u8 **) (((char *) temp_v0) + 0));
          var_s0 = (*((s32 *) (((char *) temp_v0) + 4))) - 1;
          goto block_6;
        }
      }
      else
      {
        block_6:
        var_v1 = *var_s1;

        var_s1 += 1;
        if (var_v1 == 0xFF)
        {
          loop_7:
          var_s0 -= 1;

          if (var_s0 == 0)
          {
            temp_a0_2 = *((void **) (((char *) arg0) + 0x24));
            var_v0 = 0;
            if ((*((s32 (**)(void *)) (((char *) (*((void **) (((char *) temp_a0_2) + 0x14)))) + 0xC)))(temp_a0_2) != 0)
            {
              temp_v0_2 = *((void **) (((char *) (*((void **) (new_var + 0x24)))) + 0x14));
              var_s1 = *((u8 **) (((char *) temp_v0_2) + 0));
              var_s0 = (*((s32 *) (((char *) temp_v0_2) + 4))) - 1;
              goto block_10;
            }
          }
          else
          {
            block_10:
            temp_v1 = __repair_inline(*var_s1);

            var_s1 += 1;
            if (temp_v1 != 0xFF)
            {
              if (temp_v1 != 0)
              {
                *((s32 *) (new_var + 0)) = (s32) temp_v1;
                var_v0_2 = var_s3 < arg1;
                goto block_16;
              }
              var_v1 = 0xFF;
              goto block_20;
            }
            goto loop_7;
          }
        }
        else
        {
          goto block_20;
        }
      }
    }
    else
    {
      block_16:
      var_v0 = 1;

      if (var_v0_2 != 0)
      {
        temp_v1_2 = *((void **) (((char *) arg0) + 0x24));
        if ((*((s32 *) (((char *) (*((void **) (((char *) temp_v1_2) + 0x178)))) + 0x24))) == 0)
        {
          *((s32 *) (((char *) (*((void **) (((char *) temp_v1_2) + 0)))) + 0x14)) = 0x68;
          temp_a0_3 = *((void **) (new_var + 0x24));
          (*((s32 (**)(void *, s32)) (((char *) (*((void **) (((char *) temp_a0_3) + 0)))) + 4)))(temp_a0_3, -1);
          *((s32 *) (((char *) (*((void **) (((char *) (*((void **) (((char *) arg0) + 0x24)))) + 0x178)))) + 0x24)) = 1;
        }
        var_v1 = 0;
        block_20:
        var_s4 = (var_s4 << 8) | var_v1;

        var_s3 += 8;
        if (var_s3 >= 0x19)
        {
          goto block_21;
        }
        goto loop_2;
      }
      goto block_22;
    }
  }
  else
  {
    block_21:
    var_v0 = 1;

    block_22:
    *((u8 **) (new_var + 4)) = var_s1;

    *((s32 *) (((char *) arg0) + 8)) = var_s0;
    *((s32 *) (new_var + 0xC)) = var_s4;
    *((s32 *) (((char *) arg0) + 0x10)) = var_s3;
  }
  return var_v0;
}

