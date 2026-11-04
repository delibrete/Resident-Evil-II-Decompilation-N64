extern void func_8016E850_overlay_007(void),func_8016FAC4_overlay_007(void); extern void func_8004CDB8_ovl_01(s32); extern void (*D_801717B0_overlay_007[])(void); extern u8 D_80171D29_overlay_007;
void func_8016E800_overlay_007(void) {
 do { func_8016E850_overlay_007(); } while (0);
 for (;;) {
   void (**table)(void) = D_801717B0_overlay_007;
   u8 index = D_80171D29_overlay_007;
   table[index]();
   func_8016FAC4_overlay_007();
   func_8004CDB8_ovl_01(1);
 }
}
