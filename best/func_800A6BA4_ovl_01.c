s32 func_800A0CBC_overlay_001();
s32 func_800A0EBC_overlay_001();
s32 func_800A1298_overlay_001();
s32 func_800A5830_overlay_001();
s32 func_800A591C_overlay_001();
s32 func_800A5970_overlay_001();
s32 func_800A59A0_overlay_001();
s32 func_800A5A00_overlay_001();
s32 func_800A5C94_overlay_001();
s32 func_800A6094_overlay_001();
s32 func_800A619C_overlay_001();
s32 func_800A85AC_overlay_001();
s16 func_800AB2D0_overlay_001();
s32 func_800AB36C_overlay_001();
s32 func_800AC6D4_overlay_001();
s32 func_800AC828_overlay_001();
s32 func_800AC848_overlay_001();
s32 func_800AC868_overlay_001();
s32 func_800AC888_overlay_001();
s32 func_800AC8A8_overlay_001();
s32 func_800AC8C8_overlay_001();
s32 func_800AC8E8_overlay_001();
s32 func_800AC908_overlay_001();
s32 func_800AC928_overlay_001();
s32 func_800B036C_overlay_001();
extern u8 D_801362B1_overlay_001;
extern s32 D_801443E8;
extern s32 D_801477E8;
extern u8 D_801479F8;
extern s32 D_80147A00;
extern s32 D_80147A40;
extern u8 D_80147F49;
inline static char *inline_fn(void *arg0)
{
  return (char *) arg0;
}

