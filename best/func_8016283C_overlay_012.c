s32 func_80032B8C_ovl_01(void *,s32); s16 func_80032EA4_ovl_01(void *,s16,s16,s16); s32 func_80065400_ovl_01(void *,void *,s32,s32); s32 func_801664A8_ovl_12(s32,s32); s32 func_80166510_ovl_12(void *,s16); s32 func_80166568_ovl_12(void *); void *func_80166B54_ovl_12(void *);
typedef struct { unsigned char pad_0[5]; unsigned char field_5; unsigned short field_6; unsigned char pad_8[94]; unsigned short field_66; unsigned char pad_68[324]; int field_1AC; unsigned char pad_1B0[176]; short field_260; short field_262; } __repair_record_arg0;
void func_8016283C_overlay_012(void *arg0) {u8 *s0=(u8*)arg0+0x2B4; s16 s1=0; s32 result; void *s3;
 func_801664A8_ovl_12(0x28,0xF0);
 if(s0[5]==0) {s3=func_80166B54_ovl_12(arg0); func_80065400_ovl_01(arg0,(u8*)s3+0x28,0,0); s1=func_80032EA4_ovl_01(arg0,((__repair_record_arg0*)arg0)->field_260,((__repair_record_arg0*)arg0)->field_262,*(s16*)(s0+0xC)); if((u8)s0[0x18]>=0x10){if(s1==0)s1=*(s16*)(s0+0xC);} ((__repair_record_arg0*)arg0)->field_66+=s1;}
 else {s0[5]--;if(!s0[5]||(((__repair_record_arg0*)arg0)->field_1AC&1)){s0[5]=0;s0[8]=0;}}
 func_80032B8C_ovl_01(arg0,0);func_80166510_ovl_12(arg0,s1);result=func_80166568_ovl_12(arg0);
 if(result){if(result<0){*(u16*)(s0+2)+=10;if(result==-2){((__repair_record_arg0*)arg0)->field_5=8;((__repair_record_arg0*)arg0)->field_6=0;return;}if(result==-4)s0[4]=1;}else{((__repair_record_arg0*)arg0)->field_5=3;((__repair_record_arg0*)arg0)->field_6=0;return;}}
 if(*(s16*)(s0+2)>=0x1C3){if(*(s16*)((u8*)s3+0x1F2)>=0x15)*(u16*)(s0+2)=0;s0[4]=1;}if(s0[4]){s0[4]=0;((__repair_record_arg0*)arg0)->field_6=0x200;}
}
