s32 func_8006A45C_ovl_01(s32, void *);
extern void *D_800E1008;
s32 func_80166B14_ovl_17(void *arg0)
{
  s32 temp_v0;
  void **var_s0;
  void *temp_s1;
  var_s0 = &D_800E1008;
  temp_s1 = arg0 + 0x2B4;
  if (D_800E1008 != NULL)
  {
    loop_2:
    temp_v0 = func_8006A45C_ovl_01(arg0 - -0x28, *var_s0);

    *((s16 *) (((char *) temp_s1) + 0xE)) = (s16) (temp_v0 << 0xA);
    *((void **) (((char *) temp_s1) + 0x10)) = (void *) (*var_s0);
    var_s0 += 4;
    if (((((*((u16 *) (((char *) arg0) + 0x66))) + 0x200) & 0xC00) == ((s16) (temp_v0 << 0xA))) && (((u32) (*((u32 *) (((char *) (*((void **) (((char *) temp_s1) + 0x10)))) + 0xC)))) >= ((u32) ((-(*((s32 *) (((char *) arg0) + 0x2C)))) / 1800))))
    {
      return (temp_v0 & 0xFFFF) + 1;
    }
    if ((*var_s0) == NULL)
    {
      goto block_6;
    }
    goto loop_2;
  }
  block_6:
  return 0;

}

