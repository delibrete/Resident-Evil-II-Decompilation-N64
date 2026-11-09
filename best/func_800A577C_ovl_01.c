s32 func_800113E0(s32);
s32 func_800A4D64_ovl_01(s32 *, s32, s32, s32);
s32 func_800A5734_ovl_01();
extern s32 D_80143EA4;

s32 func_800A577C_ovl_01(s32 *arg0, u16 arg1, u16 arg2, s32 arg3)
{
  s32 temp_v0;
  s32 var_v0;
  func_800A5734_ovl_01();
  temp_v0 = func_800113E0(*arg0);
  D_80143EA4 = temp_v0;
  *arg0 = temp_v0;
  var_v0 = 2;
  if (!(arg3 & 0x10000))
  {
    var_v0 = 3;
    if (!(arg3 & 0x20000))
    {
      var_v0 = 4;
      if (!(arg3 & 0x40000))
      {
        if (arg3 & 0x80000)
        {
          var_v0 = 0;
        }
        else
        {
          var_v0 = 1;
        }
      }
    }
  }
  func_800A4D64_ovl_01(arg0, arg1 & 0xFFFF, arg2 & 0xFFFF, var_v0);
  return 0;
}
