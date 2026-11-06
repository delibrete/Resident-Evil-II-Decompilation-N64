int func_8004D3D0_overlay_001();
s32 func_8004DA70_overlay_001();
extern char D_800C7650_overlay_001[];
extern s32 *D_800E1388_overlay_001;
void func_8004DB8C_ovl_01(void *arg0)
{
  s32 *new_var;
  s32 **var_s0;
  s32 *temp_a0;
  func_8004DA70_overlay_001(arg0, arg0 + 0x28);
  *((u8 *) (((char *) arg0) + 0xD)) = 0xFF;
  var_s0 = &D_800E1388_overlay_001;
  if ((*(new_var = &(*((s32 *) (D_800C7650_overlay_001 + 0x1828C))))) != (&D_800E1388_overlay_001))
  {
    do
    {
      temp_a0 = *var_s0;
      if ((arg0 != temp_a0) && ((*temp_a0) & 1))
      {
        func_8004D3D0_overlay_001(temp_a0, arg0);
      }
      var_s0 = var_s0 + 4;
    }
    while (var_s0 != (*new_var));
  }
}

