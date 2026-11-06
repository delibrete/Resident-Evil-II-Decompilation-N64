extern int (*D_80173118_overlay_051[])();
void func_80171780_overlay_051(void *arg0)
{
  if (((u8) (*((s32 *) (((char *) arg0) + 4)))) == 1)
  {
    *(((char *) arg0) + 4) = (s32) (*((s32 *) (((char *) arg0) + 0x298)));
    D_80173118_overlay_051[*((u8 *) (((char *) arg0) + 5))]();
    return;
  }
  *((s32 *) (((char *) arg0) + 4)) = 0x01010000;
}

