s32 func_80033634_ovl_01();
s32 func_800377B0_ovl_01(s32, s32, s32, s32 *);
extern s32 D_80173E24_overlay_044;
extern s32 *D_80174040_overlay_044;
typedef struct { unsigned char pad_0[8]; unsigned short field_8; unsigned short field_A; } __repair_record_D_80174040_overlay_044;
void func_8016F814_overlay_044(void *arg0)
{
  s32 temp_s0;
  char *new_var2;
  char *new_var;
  s32 temp_s3;
  temp_s3 = *((s32 *) (((char *) arg0) + 0x234));
  if ((*((u8 *) (((char *) arg0) + 0x2CF))) == 0)
  {
    D_80174040_overlay_044 = &D_80173E24_overlay_044;
    new_var = (char *) arg0;
    *((void (**)(void *)) (new_var + 0x2D8)) = func_8016F814_overlay_044;
    new_var2 = ((char *) arg0) + 0x2CF;
    *((u8 *) new_var2) = (u8) ((*((u8 *) new_var2)) + 1);
    return;
  }
  do
  {
    if (!((((__repair_record_D_80174040_overlay_044*)D_80174040_overlay_044)->field_A) & 2))
    {
      temp_s0 = (temp_s3 + ((((__repair_record_D_80174040_overlay_044*)D_80174040_overlay_044)->field_8) * 0x178)) + 0x38;
      do
      {
        func_800377B0_ovl_01((((func_80033634_ovl_01() & 0xFF) * 2) + 0x1000) | 0x06000000, 0, temp_s0, D_80174040_overlay_044);
      }
      while (0);
    }
    D_80174040_overlay_044 += 0xC;
  }
  while ((((__repair_record_D_80174040_overlay_044*)D_80174040_overlay_044)->field_A) & 1);
  if ((*((u8 *) new_var2)) == 0x10)
  {
    *((void (**)(void *)) (((char *) arg0) + 0x2D8)) = NULL;
  }
  *((u8 *) new_var2) = (u8) ((*((u8 *) new_var2)) + 1);
}

