s32 func_800824C8_overlay_001();
extern char D_800C7650_ovl_01[];
extern char D_800E9118_ovl_01[];
void func_800278AC_ovl_01(void)
{
  char *new_var2;
  char *new_var;
  int __repair_constant = -1;
  u8 temp_s3;
  void *temp_v0;
  temp_s3 = *((u8 *) (D_800C7650_ovl_01 + 0x21962));
  new_var2 = D_800E9118_ovl_01 + 0x10;
  do
  {
    func_800824C8_overlay_001(D_800C7650_ovl_01 + 0x19A5C);
  }
  while (0);
  temp_v0 = new_var2;
  *((s16 *) new_var2) = __repair_constant;
  *((s16 *) (((char *) temp_v0) + 0x2C)) = __repair_constant;
  *((s16 *) (((char *) temp_v0) + 0x58)) = __repair_constant;
  *((s16 *) (((char *) temp_v0) + 0x84)) = __repair_constant;
  *((s16 *) (D_800C7650_ovl_01 + 0x21600)) = __repair_constant;
  new_var = (char *)(D_800C7650_ovl_01); new_var += (s32)(0x215FE);
  *((s16 *) new_var) = __repair_constant;
  *((s32 *) (D_800C7650_ovl_01 + 0x1820C)) = 0xFFFF0000;
  *((s32 *) (D_800C7650_ovl_01 + 0x18230)) = 0xFFFF0000;
  *((u8 *) (D_800C7650_ovl_01 + 0x21962)) = temp_s3;
  *((s32 *) (D_800C7650_ovl_01 + 0x19A3C)) = (s32) ((*((s32 *) (D_800C7650_ovl_01 + 0x19A3C))) & 0xD9);
  *((u8 *) (D_800C7650_ovl_01 + 0x2148E)) = (u8) (*((u8 *) (D_800E9118_ovl_01 + 0xCA)));
}

