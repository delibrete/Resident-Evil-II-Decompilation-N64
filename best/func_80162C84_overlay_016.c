s32 func_80033634_ovl_01();
s32 func_800377B0_ovl_01();
extern char D_80167294_ovl_16[];
extern s32 *D_801674B0_ovl_16;
typedef struct { unsigned char pad_0[8]; unsigned short field_8; unsigned short field_A; } __repair_record_D_801674B0_ovl_16;
void func_80162C84_overlay_016(void *arg0)
{
  s32 temp_s0;
  s32 temp_s3;
  temp_s3 = *((s32 *) (((char *) arg0) + 0x234));
  if ((*((u8 *) (((char *) arg0) + 0x2CF))) == 0)
  {
    D_801674B0_ovl_16 = &D_80167294_ovl_16;
    *((void (**)(void *)) (((char *) arg0) + 0x2D8)) = func_80162C84_overlay_016;
    *((u8 *) (((char *) arg0) + 0x2CF)) += 1;
    return;
  }
  do
  {
    if (!((((__repair_record_D_801674B0_ovl_16*)D_801674B0_ovl_16)->field_A) & 2))
    {
      temp_s0 = (temp_s3 + ((((__repair_record_D_801674B0_ovl_16*)D_801674B0_ovl_16)->field_8) * 0x178)); temp_s0 += 0x38;
      do
      {
        if (temp_s3 || arg0)
        {
          func_800377B0_ovl_01((((func_80033634_ovl_01() & 0xFF) * 2) + 0x1000) | 0x06000000, 0, temp_s0);
        }
        else
        {
          func_800377B0_ovl_01((((func_80033634_ovl_01() & 0xFF) * 2) + 0x1000) | 0x06000000, 0, temp_s0);
        }
      }
      while (0);
    }
    D_801674B0_ovl_16 += 0xC;
  }
  while ((((__repair_record_D_801674B0_ovl_16*)D_801674B0_ovl_16)->field_A) & 1);
  if ((*((u8 *) (((char *) arg0) + 0x2CF))) == 0x10)
  {
    *((void (**)(void *)) (((char *) arg0) + 0x2D8)) = NULL;
  }
  *((u8 *) (((char *) arg0) + 0x2CF)) += 1;
}

