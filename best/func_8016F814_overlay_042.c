s32 func_80033634_ovl_01();
s32 func_800377B0_ovl_01();
extern char D_80175620_overlay_042[];
extern s32 *D_80175860_overlay_042;
typedef struct { unsigned char pad_0[8]; unsigned short field_8; unsigned short field_A; } __repair_record_D_80175860_overlay_042;
void func_8016F814_overlay_042(void *arg0)
{
  void *new_var;
  s32 temp_s0;
  unsigned int temp_s3;
  temp_s3 = *((s32 *) (((char *) arg0) + 0x234));
  if ((*((u8 *) (((char *) arg0) + 0x2CF))) == 0)
  {
void *__branch_new_var;

    D_80175860_overlay_042 = &D_80175620_overlay_042;
    __branch_new_var = arg0;
    *((void (**)(void *)) (((char *) __branch_new_var) + 0x2D8)) = func_8016F814_overlay_042;
    *((u8 *) (((char *) __branch_new_var) + 0x2CF)) += 1;
    return;
  }
  do
  {
    if (!((((__repair_record_D_80175860_overlay_042*)D_80175860_overlay_042)->field_A) & 2))
    {
      temp_s0 = (temp_s3 + ((((__repair_record_D_80175860_overlay_042*)D_80175860_overlay_042)->field_8) * 0x178)) + 0x38;
      do
      {
        func_800377B0_ovl_01((((func_80033634_ovl_01() & 0xFF) * 2) + 0x1000) | 0x06000000, 0, temp_s0);
      }
      while (0);
    }
    D_80175860_overlay_042 += 0xC;
  }
  while ((((__repair_record_D_80175860_overlay_042*)D_80175860_overlay_042)->field_A) & 1);
  if ((*((u8 *) (((char *) arg0) + 0x2CF))) == 0x10)
  {
    *((void (**)(void *)) (((char *) arg0) + 0x2D8)) = NULL;
  }
  *((u8 *) (((char *) new_var) + 0x2CF)) += 1;
}

