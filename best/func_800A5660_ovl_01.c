s32 func_8000CB60();
extern s32 D_80135C4C_ovl_01;
extern char D_80143F50[];
void func_800A5660_ovl_01(void) {
 s32 temp_v0;
 if (D_80135C4C_ovl_01 > 0) {
   temp_v0 = D_80135C4C_ovl_01 - 1;
   D_80135C4C_ovl_01 = temp_v0;
   if (temp_v0 == 0) func_8000CB60(&D_80143F50,0);
 }
}
