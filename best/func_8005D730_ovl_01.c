s32 func_80052C00_ovl_01(u8, s32);
s32 func_80052C9C_ovl_01(u8, u8, s32);
s32 func_80052D40_ovl_01(u8, u8, u8, u8);
extern s32 D_80110F0C_ovl_01;
void func_8005D730_ovl_01(void *arg0)
{
  char *__repair_addr;
  void *temp_s0;
  __repair_addr = (char *)(((((*((u8 *) (((char *) arg0) + 0x1AB))) - 2) & 0xFF) * 6)); __repair_addr += (s32)((&D_80110F0C_ovl_01));
  temp_s0 = __repair_addr;
  func_80052C00_ovl_01(*((u8 *) (((char *) temp_s0) + 0)), 0);
  __repair_addr = (char *) ((((*((u16 *) (((char *) arg0) + 0x1AA))) - 2) * 6) + (&D_80110F0C_ovl_01));
  func_80052C9C_ovl_01(*((u8 *) (((char *) temp_s0) + 1)), *((u8 *) (((char *) __repair_addr) + 2)), 0);
  func_80052D40_ovl_01(*((u8 *) (((char *) temp_s0) + 5)), *((u8 *) (((char *) temp_s0) + 3)), *((u8 *) (((char *) temp_s0) + 4)), *((u8 *) (((char *) temp_s0) + 1)));
}

