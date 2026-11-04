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
void func_80164E94_overlay_012(void *arg0, s32 arg1, s32 arg2){s16 t;u8*p=arg0;u8*q=p+0x2b4;
 func_80032C08_ovl_01(arg0, *(s16*)(p+0x1f4),0);*(u16*)(p+0x1e2)+=40;
 if(*(s32*)(p+0x2c)<*(s16*)(p+0x25e))goto done;
 *(s16*)(p+0x1f6)=512; t=*(s16*)(p+0x25e); *(s32*)(p+0x2c)=t;q[1]=0;
 func_801659DC_overlay_012(arg0,0,t);q[8]=1;
 t=func_80033634_ovl_01()&15;
 if(((0x404>>t)&1) && !(q[0xb]&128) && *(s16*)(p+0x1f2)>=0 && !q[0x15]){func_80077D48_ovl_01(10,arg0);t=768;}else{func_80077D48_ovl_01(11,arg0);t=512;}*(s16*)(p+6)=t;
 done:if(p[0x1e9]!=3)func_80089D34_ovl_01(arg0,arg1,arg2,512);
}
