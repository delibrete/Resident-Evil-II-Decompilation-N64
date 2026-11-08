extern s32 D_80134464_overlay_001, D_80134468_overlay_001, D_8013446C_overlay_001, D_80134470_overlay_001, D_80134474_overlay_001, D_80134478_overlay_001, D_80134494_overlay_001, D_80134498_overlay_001, D_8013449C_overlay_001;
extern u8 D_80184AB0_overlay_002[], D_80184AB8_overlay_002, D_80184ABC_overlay_002[], D_801853FC_overlay_002;
void func_8009EE80_overlay_001(s32,s32);
void func_8000EC60(s32);
void func_8009EBBC_overlay_001(void*,s32);
s32 func_80180B90_ovl_02(void);
void func_8009F5AC_ovl_01(void) {
 D_80134464_overlay_001 = D_80134468_overlay_001;
 switch (D_80134464_overlay_001) {
 case 0:
   D_80134474_overlay_001=0; D_80134478_overlay_001=0; break;
 case 1: {
   s32 a, b;
   while (D_80134494_overlay_001) {}
   a = *(s32 *)(D_80184AB0_overlay_002 + ((D_80184AB8_overlay_002 ^ 1) << 2));
   b = *(s32 *)(D_80184AB0_overlay_002 + (D_80184AB8_overlay_002 << 2));
   func_8009EE80_overlay_001(a,b);
   D_8013446C_overlay_001=0; D_80134468_overlay_001=2; D_80134474_overlay_001++; break;
 }
 case 2: {
   D_8013446C_overlay_001++;
   D_80184AB8_overlay_002 ^= 1;
   func_8000EC60(*(s32 *)(D_80184AB0_overlay_002 + (D_80184AB8_overlay_002 << 2)));
   D_80134468_overlay_001=3; break;
 }
 case 3:
   D_8013446C_overlay_001=0;
   if (D_80134478_overlay_001) {
      if (func_80180B90_ovl_02()) { D_801853FC_overlay_002=1; D_80134478_overlay_001=0; }
      else { if (!(D_80134478_overlay_001 & 1)) D_80134474_overlay_001++; D_80134478_overlay_001--; }
   } else D_80134468_overlay_001=4;
   break;
 case 4:
   D_8013446C_overlay_001++;
   if (D_80134470_overlay_001) {
     D_80134470_overlay_001=0;
     D_8013449C_overlay_001=D_80184AB8_overlay_002 ^ 1;
     func_8009EBBC_overlay_001(D_80184ABC_overlay_002, *(s32 *)(D_80184AB0_overlay_002 + ((D_80184AB8_overlay_002 ^ 1)<<2)));
     D_80134474_overlay_001++;
     D_80134468_overlay_001=1;
   }
   break;
 }
 D_80134498_overlay_001++;
}
