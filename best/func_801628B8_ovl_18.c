extern void func_8003420C_ovl_01(); extern void func_80077D48_ovl_01(); extern void func_80162B1C_overlay_018(); extern void func_800324AC(); extern u8 D_80162CD4_overlay_018[];
typedef struct O{u8 p[0x2c0];}O;
void func_801628B8_ovl_18(O*p){
 if(p->p[6]==0){p->p[6]=1;if(p->p[0x2be]==0)func_8003420C_ovl_01(*(s32*)(p->p+0x208),0xbf10bf00);else *(s32*)p->p|=0x400;func_80077D48_ovl_01(7,p);func_80162B1C_overlay_018(p,0,D_80162CD4_overlay_018[p->p[5]]);}
 else func_800324AC(p);
}
