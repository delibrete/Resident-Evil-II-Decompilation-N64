void func_80182934_ovl_02(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3)
{
  s32 var_t1;
  u8 *var_t0;
  u8 *var_t2;
  u8 temp_v1;
  void *var_a0;
  void *var_a1;
  var_t2 = arg0;
  var_t0 = arg1;
  var_t1 = 0;
  if (arg3 > 0)
  {
    var_a1 = arg1 + 7;
    var_a0 = arg0 + 7;
    do
    {
      *var_t0 = (u8) (((u32) (((*var_t0) + (*var_t2)) + 1)) >> 1);
      *((u8 *) (((char *) var_a1) + (-6))) = (u8) (((u32) (((*((u8 *) (((char *) var_a1) + (-6)))) + (*((u8 *) (((char *) var_a0) + (-6))))) + 1)) >> 1);
      *((u8 *) (((char *) var_a1) + (-5))) = (u8) (((u32) (((*((u8 *) (((char *) var_a1) + (-5)))) + (*((u8 *) (((char *) var_a0) + (-5))))) + 1)) >> 1);
      *((u8 *) (((char *) var_a1) + (-4))) = (u8) (((u32) (((*((u8 *) (((char *) var_a1) + (-4)))) + (*((u8 *) (((char *) var_a0) + (-4))))) + 1)) >> 1);
      var_t2 += arg2;
      *((u8 *) (((char *) var_a1) + (-3))) = (u8) (((u32) (((*((u8 *) (((char *) var_a1) + (-3)))) + (*((u8 *) (((char *) var_a0) + (-3))))) + 1)) >> 1);
      var_t0 = arg1;
      var_t1 += 1;
      *((u8 *) (((char *) var_a1) + (-2))) = (u8) (((u32) (((*((u8 *) (((char *) var_a1) + (-2)))) + (*((u8 *) (((char *) var_a0) + (-2))))) + 1)) >> 1);
      var_t0 += arg2;
      *((u8 *) (((char *) var_a1) + (-1))) = (u8) (((u32) (((*((u8 *) (((char *) var_a1) + (-1)))) + (*((u8 *) (((char *) var_a0) + (-1))))) + 1)) >> 1);
      temp_v1 = *((u8 *) (((char *) var_a0) + 0));
      var_a0 += arg2;
      *((u8 *) (((char *) var_a1) + 0)) = (u8) (((u32) (((*((u8 *) (((char *) var_a1) + 0))) + temp_v1) + 1)) >> 1);
      var_a1 += arg2;
    }
    while (var_t1 < arg3);
  }
}

