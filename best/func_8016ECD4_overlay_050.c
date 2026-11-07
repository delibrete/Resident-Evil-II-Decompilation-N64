extern short D_800E10FA;
extern short D_800E1102;
s32 func_80032D44_ovl_01();
extern char D_800E10D0[];
s16 func_8016ECD4_overlay_050(void *arg0)
{
  char *new_var2;
  s16 temp_a0;
  char *new_var3;
  s16 var_v1;
  char *new_var;
  s16 *new_var4;
  char *new_var5;
  new_var2 = ((char *) arg0) + 0x32;
  new_var5 = ((char *) arg0) + 0x2A;
  new_var = new_var2;
  var_v1 = *(new_var4 = (s16 *) new_var5);
  new_var3 = ((char *) arg0) + 0x66;
  temp_a0 = (func_80032D44_ovl_01(var_v1, *((s16 *) new_var)) - (*((u16 *) new_var3))) & 0xFFF;
  var_v1 = temp_a0;
  if (temp_a0 >= 0x801)
  {
    var_v1 = temp_a0 | 0xF000;
  }
  return var_v1;
}

