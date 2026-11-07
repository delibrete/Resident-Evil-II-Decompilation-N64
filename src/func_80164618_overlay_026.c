/* identical to func_801711A8_overlay_054 (matched), with its names changed by decompdecomp */
extern int (*D_8016725C_overlay_026[])();
inline static char *inline_fn(void *arg0)
{
  return (char *) arg0;
}

void func_80164618_overlay_026(void *arg0)
{
  D_8016725C_overlay_026[*((u8 *) (inline_fn(arg0) + 6))]();
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

