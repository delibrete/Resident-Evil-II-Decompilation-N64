extern u8 D_8017092C_overlay_055[];
extern s32 func_800377B0_ovl_01(s32,s16,s32,s16*);
void func_801706C8_overlay_055(u8 *arg0,s32 arg1,s32 arg2){
 u8 *rec=D_8017092C_overlay_055+(arg2&255)*6;
 u8 *p=*(u8**)(arg0+0x234)+(arg1&255)*0x178;
 s16 out[3]={0,0,0};
 s32 packed=((s32)rec[0]<<24)|((s32)rec[1]<<16)|*(u16*)(rec+4);
 func_800377B0_ovl_01(packed,*(s16*)(arg0+0x66),(s32)(p+0x38),out);
}
