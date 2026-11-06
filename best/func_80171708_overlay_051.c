extern int (*D_8017313C_overlay_051[])();
s32 func_8017147C_overlay_051();
void func_80171708_overlay_051(void *arg0, s32 arg1, s32 arg2)
{
  char *new_var2;
  u8 *new_var;
  long temp_v0;
  new_var = &(*((u8 *) (((char *) arg0) + 5)));
  temp_v0 = *new_var;
  if (temp_v0 != 0xFF)
  {
    *((u8 *) (((char *) arg0) + 0x2BB)) = temp_v0;
    new_var2 = (char *) arg0;
    *((u8 *) (new_var2 + 5)) = 0xFFU;
    func_8017147C_overlay_051();
  }
  temp_v0 = arg2;
  D_8017313C_overlay_051[*((u8 *) (((char *) arg0) + 0x26E))](arg0, arg1, temp_v0);
}