void func_800A6BA4_ovl_01(void)
{
  char *var_s0_5;
  char *new_var2;
  char *var_a0;
  char *var_s0;
  char *var_s5;
  s32 temp_a0;
  s32 temp_a0_2;
  s32 temp_a1;
  s32 temp_a1_3;
  s32 temp_s2;
  s32 temp_s2_2;
  s32 temp_s3;
  s32 temp_v0_10;
  s32 temp_v0_11;
  s32 temp_v0_12;
  s32 temp_v0_5;
  s32 temp_v0_7;
  s32 temp_v0_9;
  s32 temp_v1_10;
  s32 temp_v1_12;
  s32 temp_v1_4;
  s32 temp_v1_5;
  s32 temp_v1_6;
  s32 temp_v1_8;
  s32 var_a0_2;
  s32 var_a0_3;
  s32 var_a3_2;
  s32 var_a3_3;
  s32 var_lo;
  s32 var_s0_4;
  s32 var_s2;
  s32 var_s2_2;
  s32 var_s2_4;
  s32 var_s3;
  s32 var_s6;
  s32 var_v0;
  s32 var_v0_2;
  s32 var_v0_3;
  s32 var_v0_4;
  s32 var_v1_2;
  s32 var_v1_3;
  u16 var_v1;
  u32 temp_a0_3;
  u32 temp_a1_2;
  u32 temp_s0;
  u32 temp_s0_2;
  u32 temp_v0;
  u32 temp_v0_2;
  u32 temp_v0_6;
  u32 temp_v1;
  u32 temp_v1_2;
  u32 temp_v1_7;
  u32 var_a2;
  u32 var_s0_2;
  u32 var_s0_3;
  u32 var_s2_3;
  u8 temp_s4;
  u8 temp_v0_3;
  u8 temp_v0_4;
  u8 temp_v1_11;
  u8 temp_v1_9;
  union 
  {
    void *pointer;
    s32 value;
  } __repair_phase_storage;
  void *temp_v1_3;
  void *var_s1;
  var_s5 = &D_801443E8;
  var_s6 = 0;
  if (D_801479F8 != 0)
  {
    var_s1 = (&D_801443E8) + 0xC2;
    do
    {
      if ((*((s32 *) var_s5)) != 0)
      {
        func_800B036C_overlay_001(var_s5);
        goto block_5;
      }
      if (func_800A5830_overlay_001(var_s6) & 0xFF)
      {
        block_5:
        if ((*((u8 *) (inline_fn(var_s1) + (-5)))) == 0)
        {
          var_s2 = 0;
          var_s0 = var_s5;
          do
          {
            temp_v0 = *((u32 *) (inline_fn(var_s0) + 0x16C));
            if (temp_v0 != 0)
            {
              temp_v1 = (*((u32 *) (((char *) var_s0) + 0x168))) + D_801477E8;
              *((u32 *) (inline_fn(var_s0) + 0x168)) = temp_v1;
              *((s16 *) (inline_fn(var_s0) + 0x170)) = func_800AB2D0_overlay_001((((u32) ((temp_v1 % temp_v0) * 0x10)) / ((u32) (temp_v0 >> 8))) & 0xFFFF);
            }
            var_s2 += 1;
            var_s0 += 0xC;
          }
          while (var_s2 < 2);
          var_s2_2 = 0;
          if ((*((s32 *) (inline_fn(var_s1) + (-0x9E)))) & 0x4000)
          {
            temp_v0_2 = *((u32 *) (((char *) var_s1) + (-0x52)));
            temp_v1_2 = (*((u32 *) (inline_fn(var_s1) + (-0x56)))) + D_801477E8;
            *((u32 *) (((char *) var_s1) + (-0x56))) = temp_v1_2;
            *((s32 *) (((char *) var_s1) + (-0x4E))) = (s32) func_800AB2D0_overlay_001((((u32) ((temp_v1_2 % temp_v0_2) * 0x10)) / ((u32) (temp_v0_2 >> 8))) & 0xFFFF);
            var_s2_2 = 0;
          }
          var_a0 = var_s5;
          do
          {
            temp_v1_3 = (char *) var_s5;
            temp_v1_3 += (s32) var_s2_2;
            if ((*((u8 *) (inline_fn(temp_v1_3) + 0x48))) != 0)
            {
              temp_v0_3 = (*((u8 *) (inline_fn(temp_v1_3) + 0xB0))) - 1;
              *((u8 *) (inline_fn(temp_v1_3) + 0xB0)) = temp_v0_3;
              if (!(temp_v0_3 & 0xFF))
              {
                *((u8 *) (((char *) temp_v1_3) + 0xB0)) = (u8) (*((u8 *) (((char *) temp_v1_3) + 0x48)));
                *((s32 *) (((char *) var_a0) + 0x40)) = 0;
              }
              else
              {
                *((s32 *) (((char *) var_a0) + 0x40)) = (s32) ((*((s32 *) (inline_fn(var_a0) + 0x40))) + (*((s32 *) (inline_fn(var_a0) + 0x7C))));
              }
            }
            var_s2_2 += 1;
            var_a0 += 4;
          }
          while (var_s2_2 < 2);
          if (((*((u8 *) (inline_fn(var_s1) + (-0x78)))) != 0xFF) && (((u32) (func_800AC8E8_overlay_001(var_s5) & 0xFFFF)) >= 0x1F81U))
          {
            var_v0 = (*((s32 *) (inline_fn(var_s1) + (-0x9E)))) | 0x40000000;
          }
          else
          {
            var_v0 = (*((s32 *) (inline_fn(var_s1) + (-0x9E)))) & 0xBFFFFFFF;
          }
          var_s0_5 = (char *) var_s1;
          *((s32 *) (inline_fn(var_s1) + (-0x9E))) = var_v0;
          if (!((*((s32 *) (inline_fn(var_s1) + (-0x9E)))) & 0x1000))
          {
            if ((*((u8 *) (var_s0_5 + (-0x78)))) != 0xFF)
            {
              if (((u32) (func_800AC908_overlay_001(var_s5) & 0xFFFF)) < 0x1F81U)
              {
                *((s32 *) (inline_fn(var_s1) + (-0x9E))) = (s32) ((*((s32 *) (inline_fn(var_s1) + (-0x9E)))) & (~0x800));
                func_800AC6D4_overlay_001(*((u8 *) (inline_fn(var_s1) + (-0x78))), *((u8 *) (var_s0_5 + (-0x77))));
              }
              else
              {
                temp_a0 = *((s32 *) (inline_fn(var_s1) + (-0x9E)));
                if (!(temp_a0 & 0x800))
                {
                  if (!(temp_a0 & 0x80000))
                  {
                    if (((*((u8 *) (inline_fn(var_s1) + (-0x2A)))) == 1) && (!(temp_a0 & 0x2000)))
                    {
                      *((s32 *) (inline_fn(var_s1) + (-0x36))) = 0;
                    }
                    else
                    {
                      *((s32 *) (inline_fn(var_s1) + (-0x36))) = (s32) (*((s32 *) (inline_fn(var_s1) + (-0x32))));
                    }
                    *((u32 *) (inline_fn(var_s1) + (-0x2E))) = (u32) ((*((u8 *) (var_s0_5 + (-1)))) << 0x10);
                  }
                  temp_v0_4 = *((u8 *) (inline_fn(var_s1) + (-0x78)));
                  if (temp_v0_4 != 0xFF)
                  {
                    func_800AC6D4_overlay_001(temp_v0_4, *((u8 *) (inline_fn(var_s1) + (-0x77))), 1);
                  }
                }
                *((s32 *) (inline_fn(var_s1) + (-0x9E))) = (s32) ((*((s32 *) (var_s0_5 + (-0x9E)))) | 0x800);
              }
            }
            *((s32 *) (inline_fn(var_s1) + (-0x9E))) = (s32) ((*((s32 *) (var_s0_5 + (-0x9E)))) | 0x2000);
          }
          temp_v1_4 = *((s32 *) (inline_fn(var_s1) + (-0x9E)));
          if (temp_v1_4 & 0x20)
          {
            *((s32 *) (var_s0_5 + (-0x9E))) = (s32) ((temp_v1_4 & (~0x20)) | 0x10);
            func_800A591C_overlay_001(var_s6);
          }
          if (((*((s32 *) (var_s0_5 + (-0x9E)))) & 0x80) && (!((*((s32 *) (inline_fn(var_s1) + (-0x9E)))) & 0x40000000)))
          {
            *((s32 *) (inline_fn(var_s1) + (-0x9E))) = (s32) ((*((s32 *) (var_s0_5 + (-0x9E)))) & (~0x90));
            func_800A5970_overlay_001(var_s6);
          }
          new_var2 = inline_fn(var_s1);
          temp_a0_2 = *((s32 *) (var_s0_5 + (-0x9A)));
          if (temp_a0_2 != 0)
          {
            temp_v0_5 = temp_a0_2 - ((*((u16 *) (var_s0_5 + (-0x96)))) * D_801477E8);
            *((s32 *) (inline_fn(var_s1) + (-0x9A))) = temp_v0_5;
            if (temp_v0_5 < 0)
            {
              *((s32 *) (inline_fn(var_s1) + (-0x9A))) = 0;
            }
          }
          if ((*((s32 *) (new_var2 + (-0x9E)))) & 0x10000)
          {
            temp_v1_5 = (*((s32 *) (inline_fn(var_s1) + (-0x16)))) - ((((u32) (*((u32 *) (inline_fn(var_s1) + (-0x1A))))) >> 8) * (*((s32 *) (inline_fn(var_s1) + (-0x86)))));
            *((s32 *) (inline_fn(var_s1) + (-0x8A))) = temp_v1_5;
            if (temp_v1_5 >= 0)
            {
              var_a0_2 = 0x7F0000;
              if (((u32) temp_v1_5) <= 0x7F0000U)
              {
                var_a0_2 = temp_v1_5;
              }
            }
            else
            {
              var_a0_2 = 0;
            }
            *((s32 *) (inline_fn(var_s1) + (-0x8A))) = var_a0_2;
            temp_v0_6 = (*((u32 *) (inline_fn(var_s1) + (-0x1A)))) - D_801477E8;
            *((u32 *) (inline_fn(var_s1) + (-0x1A))) = temp_v0_6;
            if (temp_v0_6 == 0)
            {
              *((s32 *) (inline_fn(var_s1) + (-0x9E))) = (s32) ((*((s32 *) (inline_fn(var_s1) + (-0x9E)))) & 0xFFFEFFFF);
              *((s32 *) (inline_fn(var_s1) + (-0x8A))) = (s32) (*((s32 *) (inline_fn(var_s1) + (-0x16))));
            }
          }
          var_s0_2 = ((*((u16 *) (inline_fn(var_s1) + (-0x72)))) << 0x10) + (((*((s8 *) (inline_fn(var_s1) + (-2)))) << 0x10) / 100);
          if ((*((s32 *) (inline_fn(var_s1) + (-0x9E)))) & 0x40010)
          {
            if ((*((u8 *) (inline_fn(var_s1) + (-0x78)))) != 0xFF)
            {
              var_v1 = func_800AC888_overlay_001(var_s5, 0x40010) & 0xFFFF;
              *((u16 *) (inline_fn(var_s1) + (-0xA))) = var_v1;
              goto block_59;
            }
          }
          else
          {
            var_v1 = *((u16 *) (inline_fn(var_s1) + (-0xA)));
            block_59:
            temp_v1_6 = var_v1 - 0x2000;

            if (var_v1 != 0x2000)
            {
              if (temp_v1_6 < 0)
              {
                var_lo = (*((u8 *) (inline_fn(var_s1) + (-0x58)))) * temp_v1_6;
              }
              else
              {
                var_lo = (*((u8 *) (inline_fn(var_s1) + (-0x57)))) * temp_v1_6;
              }
              var_s0_2 += var_lo * 8;
            }
          }
          temp_a1 = *((s32 *) (inline_fn(var_s1) + (-0x9E)));
          if (temp_a1 & 0x4000)
          {
            temp_s2 = (*((u8 *) (inline_fn(var_s1) + (-0x49)))) << 8;
            temp_s2 = ((*((u8 *) (inline_fn(var_s1) + (-0x4A)))) << 8) + (temp_s2 / 100);
            if ((temp_a1 & 0x8000) && ((*((u8 *) (inline_fn(var_s1) + (-0x78)))) != 0xFF))
            {
              var_v0_2 = ((s32) ((*((s32 *) (inline_fn(var_s1) + (-0x4E)))) * (((u32) (func_800AC8C8_overlay_001(var_s5, temp_a1) & 0xFFFF)) >> 7))) >> 7;
            }
            else
            {
              var_v0_2 = *((s32 *) (inline_fn(var_s1) + (-0x4E)));
            }
            var_s0_2 += ((s32) (temp_s2 * var_v0_2)) >> 4;
          }
          var_a2 = var_s0_2;
          if ((*((s32 *) (inline_fn(var_s1) + (-0x9E)))) & 0x800)
          {
            temp_a0_3 = (u32) ((*((s32 *) (inline_fn(var_s1) + (-0x32)))) - (*((s32 *) (inline_fn(var_s1) + (-0x36)))));
            temp_s0 = temp_a0_3 >> 8;
            if (((s32) temp_s0) > 0)
            {
              temp_a1_2 = *((u32 *) (inline_fn(var_s1) + (-0x2E)));
              temp_v1_7 = temp_a1_2 + (((s32) (D_801477E8 * (((s32) (var_s0_2 - temp_a1_2)) >> 8))) / ((s32) temp_s0));
              *((u32 *) (inline_fn(var_s1) + (-0x2E))) = temp_v1_7;
              if (((temp_a1_2 < var_s0_2) && (temp_v1_7 < var_s0_2)) || ((var_s0_2 < temp_a1_2) && (var_s0_2 < temp_v1_7)))
              {
                var_a2 = *((u32 *) (inline_fn(var_s1) + (-0x2E)));
                var_v0_3 = (*((s32 *) (inline_fn(var_s1) + (-0x36)))) + D_801477E8;
              }
              else
              {
                var_v0_3 = *((s32 *) (inline_fn(var_s1) + (-0x32)));
              }
              *((s32 *) (inline_fn(var_s1) + (-0x36))) = var_v0_3;
            }
          }
          temp_s2_2 = var_a2 & 0xFFFF;
          var_s2_3 = func_800A6094_overlay_001((var_a2 >> 0x10) & 0xFF, *((s32 *) (inline_fn(var_s1) + (-0x66))), var_a2) << 0x10;
          if (temp_s2_2 != 0)
          {
            temp_s0 = var_s2_3 >> 0x10;
            var_s2_3 += ((func_800A619C_overlay_001(temp_s0) & 0xFFFF) - temp_s0) * temp_s2_2;
          }
          temp_s0_2 = var_s2_3 + ((*((s32 *) (inline_fn(var_s1) + (-0x82)))) + (*((s32 *) (inline_fn(var_s1) + (-0x7E)))));
          if ((*((u8 *) (inline_fn(var_s1) + (-0x78)))) != 0xFF)
          {
            var_s0_3 = ((u32) ((temp_s0_2 >> 0x10) * (func_800AC8A8_overlay_001(var_s5) & 0xFFFF))) >> 0xD;
          }
          else
          {
            var_s0_3 = temp_s0_2 >> 0x10;
          }
          if (D_801362B1_overlay_001 != 0)
          {
            if (D_801362B1_overlay_001 != 0x2A)
            {
              var_s0_3 = (var_s0_3 - 0x80) + (func_800AB36C_overlay_001(var_s6) & 0xFF);
            }
          }
          func_800A59A0_overlay_001(var_s6, var_s0_3 & 0xFFFF);
          if ((*((s32 *) (inline_fn(var_s1) + (-0x9E)))) & 0x20000)
          {
            temp_v1_8 = (*((s32 *) (inline_fn(var_s1) + (-0x3A)))) - ((((u32) (*((u32 *) (inline_fn(var_s1) + (-0xE))))) >> 8) * (*((s32 *) (inline_fn(var_s1) + (-0x3E)))));
            *((s32 *) (inline_fn(var_s1) + (-0x92))) = temp_v1_8;
            if (temp_v1_8 >= 0)
            {
              var_a0_3 = 0x7F0000;
              if (((u32) temp_v1_8) <= 0x7F0000U)
              {
                var_a0_3 = temp_v1_8;
              }
            }
            else
            {
              var_a0_3 = 0;
            }
            *((s32 *) (inline_fn(var_s1) + (-0x92))) = var_a0_3;
            temp_v0_7 = (*((u32 *) (inline_fn(var_s1) + (-0xE)))) - D_801477E8;
            *((u32 *) (inline_fn(var_s1) + (-0xE))) = (u32) temp_v0_7;
            if (temp_v0_7 <= 0)
            {
              *((s32 *) (inline_fn(var_s1) + (-0x9E))) = (s32) ((*((s32 *) (inline_fn(var_s1) + (-0x9E)))) & 0xFFFDFFFF);
              *((s32 *) (inline_fn(var_s1) + (-0x92))) = (s32) (*((s32 *) (inline_fn(var_s1) + (-0x3A))));
            }
          }
          __repair_phase_storage.pointer = ((*((u8 *) (inline_fn(var_s1) + (-4)))) * 0x28) + (&D_80147A40);
          var_s2_4 = *((s32 *) (inline_fn(var_s1) + (-0x8A)));
          temp_s4 = *((u8 *) (inline_fn(var_s1) + (-0x78)));
          var_v1_2 = 0x348;
          temp_a1_3 = ((s32) ((((s32) ((((s32) (*((s32 *) (inline_fn(var_s1) + (-0x92))))) >> 7) * (*((s16 *) (inline_fn(__repair_phase_storage.pointer) + 0x18))))) >> 7) * (*((s16 *) (inline_fn(__repair_phase_storage.pointer) + 0))))) >> 7;
          if ((*((u8 *) (inline_fn(var_s1) + (-0x76)))) != 0)
          {
            var_v1_2 = 0x370;
          }
          temp_v1_9 = *((u8 *) (inline_fn(var_s1) + (-0x93)));
          var_s0_4 = temp_a1_3 * (*(var_v1_2 + (&D_80147A40)));
          if (temp_v1_9 != 0xFF)
          {
            var_s0_4 = (var_s0_4 >> 7) * (*(temp_v1_9 + (&D_80147A00)));
          }
          if (D_80147F49 == 0)
          {
            var_s3 = 0;
            if (temp_s4 != 0xFF)
            {
              var_s0_4 = (var_s0_4 >> 7) * (((u32) (func_800AC828_overlay_001(var_s5, temp_a1_3) & 0xFFFF)) >> 7);
              if (var_s2_4 != 0x800000)
              {
                temp_s2_2 = var_s2_4 + (((((u32) (func_800AC848_overlay_001(var_s5) & 0xFFFF)) >> 7) - 0x40) << 0x10);
                if (temp_s2_2 >= 0)
                {
                  if (temp_s2_2 <= 0x7F0000)
                  {
                    var_v1_3 = temp_s2_2;
                    goto block_111;
                  }
                  var_s2_4 = 0x7F0000;
                }
                else
                {
                  var_v1_3 = 0;
                  block_111:
                  var_s2_4 = var_v1_3;

                }
              }
              var_s3 = (func_800AC868_overlay_001(var_s5) & 0xFFFF) << 9;
              if (var_s3 > 0x7F0000)
              {
                var_s3 = 0x7F0000;
              }
            }
          }
          else
          {
            var_s2_4 = 0x400000;
            if ((temp_s4 & 0xFF) != 0xFF)
            {
              var_s0_4 = (var_s0_4 >> 7) * (((u32) (func_800AC828_overlay_001(var_s5, temp_a1_3) & 0xFFFF)) >> 7);
              var_s2_4 = 0x400000;
            }
            var_s3 = 0;
          }
          var_v0_4 = temp_s4 & 0xFF;
          if (var_s6 == 0)
          {
            func_800A85AC_overlay_001();
            var_v0_4 = temp_s4 & 0xFF;
          }
          __repair_phase_storage.value = 0;
          if (var_v0_4 != 0xFF)
          {
            var_a3_2 = ((s32) ((((u32) (func_800AC928_overlay_001(var_s5) & 0xFFFF)) >> 7) * var_s0_4)) >> 7;
            if (var_a3_2 > 0x7F0000)
            {
              var_a3_2 = 0x7F0000;
            }
            var_a3_3 = (var_a3_2 >> 7) * (*((u8 *) (inline_fn(var_s1) + (-0x29))));
            if ((var_a3_3 - 1) >= 0x7F0000)
            {
              var_a3_3 = 0x7F0000;
            }
            __repair_phase_storage.value = var_a3_3 + ((*((u8 *) (inline_fn(var_s1) + (-0x28)))) << 0x10);
            if (__repair_phase_storage.value > 0x7F0000)
            {
              __repair_phase_storage.value = 0x7F0000;
            }
          }
          *((s16 *) (inline_fn(var_s1) + 0)) = (s16) (var_s0_4 >> 8);
          func_800A5A00_overlay_001(var_s6, var_s0_4, var_s2_4, var_s3, __repair_phase_storage.value);
        }

      }
      var_s6 += 1;
      var_s1 += 0x1A0;
      var_s5 += 0x1A0;
    }
    while (var_s6 < ((s32) D_801479F8));
  }
  var_s0_5 = &D_80147A40;
  do
  {
    temp_v0_9 = *((s32 *) (inline_fn(var_s0_5) + 0xC));
    if (temp_v0_9 != 0)
    {
      temp_v0_10 = (*((s32 *) (inline_fn(var_s0_5) + 4))) - ((temp_v0_9 >> 8) * (*((s32 *) (inline_fn(var_s0_5) + 8))));
      *((s32 *) (inline_fn(var_s0_5) + 0)) = temp_v0_10;
      if (temp_v0_10 < 0)
      {
        *((s32 *) (inline_fn(var_s0_5) + 0)) = 0;
      }
      temp_v1_10 = (*((s32 *) (inline_fn(var_s0_5) + 0xC))) - D_801477E8;
      *((s32 *) (inline_fn(var_s0_5) + 0xC)) = temp_v1_10;
      if (temp_v1_10 <= 0)
      {
        temp_v1_11 = *((u8 *) (inline_fn(var_s0_5) + 0x15));
        *((s32 *) (inline_fn(var_s0_5) + 0xC)) = 0;
        *((s32 *) (inline_fn(var_s0_5) + 0)) = (s32) (*((s32 *) (inline_fn(var_s0_5) + 4)));
        switch (temp_v1_11)
        {
          case 1:
            func_800A0EBC_overlay_001(*((s32 *) (inline_fn(var_s0_5) + 0x10)));
            break;

          case 2:
            func_800A0CBC_overlay_001(*((s32 *) (inline_fn(var_s0_5) + 0x10)));
            break;

          case 3:
            func_800A1298_overlay_001(*((s32 *) (inline_fn(var_s0_5) + 0x10)), 0, 0);
            break;

        }

      }
    }
    temp_v0_11 = *((s32 *) (inline_fn(var_s0_5) + 0x24));
    if (temp_v0_11 != 0)
    {
      temp_v0_12 = (*((s32 *) (inline_fn(var_s0_5) + 0x1C))) - ((temp_v0_11 >> 8) * (*((s32 *) (inline_fn(var_s0_5) + 0x20))));
      *((s32 *) (inline_fn(var_s0_5) + 0x18)) = temp_v0_12;
      if (temp_v0_12 < 0)
      {
        *((s32 *) (inline_fn(var_s0_5) + 0x18)) = 0;
      }
      temp_v1_12 = (*((s32 *) (inline_fn(var_s0_5) + 0x24))) - D_801477E8;
      *((s32 *) (inline_fn(var_s0_5) + 0x24)) = temp_v1_12;
      if (temp_v1_12 <= 0)
      {
        *((s32 *) (inline_fn(var_s0_5) + 0x24)) = 0;
        *((s32 *) (inline_fn(var_s0_5) + 0x18)) = (s32) (*((s32 *) (inline_fn(var_s0_5) + 0x1C)));
      }
    }
    var_s0_5 += 0x28;
  }
  while (((s32) var_s0_5) < ((s32) ((&D_80147A40) + 0x500)));
  func_800A5C94_overlay_001();
}

