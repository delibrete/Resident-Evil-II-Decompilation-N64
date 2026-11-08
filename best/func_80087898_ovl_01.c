extern s32 D_80127560_ovl_01;
s32 func_80087898_ovl_01(void *arg0, s32 arg1)
{
  s32 temp_v1_2;
  s32 var_a0;
  s32 var_a3;
  s32 var_t1;
  s32 var_t3;
  u16 var_t2;
  void *temp_v0;
  void *temp_v1;
  s32 new_var;
  void *var_a1;
  void *var_a2;
  var_t3 = 0;
  temp_v0 = *((void **) (((char *) arg0) + 0x4C));
  var_t1 = *((s32 *) (((char *) temp_v0) + 4));
  var_a2 = *((void **) (((char *) temp_v0) + 8));
  var_a3 = 0;
  var_a0 = 1U;
  if (arg1 < 0)
  {
    var_t2 = -var_a0;
  }
  else
  {
    var_t2 = *((arg1 * 2) + (&D_80127560_ovl_01));
  }
  loop_4:
  var_t1 -= 1;

  new_var = var_t1;
  if (new_var != (-1))
  {
    var_a1 = *((void **) (((char *) var_a2) + 4));
    var_a0 = *((s32 *) (((char *) var_a2) + 0));
    loop_6:
    var_a0 -= 1;

    if (var_a0 != (-1))
    {
      temp_v1 = *((void **) (((char *) var_a1) + 8));
      if ((*((s32 *) (((char *) temp_v1) + 8))) >= ((s32) var_t2))
      {/*__repair_loop_weight*/do {do {do {
        var_a3 += 1;} while (0);} while (0);} while (0);
        *((s32 *) (((char *) temp_v1) + 8)) = -1;
      }
      temp_v1_2 = *((s32 *) (((char *) temp_v1) + 8));
      if (var_t3 < temp_v1_2)
      {
        var_t3 = temp_v1_2;
      }
      var_a1 += 0x10;
      goto loop_6;
    }
    var_a2 += 0x10;
    goto loop_4;
  }
  return var_a3;
}

