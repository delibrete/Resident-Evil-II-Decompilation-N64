extern int (*D_80178F18_overlay_059[])();
extern int (*D_80178F60_overlay_059[])();
volatile char func_8016F078_overlay_059(void *arg0, s32 arg1, s32 arg2)
{
  s32 new_var;
 do { D_80178F18_overlay_059[*((u8 *) (((char *) arg0) + 5))](); D_80178F60_overlay_059[*((u8 *) (arg0 + 5))](arg0, new_var = arg1, arg2); } while (0);
}
