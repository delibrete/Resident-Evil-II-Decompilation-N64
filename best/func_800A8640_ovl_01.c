inline static u16 __repair_inline(u16 a)
{
  return a;
}

s32 func_800A5C38_overlay_001();
s32 func_800ACB60_overlay_001();
s32 func_800ACDBC_overlay_001();
s32 func_800AD060_overlay_001();
s32 func_800AD2D0_overlay_001();
s32 func_800AD5CC_overlay_001();
s32 func_800ADAE8_overlay_001();
s32 func_800ADCC8_overlay_001();
extern u8 D_801362B0_ovl_01;
extern s16 D_80147F70;
extern s32 D_80147F80;
s32 func_800A8640_ovl_01(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, void *arg4)
{
  int *__repair_home2 = &arg2;
  s32 *var_a1;
  s32 *var_s1;
  s32 *var_v0;
  s32 *var_v0_2;
  s32 *var_v0_3;
  s32 *var_v0_4;
  char *var_s0;
  char *var_s0_2;
  char *var_s0_3;
  char *var_s0_4;
  char *var_s0_5;
  u16 temp_a0;
  u16 var_v1;
  u16 __repair_result_var_v1;
  u16 var_v1_2;
  u16 var_v1_3;
  u16 var_v1_4;
  void *temp_a1;
  void *temp_v0;
  void *temp_v0_2;
  void *temp_v0_3;
  void *temp_v0_4;
  void *temp_v0_5;
  if (D_801362B0_ovl_01 != 0)
  {
    var_s1 = arg0;
    if ((D_80147F70 < 0x80) && ((*var_s1) != (-1)))
    {
      loop_4:
      if ((*((u16 *) (((char *) var_s1) + 4))) == (arg1 & 0xFFFF))
      {
        *((D_80147F70 * 4) + (&D_80147F80)) = var_s1;
        temp_v0 = (char *) (*((s32 *) (((char *) var_s1) + 8)));
        temp_v0 += (s32) var_s1;
        var_s0 = temp_v0 + 8;
        __repair_result_var_v1 = *((u16 *) (((char *) temp_v0) + 8));
        if (__repair_result_var_v1 != 0xFFFF)
        {
          do
          {
            var_a1 = arg4 + (*((s32 *) (((char *) arg4) + 0)));
            if ((*var_a1) != (-1))
            {
              loop_9:
              var_v0 = var_a1;

              if ((*((u16 *) (((char *) var_a1) + 4))) != (__repair_result_var_v1 & 0xFFFF))
              {
                var_a1 += *((s32 *) (((char *) var_a1) + 0));
                if ((*var_a1) == (-1))
                {
                  goto block_11;
                }
                goto loop_9;
              }
            }
            else
            {
              block_11:
              var_v0 = NULL;

            }
            if (var_v0 != NULL)
            {
              func_800AD5CC_overlay_001(*((u16 *) var_s0), var_v0 + 8);
            }
            var_s0 += 2;
            var_v1 = *((u16 *) var_s0);
          }
          while (var_v1 != 0xFFFF);
        }
        temp_v0_2 = (char *) (*((s32 *) (((char *) var_s1) + 0xC)));
        temp_v0_2 += (s32) var_s1;
        var_s0_2 = temp_v0_2 + 8;
        if ((func_800AD2D0_overlay_001(arg3, func_800A5C38_overlay_001(*__repair_home2)) & 0xFF) && ((*((u16 *) (((char *) temp_v0_2) + 8))) != 0xFFFF))
        {
          do
          {
            temp_a0 = *((u16 *) var_s0_2);
            var_s0_2 += 2;
            func_800ADCC8_overlay_001(temp_a0, arg3);
          }
          while ((*((u16 *) var_s0_2)) != 0xFFFF);
        }
        temp_v0_3 = (*((s32 *) (((char *) var_s1) + 0x10))) + var_s1;
        var_s0_3 = temp_v0_3 + 8;
        var_v1_2 = __repair_inline(*((u16 *) (((char *) temp_v0_3) + 8)));
        if (var_v1_2 != 0xFFFF)
        {
          do
          {
            var_a1 = arg4 + (*((s32 *) (((char *) arg4) + 4)));
            if ((*var_a1) != (-1))
            {
              loop_23:
              var_v0_2 = var_a1;

              if ((*((u16 *) (((char *) var_a1) + 4))) != (var_v1_2 & 0xFFFF))
              {
                var_a1 += *((s32 *) (((char *) var_a1) + 0));
                if ((*var_a1) == (-1))
                {
                  goto block_25;
                }
                goto loop_23;
              }
            }
            else
            {
              block_25:
              var_v0_2 = NULL;

            }
            if (var_v0_2 != NULL)
            {
              func_800AD060_overlay_001(*((u16 *) var_s0_3), var_v0_2 + 8);
            }
            var_s0_3 += 2;
            var_v1_2 = *((u16 *) var_s0_3);
          }
          while (var_v1_2 != 0xFFFF);
        }
        temp_v0_4 = (*((s32 *) (((char *) var_s1) + 0x14))) + var_s1;
        var_s0_4 = temp_v0_4 + 8;
        var_v1_3 = *((u16 *) (((char *) temp_v0_4) + 8));
        if (var_v1_3 != 0xFFFF)
        {
          do
          {
            var_a1 = arg4 + (*((s32 *) (((char *) arg4) + 8)));
            if ((*var_a1) != (-1))
            {
              loop_32:
              var_v0_3 = var_a1;

              if ((*((u16 *) (((char *) var_a1) + 4))) != (var_v1_3 & 0xFFFF))
              {
                var_a1 += *((s32 *) (((char *) var_a1) + 0));
                if ((*var_a1) == (var_v1_2 = -1))
                {
                  goto block_34;
                }
                goto loop_32;
              }
            }
            else
            {
              block_34:
              var_v0_3 = NULL;

            }
            if (var_v0_3 != NULL)
            {
              func_800ACB60_overlay_001(*((u16 *) var_s0_4), var_v0_3 + 8);
            }
            var_s0_4 += 2;
            var_v1_3 = *((u16 *) var_s0_4);
          }
          while (var_v1_3 != 0xFFFF);
        }
        temp_v0_5 = (*((s32 *) (((char *) var_s1) + 0x18))) + var_s1;
        var_s0_5 = temp_v0_5 + 8;
        var_v1_4 = *((u16 *) (((char *) temp_v0_5) + 8));
        if (var_v1_4 != 0xFFFF)
        {
          do
          {
            var_a1 = arg4 + (*((s32 *) (((char *) arg4) + 0xC)));
            if ((*var_a1) != var_v1_2)
            {
              loop_41:
              var_v0_4 = var_a1;

              if ((*((u16 *) (((char *) var_a1) + 4))) != (var_v1_4 & 0xFFFF))
              {
                var_a1 += *((s32 *) (((char *) var_a1) + 0));
                if ((*var_a1) == var_v1_2)
                {
                  goto block_43;
                }
                goto loop_41;
              }
            }
            else
            {
              block_43:
              var_v0_4 = NULL;

            }
            if (var_v0_4 != NULL)
            {
              var_a1 = (u16 *) (((char *) var_v0_4) + 0xA);
              func_800ACDBC_overlay_001(*((u16 *) var_s0_5), var_v0_4 + 0xC, *((u16 *) (((char *) var_v0_4) + 0xA)));
            }
            var_s0_5 += 2;
            var_v1_4 = *((u16 *) var_s0_5);
          }
          while (var_v1_4 != 0xFFFF);
        }
        if ((*((u16 *) (((char *) var_s1) + 6))) == 1)
        {
          temp_a1 = (*((s32 *) (((char *) var_s1) + 0x1C))) + var_s1;
          func_800ADAE8_overlay_001(arg1 & 0xFFFF, (temp_a1 + 8) + 4, *((u16 *) (((char *) temp_a1) + 8)));
        }
        D_80147F70 = ((u16) D_80147F70) + 1;
        return 1;
      }

      var_s1 += *((s32 *) (((char *) var_s1) + 0));
      if ((*var_s1) == var_v1_2)
      {
        goto block_51;
      }
      goto loop_4;
    }
  }
  block_51:
  return 0;

}

