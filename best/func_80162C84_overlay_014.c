s32 func_80033634_ovl_01();
s32 func_800377B0_ovl_01();
extern char D_80168A90_ovl_14[];
extern s32 *D_80168CD0_ovl_14;
typedef struct { unsigned char pad_0[8]; unsigned short field_8; unsigned short field_A; } __repair_record_D_80168CD0_ovl_14;
void func_80162C84_overlay_014(void *arg0)
{
  char *new_var;
  s32 temp_s0;
  s32 temp_s3;
  new_var = ((char *) arg0) + 0x2CF;
  temp_s3 = *((s32 *) (((char *) arg0) + 0x234));
  if ((*((u8 *) new_var)) == 0)
  {
    D_80168CD0_ovl_14 = &D_80168A90_ovl_14;
    *((void (**)(void *)) (((char *) arg0) + 0x2D8)) = func_80162C84_overlay_014;
    *((u8 *) new_var) += 1;
    return;
  }
  do
  {
    if (!((((__repair_record_D_80168CD0_ovl_14*)D_80168CD0_ovl_14)->field_A) & 2))
    {
      temp_s0 = (temp_s3 + ((((__repair_record_D_80168CD0_ovl_14*)D_80168CD0_ovl_14)->field_8) * 0x178)) + 0x38;
      {
        func_800377B0_ovl_01((((func_80033634_ovl_01() & 0xFF) * 2) + 0x1000) | 0x06000000, 0, temp_s0);
      }
    }
    D_80168CD0_ovl_14 += 0xC;
  }
  while ((((__repair_record_D_80168CD0_ovl_14*)D_80168CD0_ovl_14)->field_A) & 1);
  if ((*((u8 *) new_var)) == 0x10)
  {
    *((void (**)(void *)) (((char *) arg0) + 0x2D8)) = NULL;
  }
  *((u8 *) new_var) += 1;
}

