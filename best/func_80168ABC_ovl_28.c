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
s32 func_800662B8_ovl_01();
void func_80168ABC_ovl_28(u8 *arg0, u8 *arg1) {
    u8 *actor=arg0;
    u8 mode=actor[5];
    s32 one=1;
    switch(mode) {
    case 0:
        *(u16*)(actor+0x1f4)=0x200;
        actor[5]=one;
    case 1: {
        u8 *obj=*(u8**)(arg1+0x120);
        u16 val=*(u16*)(actor+0x1f4);
        *(u16*)(obj+0xc)=*(u16*)(obj+0xc)-val;
        obj=*(u8**)(arg1+0x120);
        val=*(u16*)(actor+0x1f4);
        *(u16*)(obj+0x10)=*(u16*)obj + (val + 0x10);
        obj=*(u8**)(arg1+0x120);
        if (*(s16*)(obj+0x10)>=0x625) {
            val=*(u16*)(actor+0x1f4)-0x40;
            *(u16*)(actor+0x1f4)=val;
            val=(s16)val;
            if ((s16)val<0xc0) {
                actor[5]=2;
                *(u16*)(actor+0x1f4)=0xc0;
            }
        } else {
            val=*(u16*)(actor+0x1f4)+0x40;
            *(u16*)(actor+0x1f4)=val;
            val=(s16)val;
            if ((s16)val>=0x181) *(u16*)(actor+0x1f4)=0x180;
        }
        break;
    }
    case 2: {
        u8 *obj=*(u8**)(arg1+0x120);
        u16 val=*(u16*)(actor+0x1f4);
        *(u16*)(obj+0xc)=*(u16*)(obj+0xc)+val;
        obj=*(u8**)(arg1+0x120);
        val=*(u16*)(actor+0x1f4);
        *(u16*)(obj+0x10)=*(u16*)(obj+0x10)-val;
        obj=*(u8**)(arg1+0x120);
        if (*(s16*)(obj+0x10)<0x200) {
            val=*(u16*)(actor+0x1f4)-0x30;
            *(u16*)(actor+0x1f4)=val;
            val=(s16)val;
            if ((s16)val<0x90) {
                actor[5]=one;
                *(u16*)(actor+0x1f4)=0x100;
            }
        } else {
            val=*(u16*)(actor+0x1f4)+0x30;
            *(u16*)(actor+0x1f4)=val;
            val=(s16)val;
            if ((s16)val>=0x101) *(u16*)(actor+0x1f4)=0x100;
        }
        break;
    }
    }
    func_800662B8_ovl_01(actor, actor);
}
