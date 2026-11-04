typedef struct Obj Obj; typedef struct X {u32 f0,f4,f8,fc,f10,f14;} X; typedef struct { X *(*alloc)(Obj *, s32, s32); s32 (*invoke)(Obj *); s32 (*calculate)(Obj *,s32,s32); } VTable;
struct Obj {void **v0; VTable *vt; u8 pad08[0x3c];s32 flag;u8 pad48[0x14];s32 x5C;u8 pad60[4];s32 x64;u8 pad68[0xa0];s32 x108;u8 pad10c[0x64];X *thing;};
extern u8 D_8002E600_ovl_01[];
void func_8002E72C_ovl_01(Obj*p,s32 mode){
 X*x=p->vt->alloc(p,1,0x1c);
 p->thing=x; x->f0=(u32)D_8002E600_ovl_01; x->f8=0;
 if(p->flag){x->f10=p->x108;if(mode){((s32*)*p->v0)[5]=4;((void(*)(Obj*))**(void(**)(void))p->v0)(p);return;}
 x->fc=p->vt->calculate(p,1,p->x5C*p->x64);}
}
