extern s32 D_800C7650;
void func_80173670_overlay_040(void *arg0)
{
  char *new_var;
  if ((*((u8 *) (((char *) (&D_800C7650)) + 0x19C22))) != (*((u8 *) (((char *) arg0) + 0x1A2))))
  {
    new_var = (char *) (&D_800C7650);
    *((s8 *) (((char *) arg0) + 5)) = 9;
    *((s16 *) (((char *) arg0) + 6)) = 0;
    *((u16 *) (new_var + 0x19A78)) = (u16) ((*((u16 *) (((char *) (&D_800C7650)) + 0x19A78))) & 0xFFDF);
  }
}

