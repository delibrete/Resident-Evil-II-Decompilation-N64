extern s32 func_8003420C_ovl_01(void*,s32);extern s32 D_800C7650_ovl_01;
void func_801662F0_ovl_12(void*p){
int __repair_literal;
u8 *s=(u8*)p+0x2bd;u8 st=s[9];void *obj=*(void**)((char*)p+0x208);u8 t;if(st==1)goto advance;
__repair_literal = 2;
if(st>=__repair_literal)return;if(st!=0)return;s[9]=1;func_8003420C_ovl_01(obj,D_800C7650_ovl_01);((u8*)p)[0x207]=0x5a;advance:*(u16*)((char*)obj+4)+=8;*(u16*)((char*)obj+6)+=8;t=--((u8*)p)[0x207];if(t==0)s[9]=2;}
