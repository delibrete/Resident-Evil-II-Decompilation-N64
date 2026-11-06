/* identical to func_80162BC0_ovl_13 (matched), with its names changed by decompdecomp */
s32 func_80033634_ovl_01(void); s32 func_80172778_overlay_041(void*,s32); s32 func_80165BF4_ovl_13(void*); s32 func_801728B8_overlay_041(void*); s32 func_80172A90_overlay_041(void*); s32 jtbl_80172B00_overlay_051(void*); extern s16 D_800C7650_ovl_01[];
void func_8016F750_overlay_041(void *p) {
 if(*(u32*)((u8*)p+0x28c)>=0x1c21) {
  if(func_80033634_ovl_01()&1) func_80172778_overlay_041(p,7);
  else func_80172778_overlay_041(p,8);
 }
 if(!(func_80033634_ovl_01()&15)) {
  *(s16*)((u8*)p+0x1f4)=func_80033634_ovl_01()&63;
  if(D_800C7650_ovl_01[0x19cde/2]-0xe10 < *(s32*)((u8*)p+0x2c))
   func_80172778_overlay_041(p,5);
  else func_80172778_overlay_041(p,6);
 }
 func_80165BF4_ovl_13(p);
 if(D_800C7650_ovl_01[0x19c72/2]<0 && *(s8*)((u8*)p+0x2bd)<=0) jtbl_80172B00_overlay_051(p);
 else { func_801728B8_overlay_041(p); func_80172A90_overlay_041(p); }
}
