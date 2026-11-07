extern int (*D_80173CC8_overlay_061[])();
void func_8016EFF8_overlay_061(void *arg0, s32 arg1, s32 arg2)
{
  int (**new_var2)();
  char *new_var;
 do { new_var = (char *) arg0; } while (0);
  new_var2[*((u8 *) (5 + new_var))]();
  new_var2 = D_80173CC8_overlay_061;
  D_80173CC8_overlay_061[*((u8 *) (new_var + 5))](arg0, arg1, arg2);
}
