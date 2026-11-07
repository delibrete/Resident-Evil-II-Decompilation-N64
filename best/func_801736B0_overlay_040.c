extern s32 D_800C7650;
void func_801736B0_overlay_040(void *arg0)
{
  char *new_var;
  new_var = (char *) (&D_800C7650);
  if ((*((u16 *) (new_var + 0x19A78))) & 0x40)
  {
    if (new_var)
    {
      *((s8 *) (((char *) arg0) + 5)) = 0xB;
      *((s16 *) (((char *) arg0) + 6)) = 0;
    }
    else
    {
      *((s8 *) (((char *) arg0) + 5)) = 0xB;
      *((s16 *) (((char *) arg0) + 6)) = 0;
    }
  }
}

