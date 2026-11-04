/* identical to func_801629CC_ovl_12 (matched), with its names changed by decompdecomp */
s32 func_801736E4_overlay_040(void*);
void func_8016F55C_overlay_040(void *arg0){u8*p=arg0;s16 delta;u16 acc; s32 a;
 if(!p[7]){p[7]=1;*(s16*)(p+0x1f4)=0;}
 a=func_801736E4_overlay_040(arg0);
 func_80065400_ovl_01(arg0,a+0x28,0,0);
 delta=func_80032EA4_ovl_01(arg0,*(s16*)(p+0x260),*(s16*)(p+0x262),0x60);
 func_80032B8C_ovl_01(arg0,-*(s16*)(p+0x1f4));
 D_801730A0_overlay_041(arg0,delta);
 if(p[7]==1){func_8017306C_overlay_040(arg0,6,10);if(*(s16*)(p+0x1e0)<11)p[7]++;}else D_80173038_overlay_050(arg0,6,0xf0);
 acc=*(u16*)(p+0x1f4)+delta;*(u16*)(p+0x66)+=delta;*(u16*)(p+0x1f4)=acc;
 a=(s16)acc;if(a<0)a=-a;
 if(a>=0x800 || (delta&0xffff)==0)p[6]=1;
}
