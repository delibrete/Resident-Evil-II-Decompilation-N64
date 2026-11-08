#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16; typedef s32 M2C_UNK32;
#define M2C_FIELD(expr,type_ptr,offset) (*(type_ptr)((s8 *)(expr)+(offset)))
#define M2C_UNALIGNED32(x) (x)
#define M2C_BITWISE(type,expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif
M2C_UNK func_8008386C_overlay_001(M2C_UNK,s32,s16*,s16*);
extern M2C_UNK D_800B92D0_overlay_001;
s32 func_8006A81C_ovl_01(s32 arg0){s16 sp10,sp14; s32 var_v1;
sp10=M2C_UNALIGNED32(M2C_FIELD(&D_800B92D0_overlay_001,M2C_UNK*,0));
sp14=M2C_UNALIGNED32(M2C_FIELD(&D_800B92D0_overlay_001,M2C_UNK*,4));
func_8008386C_overlay_001(0,arg0,&sp10,&sp10);
var_v1=sp14 < -0x4000;
if(sp10>=0x4001)var_v1=2;
if(sp10 < -0x4000)var_v1=3;
if(sp14>=0x4001)var_v1=4;
if(sp14 < -0x4000)var_v1=5;
return var_v1;
}
