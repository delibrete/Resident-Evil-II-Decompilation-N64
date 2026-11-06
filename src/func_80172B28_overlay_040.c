/* identical to func_80165F98_ovl_12 (matched), with its names changed by decompdecomp */
s32 func_80033634_ovl_01(void); s32 func_80172648_overlay_040(void*); s32 func_801728E4_overlay_040(void*); s32 func_80173490_overlay_040(void*,s32,s32);
void func_80172B28_overlay_040(void *arg0) {
 s32 temp_a1; u32 *base; s32 offset;
 if(*(u8*)((char*)arg0+5)==9 && *(u8*)((char*)arg0+0x26e)>=3) {func_80172648_overlay_040(arg0);}
 else {
  *(u8*)((char*)arg0+0x2cd)=1;func_80172648_overlay_040(arg0);func_801728E4_overlay_040(arg0);
  if(*(u8*)((char*)arg0+5)==9) {
   *(u8*)((char*)arg0+0x2bb)=1;
   temp_a1=func_80033634_ovl_01()&15;
   offset=temp_a1*0x178;
   base=*(u32**)((char*)arg0+0x234);
   if((*(u32*)((char*)base+offset)&0x4a)==0) func_80173490_overlay_040(arg0,temp_a1,7);
  }
  *(u8*)((char*)arg0+0x2bb)=0x12;
 }
}
