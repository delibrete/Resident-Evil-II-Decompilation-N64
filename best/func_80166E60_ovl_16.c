s32 func_80032D44_ovl_01(s16, s16, s16, s16);
extern s32 D_800E10D0_ovl_01;
s16 func_80166E60_ovl_16(void *arg0)
{
  s16 temp_a0;
  s16 var_v1;
  temp_a0 = (func_80032D44_ovl_01(*((s16 *) (((char *) arg0) + 0x2A)), *((s16 *) (((char *) arg0) + 0x32)), *((s16 *) (((char *) (&D_800E10D0_ovl_01)) + 0x2A)), var_v1 = *((s16 *) (((char *) (&D_800E10D0_ovl_01)) + 0x32))) - (*((u16 *) (((char *) arg0) + 0x66)))) & 0xFFF;
  var_v1 = temp_a0;
  if (temp_a0 >= 0x801)
  {
    var_v1 = temp_a0 | 0xF000;
  }
  return var_v1;
}

