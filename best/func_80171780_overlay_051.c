extern volatile u32 jtbl_80173118_overlay_063[];
void func_80171780_overlay_051(void *arg0)
{
  u32 v = *((u32 *) (((u8 *) arg0) + 0x298));
  *((u32 *) (((u8 *) arg0) + 4)) = v;
  if (((u8 *) arg0)[4] == 1)
  {
    ((void (*)(void)) jtbl_80173118_overlay_063[v = ((u8 *) arg0)[5]])();
  }
  else
  {
    *((u32 *) (((u8 *) arg0) + 4)) = 0x01010000;
  }
}

