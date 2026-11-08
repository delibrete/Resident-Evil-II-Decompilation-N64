extern f64 D_800BA540_overlay_001; extern f32 D_800BA548_overlay_001,D_800BA54C_overlay_001,D_800BA550_overlay_001,D_800BA554_overlay_001; extern f64 D_800BA558_overlay_001; extern f32 D_800BA560_overlay_001,D_800BA564_overlay_001,D_800BA568_overlay_001,D_800BA56C_overlay_001;
extern s32 D_80143EAC,D_80143EB0; extern u16 D_80143EB4,D_80143EEE; extern s8 D_80143EB6; extern u8 D_80143F88; extern s32 D_80143F04;
typedef s32 (*AllocFn)(s32,s32); extern AllocFn D_80143FA8;
typedef s32 (*AllocExFn)(s32,s32,s32*); extern AllocExFn D_80143F90;
extern s32 func_80006650(s32,s32); extern s32 func_8000EFA0(s32,s32);
typedef struct { s32 p0; s32 p4; s16 x; s16 y; } S_FEF8;
extern S_FEF8 D_80143EF8; extern s16 D_80143F00[2];
void func_800A28F0_ovl_01(u16 count, s32 time) {
 s32 i, ptr; f64 t; f32 frame;
 D_80143EB4=count; ptr=D_80143FA8(count*0x68,0); D_80143EAC=ptr; D_80143EB0=ptr; D_80143EB6=0;
 for(i=0;i<(u16)D_80143EB4;i++){ *(s32*)(ptr+i*0x68)=0; *(s8*)(ptr+i*0x68+0x61)=0; *(s8*)(ptr+i*0x68+0x60)=-1; }
 if(D_80143F88==0){ t=(f64)time; if(time<0)t+=D_800BA540_overlay_001; frame=(((f32)t/D_800BA548_overlay_001)/D_800BA54C_overlay_001)*D_800BA550_overlay_001; if(D_800BA554_overlay_001<=frame) D_80143EEE=(s32)(frame-D_800BA554_overlay_001)|0x8000; else D_80143EEE=(s32)frame+1; }
 else { t=(f64)time; if(time<0)t+=D_800BA558_overlay_001; frame=(((f32)t/D_800BA560_overlay_001)/D_800BA564_overlay_001)*D_800BA568_overlay_001; if(D_800BA56C_overlay_001<=frame) D_80143EEE=(s32)(frame-D_800BA56C_overlay_001)|0x8000; else D_80143EEE=(s32)frame+1; }
 D_80143EF8.p0= D_80143F90(D_80143EEE*0xA10,0,0); D_80143EF8.p4=D_80143F90(D_80143EEE*0xA10,0,0);
 D_80143F00[0]=0; D_80143F00[1]=0;
 ptr=D_80143F90(0x298,0,D_80143F00); D_80143F04=ptr; func_80006650(ptr,0x298); func_8000EFA0(D_80143F04,0x298);
}
