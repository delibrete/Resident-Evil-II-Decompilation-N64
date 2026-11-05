#define F(e,t,o) (*(t)((s8*)(e)+(o)))
extern s32 func_80033634_ovl_01(void);
extern void func_80089D34_ovl_01(void*,s32,s32,s32);
extern void func_801636DC_overlay_027(void*,s32);
void func_80162770_ovl_27(void *a0,s32 a1,s32 a2){
 u8 v; s32 x;
 if(F(a0,u8*,6)!=0) return;
 v=1; F(a0,u8*,6)=v; F(a0,u8*,0x2c7)=v;
 F(a0,s16*,0x2c2)=0x400;
 x=func_80033634_ovl_01();
 F(a0,s32*,0x1e8)=(x&7)<<16;
 func_80089D34_ovl_01(a0,a1,a2,0x200);
 if(F(a0,u8*,0x2bf)!=1) return;
 if(F(a0,u8*,0x2c6)!=0) return;
 F(a0,s32*,4)=0x02020000;
 F(a0,u8*,0x2be)=0;
 F(a0,u8*,0x206)=F(a0,u8*,0x2bf);
 func_801636DC_overlay_027(a0,0);
}
