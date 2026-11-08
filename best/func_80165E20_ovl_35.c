void func_80165E20_ovl_35(void *arg0, void *arg1) {
 s32 a,b,c;
 u8 d=*(u8*)((s8*)arg1+7);
 switch(d) {
 case 0:
  *(u8*)((s8*)arg1+7)=1;
  *(u16*)((s8*)arg1+2)=-0x100U;
  *(u16*)((s8*)arg1+4)=-0x100U;
 case 1:
  a=*(u16*)((s8*)arg1+2)+0x200;
  *(u16*)((s8*)arg1+2)=a;
  if((s16)a>=0x300) {
   *(u8*)((s8*)arg1+7)=2;
   c=0x300;
   *(u16*)((s8*)arg1+2)=c;
  }
  break;
 case 2:
  b=*(u16*)((s8*)arg1+2)-0x200;
  *(u16*)((s8*)arg1+2)=b;
  c=-0x100U;
  if((s16)b < -0xff) {
   *(u8*)((s8*)arg1+7)=1;
   *(u16*)((s8*)arg1+2)=c;
  }
  break;
 }
 *(u16*)((s8*)arg1+4)=*(u16*)((s8*)arg1+2);
}
