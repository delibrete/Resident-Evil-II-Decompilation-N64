#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#endif
s32 func_80040BE4_overlay_001(s32,s32);
s32 func_80061178_ovl_01(void *arg0, void *arg1, s32 arg2) {
 s32 temp_lo; s32 temp_v0; s32 temp_v0_2; s32 var_s0; s32 var_s2; s32 var_s3; s32 var_s7;
 u32 temp_v1; u32 var_s4; u8 *var_s1; void *temp_a0;
 var_s7=0; var_s4=0x7FFFFFFF;
 if((u8)M2C_FIELD(arg0,u8*,8)<0x10U) return 0;
 var_s3=4; var_s2=0; var_s1=(u8*)arg2+((M2C_FIELD(arg0,u8*,8)*8)-0x80);
 do {
 temp_a0=(u8*)M2C_FIELD(arg0,s32*,0x234)+(*var_s1*0x178);
 var_s0=M2C_FIELD(temp_a0,s32*,0x50)-M2C_FIELD(arg1,s32*,0x18); if(var_s0<0)var_s0=-var_s0;
 temp_v0=M2C_FIELD(temp_a0,s32*,0x4C)-M2C_FIELD(arg1,s32*,0x14); temp_lo=temp_v0*temp_v0;
 temp_v0_2=M2C_FIELD(temp_a0,s32*,0x54)-M2C_FIELD(arg1,s32*,0x1C);
 temp_v1=var_s0+func_80040BE4_overlay_001(temp_lo+(temp_v0_2*temp_v0_2),temp_lo);
 if(temp_v1<var_s4){var_s4=temp_v1; var_s7=*var_s1|(var_s2<<0x10);}
 var_s1+=2; var_s3-=1; var_s2+=1;
 } while(var_s3!=0);
 return var_s7;
}
