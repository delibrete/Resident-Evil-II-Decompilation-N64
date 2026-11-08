#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16; typedef s32 M2C_UNK32;
#define M2C_FIELD(expr,type_ptr,offset) (*(type_ptr)((s8 *)(expr)+(offset)))
#define M2C_BITWISE(type,expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif
s32 func_800532E4_overlay_001(); u8 func_800539C4_overlay_001(u8); M2C_UNK func_800539D0_overlay_001(M2C_UNK,M2C_UNK*,s32*); M2C_UNK func_80053C7C_overlay_001(s32);
extern M2C_UNK D_800B8BA0_overlay_001; extern void *D_8010D8E0_overlay_001;
s32 func_8005302C_ovl_01(u32 arg0,u8 arg1) {
s32 sp10; s32 var_a0; u32 var_s1; u8 temp_v1,temp_v1_2,temp_v1_3,temp_v1_4; void *temp_s2,*var_s0;
temp_s2=D_8010D8E0_overlay_001; sp10=0;
if(func_800532E4_overlay_001()!=0){temp_v1=M2C_FIELD(temp_s2,u8*,0x2D9);M2C_FIELD(temp_s2,s8*,0x2DE)=1;
if(temp_v1==1){M2C_FIELD(temp_s2,u8*,0x2D8)=0U;goto block_24;}
if(arg0==0){switch(arg1){
case 0:M2C_FIELD((temp_s2+M2C_FIELD(temp_s2,u8*,0x2D8)),u8*,0x2E4)=temp_v1;temp_v1_2=M2C_FIELD(temp_s2,u8*,0x2D9);if(temp_v1_2==0x1A){M2C_FIELD(temp_s2,u8*,0x2D8)=1U;func_80053C7C_overlay_001(0x59);goto block_25;}if(temp_v1_2==0xF){M2C_FIELD(temp_s2,u8*,0x2D8)=1U;func_80053C7C_overlay_001(0x4E);goto block_25;}return 0;
case 1:M2C_FIELD((temp_s2+M2C_FIELD(temp_s2,u8*,0x2D8)),u8*,0x2E4)=temp_v1;temp_v1_3=M2C_FIELD(temp_s2,u8*,0x2D9);switch(temp_v1_3){case 2:M2C_FIELD(temp_s2,u8*,0x2D8)=arg1;func_80053C7C_overlay_001(0x41);goto block_25;case 3:M2C_FIELD(temp_s2,u8*,0x2D8)=arg1;func_80053C7C_overlay_001(0x42);goto block_25;case 4:M2C_FIELD(temp_s2,u8*,0x2D8)=arg1;func_80053C7C_overlay_001(0x43);goto block_25;case 5:M2C_FIELD(temp_s2,u8*,0x2D8)=arg1;func_80053C7C_overlay_001(0x44);goto block_25;}break;
case 2:M2C_FIELD(temp_s2,u8*,0x2D8)=1U;goto block_24;default:return 0;}}
else {temp_v1_4=M2C_FIELD(temp_s2,u8*,0x2D9);switch(temp_v1_4){case 28:block_24:block_25:func_800539D0_overlay_001(0,&D_800B8BA0_overlay_001,&sp10);var_s1=0;if(M2C_FIELD(temp_s2,u8*,0x2D8)!=0){var_s0=temp_s2;do{var_s1+=1;M2C_FIELD(var_s0,u8*,0x2E4)=func_800539C4_overlay_001(M2C_FIELD(var_s0,u8*,0x2E4));var_s0=temp_s2+var_s1;}while(var_s1<(u8)M2C_FIELD(temp_s2,u8*,0x2D8));}M2C_FIELD((temp_s2+var_s1),s8*,0x2E4)=0;M2C_FIELD(temp_s2,u8*,0x2D8)=0U;return 1;
case 29:if(M2C_FIELD(temp_s2,u8*,0x2D8)!=0){M2C_FIELD(temp_s2,u8*,0)=(u8)(M2C_FIELD(temp_s2,u8*,0)-1);M2C_FIELD(temp_s2,u8*,0x2D8)=(u8)(M2C_FIELD(temp_s2,u8*,0x2D8)-1);func_80053C7C_overlay_001(0x20);return 0;}goto block_35;
default:if((u8)M2C_FIELD(temp_s2,u8*,0x2D8)<arg0){var_a0=0x2A;if(arg1==0){var_a0=func_800539C4_overlay_001(M2C_FIELD(temp_s2,u8*,0x2D9))&0xFF;}func_80053C7C_overlay_001(var_a0);M2C_FIELD((temp_s2+M2C_FIELD(temp_s2,u8*,0x2D8)),u8*,0x2E4)=(u8)M2C_FIELD(temp_s2,u8*,0x2D9);M2C_FIELD(temp_s2,u8*,0)=(u8)(M2C_FIELD(temp_s2,u8*,0)+1);M2C_FIELD(temp_s2,u8*,0x2D8)=(u8)(M2C_FIELD(temp_s2,u8*,0x2D8)+1);}return 0;}}
}else {block_35:return 0;}}
