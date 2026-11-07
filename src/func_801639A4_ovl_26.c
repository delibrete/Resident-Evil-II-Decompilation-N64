/* identical to func_801711A8_overlay_054 (matched), with its names changed by decompdecomp */
extern int (*D_80167244_overlay_026[])();
inline static char *inline_fn(void *arg0)
{
  return (char *) arg0;
}

void func_801639A4_ovl_26(void *arg0)
{
  D_80167244_overlay_026[*((u8 *) (inline_fn(arg0) + 6))]();
  if (1)
  {
    if (arg0)
    {
      *((s8 *) (inline_fn(arg0) + 0x2D6)) = 1;
      *((s8 *) (inline_fn(arg0) + 0x2D7)) = 1;
    }
    else
    {
      *((s8 *) (inline_fn(arg0) + 0x2D6)) = 1;
      *((s8 *) (inline_fn(arg0) + 0x2D7)) = 1;
    }
  }
}

