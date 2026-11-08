inline static u8 __repair_inline(u8 a)
{
  return a;
}

void func_80183E24_ovl_02(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3, s32 arg4)
{
  s32 temp_a0;
  s32 temp_a0_2;
  s32 temp_a0_3;
  s32 temp_a0_4;
  s32 temp_a0_5;
  s32 temp_t1;
  s32 temp_v0;
  s32 var_t6;
  u8 *var_a1;
  u8 *var_t5;
  u8 *var_t7;
  u8 temp_t0;
  u8 temp_v0_2;
  u8 temp_v1;
  u8 temp_v1_2;
  void *var_t2;
  void *var_t3;
  void *var_t4;
  var_a1 = arg1;
  var_t5 = arg0;
  var_t7 = var_t5 + arg2;
  var_t6 = 0;
  if (arg4 > 0)
  {
    var_t2 = (char *) var_a1;
    var_t2 += (s32) 7;
    var_t4 = var_t7 + 8;
    var_t3 = var_t5 + 8;
    __repair_rows: {
      temp_v1 = *var_t5;
      var_t5 += arg3;
      temp_t0 = __repair_inline(*var_t7);
      var_t7 += arg3;
      var_t7 = (char *) var_t4;
      do
      {/*__repair_loop_weight*/do {
        var_t6 += 1;} while (0);
      }
      while (0);
      temp_t1 = ((*((u8 *) (((char *) var_t3) + (-7)))) + (*((u8 *) (var_t7 + (-7))))) + 2;
      *var_a1 = (u8) (((u32) (((*var_a1) + (((u32) ((temp_v1 + temp_t0) + temp_t1)) >> 2)) + 1)) >> 1);
      var_a1 += arg3;
      temp_a0 = (*((u8 *) (((char *) var_t3) + (-6)))) + (*((u8 *) (var_t7 + (-6))));
      *((u8 *) (((char *) var_t2) + (-6))) = (u8) (((u32) (((*((u8 *) (((char *) var_t2) + (-6)))) + (((u32) (temp_a0 + temp_t1)) >> 2)) + 1)) >> 1);
      temp_a0_2 = (*((u8 *) (((char *) var_t3) + (-5)))) + (*((u8 *) (var_t7 + (-5))));
      *((u8 *) (((char *) var_t2) + (-5))) = (u8) (((u32) (((*((u8 *) (((char *) var_t2) + (-5)))) + (((u32) (temp_a0_2 + (temp_a0 + 2))) >> 2)) + 1)) >> 1);
      temp_a0_3 = (*((u8 *) (((char *) var_t3) + (-4)))) + (*((u8 *) (var_t7 + (-4))));
      *((u8 *) (((char *) var_t2) + (-4))) = (u8) (((u32) (((*((u8 *) (((char *) var_t2) + (-4)))) + (((u32) (temp_a0_3 + (temp_a0_2 + 2))) >> 2)) + 1)) >> 1);
      temp_a0_4 = (*((u8 *) (((char *) var_t3) + (-3)))) + (*((u8 *) (var_t7 + (-3))));
      *((u8 *) (((char *) var_t2) + (-3))) = (u8) (((u32) (((*((u8 *) (((char *) var_t2) + (-3)))) + (((u32) (temp_a0_4 + (temp_a0_3 + 2))) >> 2)) + 1)) >> 1);
      temp_a0_5 = (*((u8 *) (((char *) var_t3) + (-2)))) + (*((u8 *) (var_t7 + (-2))));
      *((u8 *) (((char *) var_t2) + (-2))) = (u8) (((u32) (((*((u8 *) (((char *) var_t2) + (-2)))) + (((u32) (temp_a0_5 + (temp_a0_4 + 2))) >> 2)) + 1)) >> 1);
      temp_v0 = (*((u8 *) (((char *) var_t3) + (-1)))) + (*((u8 *) (var_t7 + (-1))));
      *((u8 *) (((char *) var_t2) + (-1))) = (u8) (((u32) (((*((u8 *) (((char *) var_t2) + (-1)))) + (((u32) (temp_v0 + (temp_a0_5 + 2))) >> 2)) + 1)) >> 1);
      temp_v1_2 = *((u8 *) (((char *) var_t3) + 0));
      var_t3 += arg3;
      temp_v0_2 = *((u8 *) (var_t7 + 0));
      var_t4 += arg3;
      *((u8 *) (((char *) var_t2) + 0)) = (u8) (((u32) (((*((u8 *) (((char *) var_t2) + 0))) + (((u32) ((temp_v1_2 + temp_v0_2) + (temp_v0 + 2))) >> 2)) + 1)) >> 1);
      var_t2 += arg3;
    }
if (var_t6 < arg4) goto __repair_rows;
  }
}

