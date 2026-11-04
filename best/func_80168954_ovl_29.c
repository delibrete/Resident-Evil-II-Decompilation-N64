s32 func_80032DEC_ovl_01();
s32 func_80077B0C_ovl_01();
s32 func_80089D34_ovl_01();
extern char D_800C7650_ovl_01[];
void func_80168954_ovl_29(void *arg0, s32 arg1, s32 arg2)
{
  u8 temp_v1;
  char *new_var;
  void *new_var2;
 do { temp_v1 = *((u8 *) (((char *) arg0) + 6)); switch (temp_v1) { case 0: *((s32 *) (((char *) arg0) + 0x1E8)) = 0x300; new_var = D_800C7650_ovl_01 + 0x19A5C; *((u8 *) (((char *) arg0) + 6)) = 1U; *((s32 *) new_var) = (s32) ((*((s32 *) new_var)) | 0x40); *((s8 *) (((char *) arg0) + 0x25C)) = 1; func_80077B0C_ovl_01(0x04000001, arg0 + 0x28); case 1: *((s8 *) (((char *) arg0) + 0x1E9)) = 0; func_80089D34_ovl_01(arg0, arg1, arg2, 0x400); new_var2 = *((void **) (D_800C7650_ovl_01 + 0x19D40)); func_80032DEC_ovl_01(arg0, *((s32 *) (((char *) new_var2) + 0x28)), *((s32 *) (((char *) new_var2) + 0x30))); return; } } while (0);
}
