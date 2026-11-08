extern s32 D_8010D8E0_overlay_001, D_8010D9C0_overlay_001, D_8010D9C4_overlay_001;
extern u8 D_8010D9C8_overlay_001, D_80139B8E, D_80139B8F;
extern u8 D_800B8D10_overlay_001[], D_800B8D2C_overlay_001[], D_800B8D64_overlay_001[], D_800B8D90_overlay_001[], D_800B8DB8_overlay_001[], D_800B8DD0_overlay_001[], D_800B8DD8_overlay_001[], D_800B8E0C_overlay_001[], D_800B8E28_overlay_001[], D_800B8E50_overlay_001[], D_800B8E6C_overlay_001[];
extern u8 D_800C7650_overlay_001[], D_800E8C80_overlay_001[];
extern s32 func_8005363C_overlay_001(void);
extern void func_800539D0_overlay_001(s32, void *, s32 *);
extern void func_80054FC8_overlay_001(s32, s32);
extern s32 func_8005302C_overlay_001(s32, s32);
extern s32 func_80082338_overlay_001(void *, void *);
extern void func_80053D68_overlay_001(void);
extern void func_80083788_overlay_001(s32 *, u32);
extern void func_8005511C_overlay_001(s32);
extern void func_80053DAC_overlay_001(s32);
extern void func_80053EE8_overlay_001(s32);
void func_800549AC_ovl_01(void) {
    s32 *obj;
    s32 *p;
    s32 mask, i, value;
    u8 *bytes;
    u16 *half;
    u32 *words;
    obj = (s32 *)D_8010D8E0_overlay_001;
    if (func_8005363C_overlay_001()) goto finish;
    value = D_8010D9C8_overlay_001;
    if (value == 0) {
        if (D_8010D9C4_overlay_001 != 0) {
            words = (u32 *)(D_800C7650_overlay_001 + 0x18264);
            if (*words & 0x1000) D_8010D9C0_overlay_001 = 1;
        }
    } else if (value == 1) {
        if (D_8010D9C4_overlay_001 != 0) {
            half = (u16 *)(D_800C7650_overlay_001 + 0x1825E);
            value = *half;
            if (value & 0xF0) D_8010D9C0_overlay_001 = D_8010D9C8_overlay_001;
            if (value & 0xF) D_8010D9C0_overlay_001 = D_8010D9C8_overlay_001;
        }
    } else goto post;
    goto post;
finish:
    ;
post:
    if (D_8010D9C0_overlay_001 != 0) { D_80139B8F = 0; D_80139B8E = 0; }
    bytes = D_800C7650_overlay_001 + 0x20F59;
    i = *bytes;
    if (i >= 13) goto common;
    obj = *(s32 **)(D_800C7650_overlay_001 + 0x18284);
    D_8010D8E0_overlay_001 = (s32)obj;
    if (*(u32 *)((u8 *)obj + 0x1A5C) & 0x200) {
        func_80054FC8_overlay_001(*((u8 *)obj + 0x1A40) >> 4, 0);
        func_800539D0_overlay_001(0, D_800B8D10_overlay_001, &D_8010D9C4_overlay_001);
    } else {
        func_80054FC8_overlay_001(*((u8 *)obj + 0x1A40) >> 4, 1);
    }
    D_8010D9C4_overlay_001 = 0;
    if (*(u32 *)(D_800C7650_overlay_001 + 0x181A5C) & 0x200) { *bytes = 8; goto common; }
    *bytes = 1;
    func_800539D0_overlay_001(1, D_800B8D2C_overlay_001, &D_8010D9C4_overlay_001);
    if (D_8010D9C4_overlay_001) { *bytes = 2; goto common; }
    func_800539D0_overlay_001(1, D_800B8D64_overlay_001, &D_8010D9C4_overlay_001);
    if (D_8010D9C4_overlay_001 & D_8010D9C0_overlay_001) { *bytes = 3; goto common; }
    func_800539D0_overlay_001(1, D_800B8D90_overlay_001, &D_8010D9C4_overlay_001);
    if (D_8010D9C4_overlay_001) { *bytes = 4; goto common; }
    func_800539D0_overlay_001(1, D_800B8DB8_overlay_001, &D_8010D9C4_overlay_001);
    if (D_8010D9C4_overlay_001 & D_8010D9C0_overlay_001) { bytes[0]=5; bytes[1]=1; goto common; }
    if (func_8005302C_overlay_001(8, 0)) {
        u8 *q = D_800C7650_overlay_001 + 0x20F59;
        q[1] = 2;
        if (func_80082338_overlay_001((u8 *)obj + 0x2E4, D_800B8DD0_overlay_001)) q[0]=6;
        else { func_80053D68_overlay_001(); q[0]=7; }
        goto common;
    }
    func_800539D0_overlay_001(1,D_800B8DD8_overlay_001,&D_8010D9C4_overlay_001);
    if (D_8010D9C4_overlay_001 & D_8010D9C0_overlay_001) { *bytes=4; goto common; }
    func_800539D0_overlay_001(1,D_800B8E0C_overlay_001,&D_8010D9C4_overlay_001);
    if (D_8010D9C4_overlay_001 & D_8010D9C0_overlay_001) {
        * (u32 *)(D_800C7650_overlay_001 + 0x181A5C) |= 0x200;
        func_80083788_overlay_001((s32 *)D_800E8C80_overlay_001,0x5B); *bytes=0xC; goto common;
    }
    func_800539D0_overlay_001(1,D_800B8E28_overlay_001,&D_8010D9C4_overlay_001);
    if(D_8010D9C4_overlay_001){*bytes=9;goto common;}
    func_800539D0_overlay_001(1,D_800B8E50_overlay_001,&D_8010D9C4_overlay_001);
    if(D_8010D9C4_overlay_001 & D_8010D9C0_overlay_001){*bytes=0xA;goto common;}
    D_80139B8E=0xA;
    func_800539D0_overlay_001(1,D_800B8E6C_overlay_001,&D_8010D9C4_overlay_001);
    if(D_8010D9C4_overlay_001 & D_8010D9C0_overlay_001){
      *(u32 *)(D_800C7650_overlay_001 + 0x181A5C) &= ~0x200;
      func_8005511C_overlay_001(1); goto finish;
    }
common:
    if (*(u8 *)((u8 *)obj + 0x2D9) == 1) { *((u8 *)obj+0x2D9)=0; *bytes=0xB; }
    mask=D_8010D9C4_overlay_001 & D_8010D9C0_overlay_001;
    if(mask==0 && i!=*bytes){D_80139B8F=0;D_8010D9C4_overlay_001=0;D_8010D9C0_overlay_001=0;D_80139B8E=0;}
    func_80053DAC_overlay_001(1);
    func_80053EE8_overlay_001(0x16C);
}
