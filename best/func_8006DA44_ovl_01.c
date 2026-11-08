s32 func_8006D130_overlay_001(u8); s32 func_8006D364_overlay_001(void); s32 func_8006D3B4_overlay_001(void);
extern s32 D_80113838_overlay_001, D_80113A70_overlay_001;
void func_8006DA44_ovl_01(void) {
 s32 *p; s32 done,r; void *top,*q; u8 *cur;
 done=0;p=&D_80113A70_overlay_001;
 do {
 if(*((u8*)p+1)==0)done++;
 else {
again:
 cur=*((u8**)p+7); func_8006D130_overlay_001(*cur);
 r=((s32 (*)(s32*))(*(s32*)((char*)&D_80113838_overlay_001+(*cur)*4)))(p);
 if(r==1)goto again;
 if(r==2)done++;
 else if(*((s8*)((char*)p+*((s8*)p+2)+4))<0)done++;
 else {top=*(void**)((char*)p+0x140);*(void**)((char*)p+0x140)=(char*)top-4;q=(char*)p+*((s8*)p+2);*((u8**)p+7)=*(u8**)((char*)top-4);*((u8*)q+4)-=1;goto again;}
 }
 p=(s32*)((char*)p+0x174);
 }while(done<10);
 func_8006D364_overlay_001();func_8006D3B4_overlay_001();
}
