s32 func_80171998_overlay_054();
s32 func_801736A8_overlay_054();
void func_80171D88_overlay_054(void *arg0, s32 arg1, s32 arg2)
{
  u8 *new_var;
  s32 var_a1;
  if ((*((u8 *) (((char *) arg0) + 6))) == 0)
  {
    if ((((*(new_var = (u8 *) (((char *) arg0) + 0x26E))) % 3) & 0xFF) || ((var_a1 = 5, (*((u8 *) (((char *) arg0) + 0x2D9))) != 0)))
    {
      var_a1 = 0xB;
    }
    func_801736A8_overlay_054(arg0, var_a1, 2, MULTU_HI(*new_var));
  }
  func_80171998_overlay_054(arg0, arg1);
}

