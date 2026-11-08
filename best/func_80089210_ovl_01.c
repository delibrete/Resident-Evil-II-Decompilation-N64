#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif
extern M2C_UNK D_800E8FC8_overlay_001;
extern u16 D_800E8FE8_overlay_001;
void func_80089210_ovl_01(void *arg0) {
int __repair_constant = 2;

    s16 *temp_v0_2; s16 temp_v0_3, temp_v0_4, temp_v0_5;
    u8 *var_t2; s32 temp_a0, temp_t6, temp_v1, var_a0, var_t0, var_t3, var_t4;
    u16 *var_a1, *var_a3, *var_t1, *var_v1; u16 temp_v0; void *var_a2;
    var_t3=0; var_t2=M2C_FIELD(arg0,u8 **,0x234); var_t4=M2C_FIELD(arg0,u8 *,0x1A3)-1;
    M2C_FIELD(var_t2,s32 *,0x64)=(s32)(arg0+0x14); M2C_FIELD(var_t2,void **,0x12C)=arg0;
    M2C_FIELD(arg0,s32 *,0x1D8)=0; M2C_FIELD(arg0,s16 *,0x1DC)=0;
    M2C_FIELD(arg0,s32 *,0x1B8)=(s32)M2C_FIELD(&D_800E8FC8_overlay_001,s32 *,0);
    M2C_FIELD(arg0,s32 *,0x1BC)=(s32)M2C_FIELD(&D_800E8FC8_overlay_001,s32 *,4);
    M2C_FIELD(arg0,s32 *,0x1C0)=(s32)M2C_FIELD(&D_800E8FC8_overlay_001,s32 *,8);
    M2C_FIELD(arg0,s32 *,0x1C4)=(s32)M2C_FIELD(&D_800E8FC8_overlay_001,s32 *,0xC);
    M2C_FIELD(arg0,s32 *,0x1C8)=(s32)M2C_FIELD(&D_800E8FC8_overlay_001,s32 *,0x10);
    M2C_FIELD(arg0,s32 *,0x1CC)=(s32)M2C_FIELD(&D_800E8FC8_overlay_001,s32 *,0x14);
    M2C_FIELD(arg0,s32 *,0x1D0)=(s32)M2C_FIELD(&D_800E8FC8_overlay_001,s32 *,0x18);
    M2C_FIELD(arg0,s32 *,0x1D4)=(s32)M2C_FIELD(&D_800E8FC8_overlay_001,s32 *,0x1C);
    M2C_FIELD(arg0,void **,0x70)=(void *)(arg0+0x1B8); temp_t6=M2C_FIELD(arg0,s32 *,0x1A4)+8;
    if(var_t4!=-1) { var_a2=var_t2+0x2C; do {
        M2C_FIELD(var_a2,s32 *,0xC)=(s32)M2C_FIELD(&D_800E8FC8_overlay_001,s32 *,0);
        M2C_FIELD(var_a2,s32 *,0x10)=(s32)M2C_FIELD(&D_800E8FC8_overlay_001,s32 *,4);
        M2C_FIELD(var_a2,s32 *,0x14)=(s32)M2C_FIELD(&D_800E8FC8_overlay_001,s32 *,8);
        M2C_FIELD(var_a2,s32 *,0x18)=(s32)M2C_FIELD(&D_800E8FC8_overlay_001,s32 *,0xC);
        M2C_FIELD(var_a2,s32 *,0x1C)=(s32)M2C_FIELD(&D_800E8FC8_overlay_001,s32 *,0x10);
        M2C_FIELD(var_a2,s32 *,0x20)=(s32)M2C_FIELD(&D_800E8FC8_overlay_001,s32 *,0x14);
        M2C_FIELD(var_a2,s32 *,0x24)=(s32)M2C_FIELD(&D_800E8FC8_overlay_001,s32 *,0x18);
        M2C_FIELD(var_a2,s32 *,0x28)=(s32)M2C_FIELD(&D_800E8FC8_overlay_001,s32 *,0x1C);
        var_t1=(u16 *)(var_t2+8); var_t0=__repair_constant; var_a3=&D_800E8FE8_overlay_001;
loop_3: var_a1=var_t1; var_a0=__repair_constant; var_v1=var_a3;
do { temp_v0=*var_v1; var_v1+=1; var_a0-=1; *var_a1=temp_v0; var_a1+=1; } while (var_a0!=-1);
        var_t1+=3; var_t0-=1; var_a3+=3; if(var_t0!=-1) goto loop_3;
        M2C_FIELD(var_a2,s32 *,0x34)=0x808080; M2C_FIELD(var_a2,s32 *,-0x28)=0; M2C_FIELD(var_a2,s32 *,0x2C)=0; M2C_FIELD(var_a2,s16 *,0x30)=0; *(s32 *)var_t2=1;
        temp_v0_2=(s16 *)(temp_t6+((var_t3^1)*2)); temp_v1=var_t3+1; temp_a0=var_t3+2; var_t3+=3; var_t2+=0x178;
        M2C_FIELD(var_a2,s16 *,0x20)=0; M2C_FIELD(var_a2,s16 *,0x104)=0; M2C_FIELD(var_a2,s16 *,0x106)=0; M2C_FIELD(var_a2,s16 *,0x108)=0; M2C_FIELD(var_a2,s16 *,0x10A)=0; M2C_FIELD(var_a2,s16 *,0x10C)=0; M2C_FIELD(var_a2,s16 *,0x10E)=0;
        temp_v0_3=*temp_v0_2; M2C_FIELD(var_a2,s32 *,-0x10)=(s32)temp_v0_3; M2C_FIELD(var_a2,s16 *,-4)=temp_v0_3;
        temp_v0_4=*(s16 *)(temp_t6+((temp_v1^1)*2)); M2C_FIELD(var_a2,s32 *,-0xC)=(s32)temp_v0_4; M2C_FIELD(var_a2,s16 *,-2)=temp_v0_4;
        temp_v0_5=*(s16 *)(temp_t6+((temp_a0^1)*2)); var_t4-=1; M2C_FIELD(var_a2,s32 *,-8)=(s32)temp_v0_5; M2C_FIELD(var_a2,s16 *,0)=temp_v0_5; var_a2+=0x178;
    } while(var_t4!=-1); }
}
