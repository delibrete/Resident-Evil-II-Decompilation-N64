s32 func_800072E0(void); s32 func_80007300(s32, u16); s32 func_8004CDB8_overlay_001(s32); s32 func_800A8640_overlay_001(s32,s32,s32,s32,s32); s32 func_800A89A4_overlay_001(void);
extern s32 D_8011A6A0_overlay_001,D_8011A6A4_overlay_001,D_8011A6A8_overlay_001,D_8011A6AC_overlay_001;
extern u8 D_8013A0E0[]; extern u16 D_8013A108;
u16 func_80075638_ovl_01(s32 arg0,s32 arg1) {
 s32 var_s0=0,var_s2=0; u16 temp_a1,temp_v0_2,temp_v0_4,temp_v1; u8 *temp_v0,*temp_v1_3,*temp_v0_3,*temp_v1_2; u16 temp[2][2];
 if(D_8013A108!=0) {
 loop_2: temp_v1=D_8013A108-1;
 if(*(u16 *)(D_8013A0E0+temp_v1*4+2)!=(arg0&0xFFFF)) {
 D_8013A108=temp_v1; temp_v0=D_8013A0E0+D_8013A108*4; temp_v1_2=(u8 *)temp+var_s0*4;
 *(u16 *)(temp_v1_2)=*(u16 *)temp_v0; temp_v0_2=*(u16 *)(temp_v0+2); *(u16 *)(temp_v1_2+2)=temp_v0_2;
 if((temp_v0_2<4)&&(var_s2==0)){if(arg1&0xFFFF)func_8004CDB8_overlay_001(1);var_s2=func_800072E0();}
 var_s0+=1; func_800A89A4_overlay_001(); if(D_8013A108!=0)goto loop_2;
 }
 if(D_8013A108!=0){if(*(u16 *)(D_8013A0E0+(D_8013A108-1)*4+2)==(arg0&0xFFFF)){func_800A89A4_overlay_001();D_8013A108-=1;}}
 if(D_8013A108==0xFFFF)D_8013A108=0;
 if(var_s0&0xFFFF){do{var_s0-=1;temp_v0_3=(u8 *)temp+var_s0*4;temp_a1=*(u16 *)temp_v0_3;temp_v1_3=D_8013A0E0+D_8013A108*4;*(u16 *)temp_v1_3=temp_a1;temp_v0_4=*(u16 *)(temp_v0_3+2);D_8013A108+=1;*(u16 *)(temp_v1_3+2)=temp_v0_4;
 if(temp_v0_4>=4){if(var_s2!=0){func_80007300(var_s2,temp_a1);var_s2=0;if(arg1&0xFFFF)func_8004CDB8_overlay_001(1);}}
 func_800A8640_overlay_001(D_8011A6A0_overlay_001,temp_a1&0xFFFF,D_8011A6A4_overlay_001,D_8011A6A8_overlay_001,D_8011A6AC_overlay_001);
 }while(var_s0&0xFFFF);}
 if(var_s2!=0){func_80007300(var_s2,0);if(arg1&0xFFFF)func_8004CDB8_overlay_001(1);}
 return D_8013A108;}return 0U;
}
