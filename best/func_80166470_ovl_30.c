static __inline__ s32 __repair_inline(s32 a) { return a; }
static inline u32 *__repair_byte_address(void *base, int offset)
{
  return (u32 *)((u8 *)base + offset);
}

void func_80166470_ovl_30(void *a0){s32 flags; s32 value; u8 byte;
 if(*((u8*)a0+6)==0){*((u8*)a0+6)=1;*((u8*)a0+0x2c4)=1;*((u8*)a0+0x2c5)=1;value=__repair_inline(*((s32*)a0));value|=0x400;*((s32*)a0)=value;*(__repair_byte_address(a0, 488))=0x10130f00;byte=*((u8*)a0+0x25c);*((s16*)((u8*)a0+0x272))=0;byte|=1;*((u8*)a0+0x25c)=byte;}
 flags=*((s16*)((u8*)a0+0x270));if(flags==1){*((u8*)a0+5)=flags;*((s16*)((u8*)a0+6))=0;}
}
