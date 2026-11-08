extern void func_800AE370_overlay_001(void);
extern u8 D_801583D8[], D_801587E0[], D_801588E0[];
extern u16 D_801587DA;
void func_800AE478_ovl_01(void *arg0,u8 arg1){
s32 temp_a3,temp_v1_2;u16 temp_a0_2,temp_a0_3,temp_a1,var_a0,var_s3;u32 temp_v1,var_v1;u8 *temp_a0;u8 temp_s4,temp_v0;void *temp_s0,*temp_v0_2,*temp_v1_3,*temp_v1_4;
temp_s4=*(u8*)((s8*)arg0+0x63);temp_s0=(s8*)D_801587E0+temp_s4*4;
if(*(u16*)((s8*)temp_s0+2)==1){if(*(u8*)((s8*)arg0+0x2E)!=(arg1&0xFF)){func_800AE370_overlay_001();goto block_3;}}else{
block_3:*(s8*)temp_s0=0xFF;temp_a3=arg1&0xFF;temp_a0=temp_a3+D_801588E0;*(u16*)((s8*)temp_s0+2)=1U;temp_v0=*temp_a0;*(u8*)((s8*)temp_s0+1)=temp_v0;
if((temp_v0&0xFF)!=0xFF){*((s8*)D_801587E0+*temp_a0*4)=temp_s4;}else{temp_a0_2=D_801587DA&0xFFFF;temp_a1=arg1&0xFF;if(temp_a0_2!=0xFFFF){temp_v1=temp_a1&0xFFFF;if(temp_v1>=temp_a0_2){var_a0=D_801587DA;var_v1=var_a0&0xFFFF;
loop_8:if(temp_v1>=var_v1){var_s3=var_a0;var_a0=*(u16*)((s8*)D_801583D8+var_v1*4);var_v1=var_a0&0xFFFF;if(var_a0!=0xFFFF)goto loop_8;}
* (u16*)((s8*)D_801583D8+(var_s3&0xFFFF)*4)=temp_a1;temp_v0_2=(s8*)D_801583D8+(arg1&0xFF)*4;temp_v1_2=var_a0&0xFFFF;*(u16*)((s8*)temp_v0_2+2)=var_s3;*(u16*)temp_v0_2=var_a0;if(temp_v1_2!=0xFFFF)*(u16*)((s8*)D_801583D8+temp_v1_2*4+2)=temp_a1;
}else{temp_a0_3=D_801587DA;temp_v1_3=(s8*)D_801583D8+temp_a3*4;*(u16*)temp_v1_3=D_801587DA;*(s16*)((s8*)temp_v1_3+2)=0xFFFF;D_801587DA=temp_a1;*(u16*)((s8*)D_801583D8+temp_a0_3*4+2)=temp_a1;}}
else{temp_v1_4=(s8*)D_801583D8+temp_a3*4;*(u16*)temp_v1_4=temp_a0_2;*(u16*)((s8*)temp_v1_4+2)=temp_a0_2;D_801587DA=arg1&0xFF;}}
*((s8*)D_801588E0+(arg1&0xFF))=temp_s4;*(u8*)((s8*)arg0+0x2E)=arg1;}}
