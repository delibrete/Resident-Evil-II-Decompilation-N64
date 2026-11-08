#define M2C_FIELD(expr,type_ptr,offset) (*(type_ptr)((s8 *)(expr)+(offset)))
s32 func_8004CDB8_overlay_001(s32); s32 func_80077460_overlay_001(s32,s32,void **); s32 func_80078F14_overlay_001(s8,s32,s32); s32 func_80079448_overlay_001(s8,s32,void **);
extern s32 D_800C7650_overlay_001,D_800E8AFC_overlay_001,D_801170B8_overlay_001,D_80119E3C_overlay_001,D_80119E84_overlay_001; extern void *D_80119E40_overlay_001;
void func_80076A38_ovl_01(void) {
 s32 var_s0; void *temp_a0; void *temp_a0_2;
 if (!(M2C_FIELD(&D_800C7650_overlay_001,s32 *,0x19A3C)&0x2000)) {
 temp_a0=(*(M2C_FIELD(&D_800C7650_overlay_001,s16 *,0x215F8)+&D_801170B8_overlay_001)*2)+&D_800E8AFC_overlay_001;
 D_80119E40_overlay_001=temp_a0; temp_a0_2=temp_a0+(M2C_FIELD(&D_800C7650_overlay_001,s16 *,0x215FA)*2); D_80119E40_overlay_001=temp_a0_2;
 if ((M2C_FIELD(temp_a0_2,u8 *,0)&0x3F)!=(M2C_FIELD(&D_80119E3C_overlay_001,u8 *,0)&0x3F)){func_80077460_overlay_001(0x5A,0x16,&D_80119E40_overlay_001);return;}
 if ((M2C_FIELD(temp_a0_2,u8 *,1)&0x3F)!=(M2C_FIELD(&D_80119E3C_overlay_001,u8 *,1)&0x3F)) {
 if (M2C_FIELD(&D_80119E84_overlay_001,u8 *,8)==1) if ((func_80079448_overlay_001(M2C_FIELD(&D_80119E84_overlay_001,s8 *,0xA),0,&D_80119E40_overlay_001)<<16)!=0){func_80078F14_overlay_001(M2C_FIELD(&D_80119E84_overlay_001,s8 *,0xA),0x7F,0x5A);M2C_FIELD(&D_80119E84_overlay_001,u8 *,8)=0x32U;}
 if ((M2C_FIELD(&D_80119E84_overlay_001,u8 *,0x10)==1)&&((func_80079448_overlay_001(M2C_FIELD(&D_80119E84_overlay_001,s8 *,0x12),0,&D_80119E40_overlay_001)<<16)!=0)){func_80078F14_overlay_001(M2C_FIELD(&D_80119E84_overlay_001,s8 *,0x12),0x7F,0x5A);M2C_FIELD(&D_80119E84_overlay_001,u8 *,0x10)=0x32U;}
 }
 var_s0=0x59; do {func_8004CDB8_overlay_001(1);var_s0--;}while(var_s0!=0);
 }
}
