static inline static static int __repair_inline(s32 a, s32 b)
{
  return a > b;
}

s32 func_800A1570_ovl_01(void *, s32, s32, u8);
s32 func_800A67C0_ovl_01(s32, s32, s32, s32);
s32 func_800AC5B4_ovl_01(s32, s32, u8, s32);
extern void *D_8013BC20;
extern s32 D_80143BF0;
extern u8 D_80143BF4;
extern void *D_80143BF8;
u8 func_8009FE58_ovl_01(void)
{
  s32 sp28;
  u8 sp37;
  s32 temp_a1_2;
  s32 temp_a3_2;
  s32 temp_t0_2;
  s32 temp_t3;
  s32 temp_v0_2;
  char *new_var2;
  s32 temp_v0_5;
  s32 var_a0;
  s32 var_s3;
  s32 var_s5;
  s32 var_v0_2;
  s32 var_v1;
  u8 new_var;
  u32 temp_s2;
  u8 temp_a1;
  u8 temp_a2;
  u8 temp_a3;
  u8 temp_t2;
  u8 temp_v1;
  u8 temp_v1_3;
  u8 var_v0;
  void **temp_v1_8;
  void *temp_t0;
  void *temp_v0;
  void *temp_v0_3;
  void *temp_v0_4;
  void *temp_v1_4;
  void *temp_v1_5;
  void *temp_v1_6;
  void *temp_v1_7;
  void *temp_v1_9;
  var_s3 = 0;
  sp28 = (sp37 = 0);
  do
  {
    if ((*((s32 *) (((char *) (D_80143BF8 + var_s3)) + 0x574))) != 0)
    {
      void *__repair_cached_pointer = D_80143BF8;
      sp37 = 1;
      loop_3:
      temp_t0 = D_80143BF8 + var_s3;

      temp_s2 = (*((u16 *) (((char *) (*((void **) (((char *) temp_t0) + 0x574)))) + 0))) + (*((u32 *) (((char *) temp_t0) + 0x570)));
      if (((u32) ((*((s32 *) (((char *) temp_t0) + 0x56C))) + (*((s32 *) (((char *) __repair_cached_pointer) + 0x120))))) >= temp_s2)
      {
        *((u32 *) (((char *) temp_t0) + 0x570)) = temp_s2;
        temp_a3 = *((u8 *) (((char *) temp_v0) + 2));
        temp_a2 = *((u8 *) (((char *) temp_v0) + 3));
        if ((temp_a3 == 0xFF) && (temp_a2 == temp_a3))
        {
          temp_a1 = *((u8 *) (((char *) temp_t0) + 0x58C));
          *((void **) (((char *) temp_t0) + 0x574)) = NULL;
        }
        else
        {
          var_s5 = 4;
          if (temp_a3 & 0x80)
          {
            if (temp_a2 == 0)
            {
              temp_v0_2 = 0x7F;
              temp_v0_2 = temp_a3 & temp_v0_2;
              temp_a1_2 = temp_a1 & 0xFF;
              if (temp_a1_2 != 9)
              {
                temp_v1 = *((u8 *) (((char *) (temp_v0_2 + D_80143BF8)) + 8));
                if (temp_v1 != 0xFF)
                {
                  temp_t0 = (temp_v1 * 8) + (*((s32 *) (((char *) D_80143BF8) + 4)));
                  *((s32 *) (((char *) (D_80143BF8 + (temp_a1_2 * 4))) + 0xF80)) = (s32) ((((*((u16 *) (((char *) temp_t0) + 0))) << 0x10) | ((*((u8 *) (((char *) temp_t0) + 2))) << 8)) | (*((u8 *) (((char *) temp_t0) + 3))));
                }
                temp_v0 = *((void **) (((char *) temp_t0) + 0x574));
              }
              else
              {
                temp_v1_3 = *((u8 *) (((char *) (temp_v0_2 + D_80143BF8)) + 0x8C));
                if (temp_v1_3 != 0xFF)
                {
                  temp_v1_4 = (temp_v1_3 * 8) + (*((s32 *) (((char *) D_80143BF8) + 0x88)));
                  *((s32 *) (((char *) D_80143BF8) + 0xFA4)) = (s32) ((((*((u16 *) (((char *) temp_v1_4) + 0))) << 0x10) | ((*((u8 *) (((char *) temp_v1_4) + 2))) << 8)) | (*((u8 *) (((char *) temp_v1_4) + 3))));
                }
              }
            }
            else
            {
              if (temp_a2 == 1)
              {
                var_a0 = 0x82;
                goto block_20;
              }
              var_a0 = temp_a2 & 0x7F;
              if (temp_a2 & 0x80)
              {
                if (var_a0 != 0x68)
                {
                  block_20:
                  func_800AC5B4_ovl_01(var_a0, temp_a1 & 0xFF, *((u8 *) (((char *) (&D_80143BF0)) + 3)), temp_a3 & 0x7F);

                }
                else
                  if ((*((u8 *) (((char *) D_80143BF8) + 0xFF4))) != 0)
                {
                  func_800A1570_ovl_01(D_80143BF8 + 0xFC8, *((s32 *) (((char *) D_80143BF8) + 0xFF0)), 1, temp_a3);
                  *((u8 *) (((char *) D_80143BF8) + 0xFF4)) = 0U;
                }
              }
              else
              {
                goto block_21;
              }
            }
          }
          else
          {
            block_21:
            if ((temp_a3 != 0) || (temp_a2 != 0))
            {
              temp_t0 = (char *) D_80143BF8;
              temp_t0 += (s32) var_s3;
              temp_v1_3 = *((u8 *) (((char *) temp_t0) + 0x58F));
              var_s5 = 6;
              new_var = temp_v1_3;
              var_v0 = new_var;
              if (((s32) temp_v1_3) < 0)
              {
                {
                  u8 __repair_value;
                  __repair_value = (var_v0 = temp_v1_3 + 0x1F);
                }
              }
              if ((*((s32 *) (((char *) (D_80143BF8 + ((((s32) var_v0) >> 5) * 4))) + 0x110))) & (1 << (temp_v1_3 & 0x1F)))
              {
                temp_t0_2 = *((s32 *) (((char *) (D_80143BF8 + ((temp_a1 & 0xFF) * 4))) + 0xF80));
                if (temp_t0_2 != (-1))
                {
                  temp_a3_2 = temp_a3 + (*((s8 *) (((char *) temp_t0) + 0x58E)));
                  var_v1 = 0x7F;
                  if (__repair_inline(0x80, temp_a3_2))
                  {
                    var_v1 = temp_a3_2;
                    if (__repair_inline(0, temp_a3_2))
                    {
                      var_v1 = 0;
                    }
                  }
                  temp_a1_2 = temp_a2 + (*((s8 *) (((char *) (D_80143BF8 + var_s3)) + 0x58D)));
                  if (__repair_inline(0x80, temp_a1_2))
                  {
                    var_v0_2 = temp_a1_2;
                    if (__repair_inline(0, temp_a1_2))
                    {
                      var_v0_2 = 0;
                    }
                  }
                  else
                  {
                    var_v0_2 = 0x7F;
                  }
                  temp_v1_5 = D_8013BC20;
                  if (temp_v1_5 != NULL)
                  {
                    temp_v0_3 = *((void **) (((char *) temp_v1_5) + 0));
                    D_8013BC20 = temp_v0_3;
                    if (temp_v0_3 != NULL)
                    {
                      *((s32 *) (((char *) temp_v0_3) + 4)) = 0;
                    }
                    *((void ***) (((char *) temp_v1_5) + 4)) = NULL;
                    temp_v0_4 = *((void **) (((char *) D_80143BF8) + 0xF78));
                    *((void **) (((char *) temp_v1_5) + 0)) = temp_v0_4;
                    if (temp_v0_4 != NULL)
                    {
                      *((void **) (((char *) (*((void **) (((char *) D_80143BF8) + 0xF78)))) + 4)) = temp_v1_5;
                    }
                    *((void **) (((char *) D_80143BF8) + 0xF78)) = temp_v1_5;
                  }
                  if (temp_v1_5 != NULL)
                  {
                    if (D_80143BF4 != 0)
                    {
                    }
                    temp_v0_5 = func_800A67C0_ovl_01(temp_t0_2, var_v1 & 0xFF, var_v0_2 & 0xFF, 0x40);
                    if (temp_v0_5 != (-1))
                    {
                      new_var2 = (char *) temp_v1_5;
                      *((s32 *) (new_var2 + 8)) = temp_v0_5;
                      temp_v1_6 = D_80143BF8 + var_s3;
                      *((s32 *) (new_var2 + 0xC)) = (s32) (temp_s2 + (*((u16 *) (((char *) (*((void **) (((char *) temp_v1_6) + 0x574)))) + 4))));
                      *((s32 *) (new_var2 + 0x10)) = (s32) (*((s32 *) (((char *) temp_v1_6) + 0x568)));
                      *((s32 *) (new_var2 + 0x14)) = (s32) (*((s32 *) (((char *) temp_v1_6) + 0x56C)));
                    }
                    else
                    {
                      temp_v1_7 = *((void **) (new_var2 + 0));
                      if (temp_v1_7 != NULL)
                      {
                        *((void ***) (((char *) temp_v1_7) + 4)) = (void **) (*((void ***) (new_var2 + 4)));
                      }
                      temp_v1_8 = *((void ***) (new_var2 + 4));
                      if (temp_v1_8 != NULL)
                      {
                        *temp_v1_8 = *((void **) (new_var2 + 0));
                      }
                      else
                      {
                        *((void **) (((char *) D_80143BF8) + 0xF78)) = (void *) (*((void **) (new_var2 + 0)));
                      }
                      *((void **) (new_var2 + 0)) = (void *) D_8013BC20;
                      if (D_8013BC20 != NULL)
                      {
                        *((void **) (((char *) D_8013BC20) + 4)) = temp_v1_5;
                      }
                      *((void ***) (new_var2 + 4)) = NULL;
                      D_8013BC20 = temp_v1_5;
                    }
                  }
                }
              }
            }

          }
          temp_v1_9 = D_80143BF8 + var_s3;
          *((s32 *) (((char *) temp_v1_9) + 0x574)) = (s32) ((*((s32 *) (((char *) temp_v1_9) + 0x574))) + var_s5);
        }
        if ((*((s32 *) (((char *) (D_80143BF8 + var_s3)) + 0x574))) != 0)
        {
          goto loop_3;
        }
      }
    }
    var_s3 += 0x28;
    temp_t3 = sp28 + 1;
    sp28 = temp_t3;
  }
  while (__repair_inline(0x40, temp_t3));
  return sp37;
}

