s32 func_80040BE4_overlay_001(s32,s16,s16,s16); s32 func_80040C9C_overlay_001(s32*,s32*,s32*,s32); extern s32 D_800C7650_overlay_001;
void func_80065760_ovl_01(u8 arg0,u8 arg1,u16 arg2,u16 arg3) {
 u16 sp10=0,sp30=0,sp50=0,sp70=0; s32 spC8=0,spCC=0,spD0=0,spD8=0,spDC=0,spE0=0,spE8=0,spEC=0,spF0=0; u8 spB8=arg0,sp188=arg1,sp1AC=0; u16 sp196=arg2,sp19E=arg3,sp1A6=1<<arg1; s32 sp1A8=0x7fffffff,sp1B0=0,sp1B4=0,sp1B8=0,sp1BC=0,sp1C8=arg1; void *sp1C0; s32 *var_t7; u16 *var_s5=&sp10,*var_t6=&sp30,*var_s7=&sp50,*var_fp=&sp70; s8 *var_t5=(s8*)&sp188; s32 var_s6=0; s32 temp;
 var_t7=(s32*)*((s32*)((char*)&D_800C7650_overlay_001+0x1827c)+0x38); sp1C0=*(void**)((char*)&D_800C7650_overlay_001+0x18288);
 temp=*((u16*)((char*)var_t7+arg0*12+14)); sp10=temp; sp70=*(u16*)((char*)sp1C0+0x2a); var_fp[1]=*(u16*)((char*)sp1C0+0x32);
 while(sp10){ if(var_s5==&sp10)break; else break; }
}
