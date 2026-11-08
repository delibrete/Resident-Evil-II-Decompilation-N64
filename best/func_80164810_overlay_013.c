extern u8 D_800C7650[];
extern s32 func_80032D44_ovl_01(s32,s32,s32,s32);
extern s32 func_80033634_ovl_01(void);
extern s32 func_80164A70_overlay_013(void*,s32);
extern void func_80164AD0_overlay_013(void*);
extern void func_80166080_overlay_013(void*);
extern s32 func_80166158_overlay_013(void*,s32);
extern void func_80035AAC_ovl_01_108(void*);
extern void func_80165BD8_overlay_013(void*,s32,s32);
typedef struct {u8 pad[0x1e2];s16 unk1e2;u8 pad1e4[0x50];void *unk234;} Obj;
void func_80164810_overlay_013(Obj *arg0) {
 s16 angle;
 s32 flags;
 arg0->unk1e2=0;
 angle=(s16)func_80032D44_ovl_01(*(s16*)(D_800C7650+0x19aaa+0x18000),*(s16*)(D_800C7650+0x19ab2+0x18000),*(s16*)((u8*)arg0+0x2a),*(s16*)((u8*)arg0+0x32));
 angle=(s16)func_80033634_ovl_01();
 flags=func_80164A70_overlay_013(arg0->unk234,angle)&0xff;
 if(flags&1){func_80164A70_overlay_013((u8*)arg0->unk234+0x178,angle);func_80164A70_overlay_013((u8*)arg0->unk234+0x2f0,angle);}
 else {func_80164AD0_overlay_013((u8*)arg0->unk234+0x178);func_80164AD0_overlay_013((u8*)arg0->unk234+0x2f0);}
 if(flags&2){func_80164A70_overlay_013((u8*)arg0->unk234+0x468,angle);func_80164A70_overlay_013((u8*)arg0->unk234+0x5e0,angle);func_80164A70_overlay_013((u8*)arg0->unk234+0x758,angle);}
 else {func_80164AD0_overlay_013((u8*)arg0->unk234+0x468);func_80164AD0_overlay_013((u8*)arg0->unk234+0x5e0);func_80164AD0_overlay_013((u8*)arg0->unk234+0x758);}
 if(flags&4){func_80164A70_overlay_013((u8*)arg0->unk234+0x8d0,angle);func_80164A70_overlay_013((u8*)arg0->unk234+0xa48,angle);func_80164A70_overlay_013((u8*)arg0->unk234+0xbc0,angle);}
 else {func_80164AD0_overlay_013((u8*)arg0->unk234+0x8d0);func_80164AD0_overlay_013((u8*)arg0->unk234+0xa48);func_80164AD0_overlay_013((u8*)arg0->unk234+0xbc0);}
 func_80164A70_overlay_013((u8*)arg0->unk234+0xd38,angle);func_80164A70_overlay_013((u8*)arg0->unk234+0xeb0,angle);
 if(flags&8)func_80164A70_overlay_013((u8*)arg0->unk234+0x1028,angle);else func_80164AD0_overlay_013((u8*)arg0->unk234+0x1028);
 if(flags&0x10)func_80164A70_overlay_013((u8*)arg0->unk234+0x11a0,angle);else func_80164AD0_overlay_013((u8*)arg0->unk234+0x11a0);
 func_80166080_overlay_013(arg0);func_80166080_overlay_013(arg0);func_80166080_overlay_013(arg0);
 flags=func_80033634_ovl_01()&3;
 func_80166158_overlay_013(arg0,flags|8);
 func_80035AAC_ovl_01_108(arg0);
 func_80165BD8_overlay_013(arg0,7,1);
}
