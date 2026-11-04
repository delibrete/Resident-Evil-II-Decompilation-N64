s32 func_8016FC4C_overlay_040();
void func_8017150C_overlay_040(void *arg0)
{
  if (func_8016FC4C_overlay_040() != 0)
  {
    *((s8 *) (((char *) arg0) + 5)) = 0xD;
 do { } while (0);
    *((s16 *) (((char *) arg0) + 6)) = 0x100;
    *((u8 *) (((char *) arg0) + 0x26F)) = (u8) ((*((u8 *) (((char *) arg0) + 0x26F))) & 0x7F);
  }
}
