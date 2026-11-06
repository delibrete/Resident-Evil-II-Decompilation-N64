typedef s32 M2C_UNK;
void func_80040E88_ovl_01(s16 *, s16 *, void *);
void func_8004279C_ovl_01(s16 *, s16 *, s16 *);
void func_80166E20_ovl_26(void *arg0, void *arg1, s16 arg2) {
 s16 sp10[8];
 s16 sp20[8];
 void *temp_a2;
 temp_a2 = *(void **)((char*)arg1+0x234) + (*(u8*)((char*)arg1+0x25d)*0x178);
 sp10[0]=*(u16*)((char*)arg1+0x64);
 sp10[1]=(*(u16*)((char*)temp_a2+0x130)+*(u16*)((char*)arg1+0x66)+*(u16*)((char*)temp_a2+0x5a)+(*(u8*)((char*)arg1+0x2cd)<<11))&0xfff;
 sp10[2]=*(u16*)((char*)arg1+0x68);
 func_80040E88_ovl_01(sp10,sp20,temp_a2);
 sp20[0]=arg2; sp20[1]=0; sp20[2]=0;
 func_8004279C_ovl_01(sp20,sp20+ -2,sp10);
 *(s32*)((char*)arg0+0x28)=*(s32*)((char*)arg1+0x28)+(s16)sp10[0];
 *(s32*)((char*)arg0+0x30)=*(s32*)((char*)arg1+0x30)+(s16)sp10[2];
}
