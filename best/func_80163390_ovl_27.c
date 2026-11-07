s32 func_80163B38_ovl_27(void *, s32, s32);
void func_80163390_ovl_27(void *arg0)
{
  s32 temp_a1;
  s32 var_s1;
  u32 var_s0;
  int new_var;
  var_s0 = 0;
  if ((*((u8 *) (((char *) arg0) + 6))) == 0)
  {
    new_var = 0x104010;
    var_s1 = 0;
    *((u8 *) (((char *) arg0) + 6)) = 1U;
    *((s8 *) (((char *) arg0) + 0x2CC)) = 1;
    do
    {
      temp_a1 = var_s0 & 0xFF;
      var_s0 += 1;
      *((s32 *) (((char *) ((*((s32 *) (((char *) arg0) + 0x234))) + var_s1)) + 0x60)) = new_var;
      func_80163B38_ovl_27(arg0, temp_a1, 0);
      var_s1 += 0x178;
    }
    while (var_s0 < 3U);
  }
}

