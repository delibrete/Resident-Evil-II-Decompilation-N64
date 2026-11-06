extern int (*D_80166814_overlay_022[])();
void func_80165BD0_ovl_22(void *arg0)
{
  *((s32 *) (((char *) arg0) + 4)) = (s32) (*((s32 *) (((char *) arg0) + 0x298)));
  if (((u8) (*(((char *) arg0) + 4))) == 1)
  {
    D_80166814_overlay_022[*((u8 *) (((char *) arg0) + 5))]();
    return;
  }
  *((s32 *) (((char *) arg0) + 4)) = 0x01010000;
}

