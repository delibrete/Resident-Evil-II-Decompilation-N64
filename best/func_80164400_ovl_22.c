extern void func_80032DEC_ovl_01(void*,s32,s32,s32);
extern void func_800377B0_ovl_01(s32,s32,void*,void*);
extern void func_80052C00_ovl_01(s32,s32);
extern void func_80052C9C_ovl_01(s32,s32,s32);
extern void func_80052D40_ovl_01(s32,s32,s32,s32);
extern void func_80077D48_ovl_01(s32,void*);
extern s32 func_80161D90_ovl_22(void*,s32,s32,s32,s32,s32);
extern void func_80162094_overlay_022(s32);
extern void func_801621FC_ovl_22(void*);
extern u8 D_800C7650_ovl_01[];
extern u8 D_800E8FC8_ovl_01[];
void func_80164400_ovl_22(u8*a){
 u8 state=a[6]; void*s1=*(void**)(a+0x234); u8 *g;
 switch(state){
 case 0:
  a[6]=1; a[0x2c7]=0xc8; *(s16*)(a+0x1f4)=0;
 case 1:{
  s32 t=func_80036764_ovl_01_510_24(a,3,0xf,0);
  a[6]+=t;
  g=D_800C7650_ovl_01+0x18000;
  func_80032DEC_ovl_01(a,*(s32*)(g+0x1aa8),*(s32*)(g+0x1ab0),0x18);
  {u16 z[2];z[0]=*(u16*)(a+0x2b8);z[1]=*(u16*)(a+0x2ba);
   t=func_80161D90_ovl_22(a,0xc,0x15,0x19,0x2ee,(s32)z);
   if(t){
    func_80077D48_ovl_01(2,a);
    func_80052C00_ovl_01(3,0);
    func_80052C9C_ovl_01(8,0xdc,0);
    func_80052D40_ovl_01(4,0xdc,0x28,8);
    do { func_801621FC_ovl_22(a); } while (0);
    {u16 w[3];w[0]=*(u16*)((u8*)s1+0x11ee);w[1]=*(u16*)((u8*)s1+0x11f2);w[2]=*(u16*)((u8*)s1+0x11f6);
     func_800377B0_ovl_01(0x2400,0,D_800E8FC8_ovl_01,w);}
    func_80162094_overlay_022(0x1e);
   }
  }break;
 }
 case 2: *(s32*)(a+4)=0x1010000; break;
 }
}
