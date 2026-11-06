s32 func_80032EA4_ovl_01(void *, s32, s32, s32);
s32 func_8006AB70_ovl_01(s32, s32 *, s32, s32);
extern volatile short D_800C7650_ovl_01;
extern s32 D_800DF650_ovl_01;
extern s32 D_800E1388_ovl_01;
static inline static static s32 inline_fn(char *arg0)
{
  return *((s32 *) arg0);
}

void func_8005F5D0_ovl_01(void *arg0)
{
  s32 sp10;
  s32 sp14;
  s32 sp18;
  s32 *var_s0;
  s32 var_a1;
  volatile short *new_var2;
  s32 var_s1;
  s32 var_s2;
  s32 var_s2_2;
  s32 var_s5;
  s32 var_s6;
  s32 var_v0;
  s32 var_v0_2;
  u8 temp_a2;
  u8 *new_var;
  char var_s3;
  u8 var_s3_2;
  void *temp_s0;
  var_s2 = 2;
  var_a1 = 0;
  var_s5 = 0;
  var_s3 = *((u8 *) (((char *) (&D_800C7650_ovl_01)) + 0x19A76));
  sp10 = 0;
  var_s6 = sp10;
  temp_a2 = var_s3;
  if (var_s3 == 0)
  {
    goto block_21;
  }
  temp_s0 = *((s32 **) (((char *) (&D_800C7650_ovl_01)) + 0x19D40));
  new_var = (u8 *) (((char *) arg0) + 0x25D);
  var_s0 = (s32 *) temp_s0;
  if (!((*var_s0) & 1))
  {
    goto loop_3;
  }
  var_a1 = 1;
  goto block_6;
  loop_3:
  var_s2 += 1;

  if (var_s3 == 0)
  {
    goto block_7;
  }
  var_s0 = *((s32 **) (((char *) ((var_s2 * 4) + (&D_800C7650_ovl_01))) + 0x19D38));
  if (!((*var_s0) & 1))
  {
    goto loop_3;
  }
  var_a1 += 1;
  block_6:
  var_s3 -= 1;

  if ((*((void **) (((char *) arg0) + 0x250))) != var_s0)
  {
    goto loop_3;
    if (1)
    {
    }
  }
  block_7:
  var_s2_2 = var_s2 + 1;

  if (temp_a2 != var_a1)
  {
    goto block_9;
  }
  var_s2_2 = 2;
  block_9:
  var_s3_2 = temp_a2;

  {
    s32 __repair_value;
    __repair_value = var_s2_2 * 4;
    var_v0 = __repair_value;
  }
  do
  {
    temp_s0 = *((void **) (((char *) (var_v0 + (&D_800C7650_ovl_01))) + 0x19D38));
    var_v0_2 = var_s2_2 * 4;
    var_s6 = *((s32 *) (((char *) temp_s0) + 0));
    if (!(var_s6 & 1))
    {
      goto block_17;
    }
    sp10 = *((s32 *) (((char *) temp_s0) + 0x120));
    sp14 = *((s32 *) (((char *) (((*new_var) * 0x178) + (*((s32 *) (((char *) temp_s0) + 0x234))))) + 0x50));
    var_s3_2 -= 1;
    sp18 = *((s32 *) (((char *) temp_s0) + 0x128));
    var_s1 = 0;
    if ((*((s16 *) (((char *) temp_s0) + 0x1F2))) < 0)
    {
      goto block_14;
    }
    if (func_80032EA4_ovl_01(arg0, inline_fn(((char *) temp_s0) + 0x28), *((s32 *) (((char *) temp_s0) + 0x30)), 0x400) != 0)
    {
      goto block_14;
    }
    var_s1 = func_8006AB70_ovl_01(((*((s32 *) (((char *) arg0) + 0x234))) + ((*((u8 *) (((char *) arg0) + 0x25D))) * 0x178)) + 0x4C, &sp10, 0x80, 1) == 0;
    block_14:
    var_v0_2 = var_s2_2 * 4;

    if (var_s1 == 0)
    {
      goto block_17;
    }
    var_v0_2 = var_s2_2 * 4;
    if ((*((u16 *) (((char *) temp_s0) + 0x1AA))) & 0xC000)
    {
      goto block_17;
    }
    var_s6 = var_s5;
    var_s5 = var_s2_2;
    block_17:
    var_s2_2 += 1;

    if ((var_v0_2 + (&D_800E1388_ovl_01)) != (*((s32 *) (((char *) (&D_800DF650_ovl_01)) + 0x28C))))
    {
      goto block_19;
    }
    var_s2_2 = 2;
    block_19:
    var_v0 = var_s2_2 * 4;

  }
  while (var_s3_2 != 0);
  if (var_s5 != 0)
  {
    goto block_22;
  }
  block_21:
  *((void **) (((char *) arg0) + 0x250)) = arg0;

  return;
  block_22:
  if (var_s2 != var_s5)
  {
    goto block_27;
  }

  if (var_s6 == 0)
  {
    goto block_25;
  }
  var_s5 = var_s6;
  goto block_27;
  new_var2 = &D_800C7650_ovl_01;
  block_25:
  block_27:
  *((void **) (((char *) arg0) + 0x250)) = (void *) (*((void **) (((char *) ((var_s5 * 4) + new_var2)) + 0x19D38)));


  return;
}

