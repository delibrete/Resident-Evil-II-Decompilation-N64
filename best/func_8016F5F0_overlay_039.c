extern int (*D_8017AD3C_overlay_039[])();
extern int (*D_8017AD48_overlay_039[])();
void func_8016F5F0_overlay_039(void *arg0, s32 arg1, s32 arg2)
{
 do { D_8017AD3C_overlay_039[*((u8 *) (((char *) arg0) + 5))](); } while (0);
  D_8017AD48_overlay_039[*((u8 *) (((char *) arg0) + 5))](arg0, arg1, arg2);
}
