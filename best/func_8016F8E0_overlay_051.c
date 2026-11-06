s32 func_80033634_ovl_01();
s32 func_800377B0_ovl_01(s32, s32, s32, s32 *);
extern s32 D_80172F1C_overlay_051;
extern s32 *D_8017316C_overlay_051;
typedef struct { unsigned char pad_0[8]; unsigned short field_8; unsigned short field_A; } __repair_record_D_8017316C_overlay_051;
void func_8016F8E0_overlay_051(void *arg0)
{
  s32 temp_s0;
  char *new_var2;
  s32 temp_s3;
  int new_var;
  new_var = (*((u8 *) (((char *) arg0) + 0x2C4))) == 0x15;
  temp_s3 = *((s32 *) (((char *) arg0) + 0x234));
  if ((*((u8 *) (((char *) arg0) + 0x2C4))) == 0)
  {
    D_8017316C_overlay_051 = &D_80172F1C_overlay_051;
    *((void (**)(void *)) (((char *) arg0) + 0x2BC)) = func_8016F8E0_overlay_051;
    new_var2 = ((char *) arg0) + 0x2C4;
    *((u8 *) new_var2) = (u8) ((*((u8 *) new_var2)) + 1);
    return;
  }
  do
  {
    if (!((((__repair_record_D_8017316C_overlay_051*)D_8017316C_overlay_051)->field_A) & 2))
    {
      temp_s0 = (temp_s3 + ((((__repair_record_D_8017316C_overlay_051*)D_8017316C_overlay_051)->field_8) * 0x178)) + 0x38;
      do
      {
        func_800377B0_ovl_01((((func_80033634_ovl_01() & 0xFF) * 2) + 0x1400) | 0x06000000, 0, temp_s0, D_8017316C_overlay_051);
      }
      while (0);
    }
    D_8017316C_overlay_051 += 0xC;
  }
  while ((((__repair_record_D_8017316C_overlay_051*)D_8017316C_overlay_051)->field_A) & 1);
  if (new_var)
  {
    *((void (**)(void *)) (((char *) arg0) + 0x2BC)) = NULL;
  }
  *((u8 *) new_var2) = (u8) ((*((u8 *) new_var2)) + 1);
}

