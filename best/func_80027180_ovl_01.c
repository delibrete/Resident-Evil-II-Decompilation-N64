extern u8 D_800C7650_ovl_01;
extern s32 func_80083D1C_ovl_01(s16);
void func_80027180_ovl_01(s32 arg0) {
u8 *base=&D_800C7650_ovl_01;
volatile s32 off=0x20000;
u8 *p=base+off;
u16 old=*(u16 *)(p+0x15FC);
*(u16 *)(p+0x1600)=old;
if ((s16)old != arg0) {
*(u16 *)(p+0x15FC)=arg0;
*(u8 *)(base+0x18000+0x127)=1;
*(u32 *)(p+0x1A5C) |= 0x100000;
}
*(u32 *)(p+0x290)=func_80083D1C_ovl_01(*(s16 *)(p+0x15FC));
}
