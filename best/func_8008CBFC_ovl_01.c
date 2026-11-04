extern u8 D_800C7650_ovl_01[];
extern u8 D_8012F4D0_ovl_01[];
s32 func_80047CF8_ovl_01(void *, s16 *, s32, s32);
void func_8008CBFC_ovl_01(u32 arg0) {
 u32 base=(u32)D_800C7650_ovl_01; s16 sp[4]; u32 q; volatile int new_var;
 new_var=0x18000;
 if (*((s32 *)((base+new_var)+0x1A5C))&0x8000) {
  sp[2]=0x28; sp[0]=0x50; sp[1]=0; sp[3]=0x1E;
  q=arg0/3;
  func_80047CF8_ovl_01(D_8012F4D0_ovl_01,sp,((arg0-(q*3))*0x28)&0xFFF8,(q*0x1E)&0xFFFE);
 }
}
