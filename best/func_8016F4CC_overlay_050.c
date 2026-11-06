s32 func_80033634_ovl_01();
s32 func_800377B0_ovl_01();
extern char D_80173214_overlay_050[];
extern s32 *D_80173418_overlay_050;
void func_8016F4CC_overlay_050(void *arg0)
{
  s32 temp_s3;
  int new_var;
  char *new_var2;
  s32 temp_s0;
  new_var2 = ((char *) arg0) + 0x2C4;
  temp_s3 = *((s32 *) (((char *) arg0) + 0x234));
  new_var = (*((u8 *) new_var2)) == 0x18;
  if ((*((u8 *) new_var2)) == 0)
  {
    D_80173418_overlay_050 = &D_80173214_overlay_050;
    *((void (**)(void *)) (((char *) arg0) + 0x2BC)) = func_8016F4CC_overlay_050;
    *((u8 *) new_var2) += 1;
    return;
  }
  do
  {
    if (!((*((u16 *) (((char *) D_80173418_overlay_050) + 0xA))) & 2))
    {
      temp_s0 = (temp_s3 + ((*((u16 *) (((char *) D_80173418_overlay_050) + 8))) * 0x178)) + 0x38;
      do
      {
        func_800377B0_ovl_01((((func_80033634_ovl_01() & 0xFF) * 2) + 0x1000) | 0x06000000, 0, temp_s0);
      }
      while (0);
    }
    D_80173418_overlay_050 += 0xC;
  }
  while ((*((u16 *) (((char *) D_80173418_overlay_050) + 0xA))) & 1);
  if (new_var)
  {
    *((void (**)(void *)) (((char *) arg0) + 0x2BC)) = NULL;
 do { } while (0);
  }
  *((u8 *) new_var2) += 1;
}
