inline static u8 __repair_inline(u8 a)
{
  return a;
}

s32 func_8002C9F0_ovl_01(void *arg0)
{
  s32 var_s0;
  char *new_var2;
  s32 var_v0;
  u8 *var_s1;
  char *new_var;
  u8 temp_s3;
  void *temp_s2;
  void *temp_v1;
  void *temp_v1_2;
  char *new_var3;
  s32 (*new_var4)(void *);
  temp_s2 = *((void **) (((char *) arg0) + 0x14));
  var_s1 = *((u8 **) (((char *) temp_s2) + 0));
  var_s0 = *((s32 *) (((char *) temp_s2) + 4));
  loop_1:
  var_s0 -= 1;

  if (var_s0 == 0)
  {
    var_v0 = 0;
    if ((*((s32 (**)(void *)) (((char *) temp_s2) + 0xC)))(arg0) != 0)
    {
      var_s1 = *((u8 **) (((char *) temp_s2) + 0));
      var_s0 = (*((s32 *) (((char *) temp_s2) + 4))) - 1;
      goto block_4;
    }
  }
  else
  {
    block_4:
    var_s1 += 1;

    if ((*var_s1) != 0xFF)
    {
      loop_6:
      temp_v1 = *((void **) (((char *) arg0) + 0x174));

      *((s32 *) (((char *) temp_v1) + 0x5C)) = (s32) ((*((s32 *) (((char *) temp_v1) + 0x5C))) + 1);
      *((u8 **) (((char *) temp_s2) + 0)) = var_s1;
      *((s32 *) (((char *) temp_s2) + 4)) = var_s0;
      if (var_s0 == 0)
      {
        var_v0 = 0;
        new_var4 = *((s32 (**)(void *)) (((char *) temp_s2) + 0xC));
        if (new_var4(arg0) != 0)
        {
          new_var2 = ((char *) temp_s2) + 4;
          var_s1 = *((u8 **) (((char *) temp_s2) + 0));
          var_s0 = *((s32 *) new_var2);
          goto block_9;
        }
      }
      else
      {
        block_9:
        var_s0 -= 1;

        var_s1 += 1;
        if ((*var_s1) == 0xFF)
        {
          goto loop_10;
        }
        goto loop_6;
      }
    }
    else
    {
      loop_10:
      var_s0 -= 1;

      if (var_s0 == 0)
      {
        var_v0 = 0;
        if (new_var4(arg0) != 0)
        {
          var_s1 = *((u8 **) (((char *) temp_s2) + 0));
          var_s0 = *((s32 *) (((char *) temp_s2) + 4));
          var_s0 = var_s0 - 1;
          goto block_13;
        }
      }
      else
      {
        block_13:
        temp_s3 = __repair_inline(*var_s1);

        var_s1 += 1;
        if (temp_s3 != 0xFF)
        {
          if (temp_s3 == 0)
          {
            temp_v1_2 = *((void **) (((char *) arg0) + 0x174));
            new_var3 = ((char *) temp_v1_2) + 0x5C;
            *((s32 *) (((char *) temp_v1_2) + 0x5C)) = (s32) ((*((s32 *) new_var3)) + 2);
            *((u8 **) (((char *) temp_s2) + 0)) = var_s1;
            *((s32 *) (((char *) temp_s2) + 4)) = var_s0;
            goto loop_1;
          }
          if ((*((s32 *) (((char *) (*((void **) (((char *) arg0) + 0x174)))) + 0x5C))) != 0)
          {
            *((s32 *) (((char *) (*((void **) (((char *) arg0) + 0)))) + 0x14)) = 0x67;
            *((s32 *) (((char *) (*((void **) (((char *) arg0) + 0)))) + 0x18)) = (s32) (*((s32 *) (((char *) (*((void **) (((char *) arg0) + 0x174)))) + 0x5C)));
            *((s32 *) (((char *) (*((void **) (((char *) arg0) + 0)))) + 0x1C)) = (s32) temp_s3;
            (*((s32 (**)(void *, s32)) (((char *) (*((void **) (((char *) arg0) + 0)))) + 4)))(arg0, -1);
            new_var = ((char *) (*((void **) (((char *) arg0) + 0x174)))) + 0x5C;
            *((s32 *) new_var) = 0;
          }
          var_v0 = 1;
          *((s32 *) (((char *) arg0) + 0x160)) = (s32) temp_s3;
          *((u8 **) (((char *) temp_s2) + 0)) = var_s1;
          *((s32 *) (((char *) temp_s2) + 4)) = var_s0;
        }
        else
        {
          goto loop_10;
        }
      }
    }
  }
  return var_v0;
}

