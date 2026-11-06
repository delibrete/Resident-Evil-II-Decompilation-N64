typedef struct {u8 pad[4];u8 unk4;u8 p5[8];u8 mode;u8 pE[0x27e];s32 val;u8 p290[0x25];s8 flag;u8 p2b6[0x12];u16 bits;} O;
extern u8 D_800C7650_ovl_01[],D_800E10D0_ovl_01[];
s32 func_80036ED0(s32,s32,s32,s32);
void *func_801626E8_overlay_016(O*p){u32 off=0x18000;union { u8* pointer; s32 value; } __repair_phase_storage = {D_800C7650_ovl_01 };u8*tab=__repair_phase_storage.pointer+off;s32 v;
s32 __repair_phase_v;
void*r;
 if(*(s16*)(tab+0x1c72)<0)goto zero;
 v=7;if(p->unk4==v){p->flag=0;goto zero;}
 v=p->bits&1;if(v)goto def;
 v=p->mode;if((u32)v<2){p->flag=1;v=p->mode;v<<=2;v+=(u32)__repair_phase_storage.pointer;v+=off;v+=0x1d38;r=*(void**)v;goto done;}
 __repair_phase_storage.value=func_80036ED0(p->val,0xbb8,0x2328,0x238c);
 if(__repair_phase_storage.value==1){v=*(u16*)(tab+0x1a7a)&5;if(!v)goto zero;p->flag=1;{r=(void*)0x800e0000;goto done;}}
 if(v==0){__repair_phase_v=*(u32*)(tab+0x1a78)&0x17;if(!__repair_phase_v)goto zero;p->flag=(s8)p->val;{r=(void*)0x800e0000;goto done;}}
 if((u32)v<4){v=*(u16*)(tab+0x1a7a)&5;if(!v)goto zero;p->flag=1;{r=(void*)0x800e0000;goto done;}}
 zero:r=0;goto done;
 special:r=(void*)0x800e0000;goto done;
 def:r=D_800E10D0_ovl_01;
 done:return r;
}
