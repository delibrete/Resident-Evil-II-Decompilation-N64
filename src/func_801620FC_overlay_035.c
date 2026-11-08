s32 func_80033634_ovl_01();
s32 func_80089D34_ovl_01(void *, s32, s32, s32);
void func_801620FC_overlay_035(void *arg0, s32 arg1, s32 arg2) {
 u16 temp_v0, var_v0;
 if (*(u8*)((s8*)arg0+6)==0) {
  *(u8*)((s8*)arg0+6)=1;
  if (*(u8*)((s8*)arg0+0x2df)==0) var_v0=(func_80033634_ovl_01()&0x1f)+0x1e;
  else var_v0=0x14;
  *(u16*)((s8*)arg0+0x1f4)=var_v0;
  *(u8*)((s8*)arg0+0x2df)=0;
  *(s32*)((s8*)arg0+0x1e8)=0xf00;
 }
 func_80089D34_ovl_01(arg0,arg1,arg2,0x100);
 temp_v0=*(u16*)((s8*)arg0+0x1f4)-1;
 *(u16*)((s8*)arg0+0x1f4)=temp_v0;
 if ((temp_v0<<16)==0) {
  *(s8*)((s8*)arg0+5)=1;
  *(u16*)((s8*)arg0+6)=0;
 }
}
