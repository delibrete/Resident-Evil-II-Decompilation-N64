s32 func_8000C9E0(s32 *, s32 *, s32);
extern s32 D_80112780_ovl_01;
extern s32 D_8013A0A0;
extern s32 func_80112790_ovl_01;
void func_8006BD68_ovl_01(s32 arg0)
{
  s32 *new_var;
  new_var = &D_8013A0A0;
  loop_1:
  if (func_80112790_ovl_01 != (D_80112780_ovl_01 + arg0))
  {
    /*__repair_pointer_balance*/if ((unsigned long)new_var & 0x100) {
func_8000C9E0(new_var, &func_80112790_ovl_01, 1);
} else {
func_8000C9E0(new_var, &func_80112790_ovl_01, 1);
}
    goto loop_1;
  }

}

