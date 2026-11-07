extern short D_800E10FA;
extern short D_800E1102;
s32 func_80032D44_ovl_01();
extern char D_800E10D0[];
s16 func_80175164_overlay_042(void *arg0)
{
  s16 temp_a0;
  s16 var_v1;
  var_v1 = *((s16 *) (((char *) arg0) + 0x32));
  temp_a0 = (func_80032D44_ovl_01(*((s16 *) (((char *) arg0) + 0x2A)), var_v1) - (*((u16 *) (((char *) arg0) + 0x66)))) & 0xFFF;
  var_v1 = temp_a0;
  if (temp_a0 >= 0x801)
  {
    var_v1 = temp_a0 | 0xF000;
  }
  return var_v1;
}

