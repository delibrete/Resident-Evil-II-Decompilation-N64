extern s32 D_800F9DE0_overlay_001;
void func_8004A5EC_ovl_01(void *arg0, void *arg1) {
    s32 sp0, sp4, sp8;
    s16 scale, count;
    s32 active = *(s32 *)((u8 *)arg0 + 0x48);
    void *state = *(void **)((u8 *)arg1 + 0xC8);
    void **frames = *(void ***)((u8 *)state + 8);
    if (active == 0) {
        if (frames != 0) *(void **)((u8 *)state + 8) = 0;
        return;
    }
    if (frames == 0) return;
    {
        u16 idx = *(u16 *)((u8 *)arg1 + 0x138);
        scale = *(s16 *)((u8 *)&D_800F9DE0_overlay_001 + (idx & 0x7FFF)*2 + (idx >> 15)*0x3C);
        count = *(s32 *)state;
    }
    while (--count != -1) {
        u8 *src=(u8 *)frames[0]+6;
        u8 *dst=(u8 *)active + *(s16 *)((u8 *)frames+0xC)*0x10+6;
        s16 n=*(s16 *)((u8 *)frames+0x1E);
        while ((n-=3) != 0) {
            sp0=((s8)src[6]*scale)>>6;
            sp4=((s8)src[7]*scale)>>6;
            sp8=((s8)src[8]*scale)>>6;
            *(s32 *)(dst-2)=*(s32 *)(src-2);
            *(s16 *)(dst-6)=*(u16 *)((u8 *)frames)+sp0;
            *(s16 *)(dst-4)=*(u16 *)(src-4)+sp4;
            *(s16 *)(dst-2)=(u16)*(s32 *)(src-2)+sp8;
            *(u16 *)dst=*(u16 *)src;
            *(s32 *)(dst+0xE)=*(s32 *)(src+0xE);
            *(s16 *)(dst+0x10)=*(u16 *)((u8 *)frames+0x10)+sp0;
            *(s16 *)(dst+0x12)=*(u16 *)(src+0xC)+sp4;
            *(s16 *)(dst+0x14)=(u16)*(s32 *)(src+0xE)+sp8;
            *(u16 *)(dst+0x10)=*(u16 *)(src+0x10);
            src+=0x20; dst+=0x20; frames=(void **)((u8 *)frames+0x20);
        }
        frames=(void **)((u8 *)frames+0x10);
    }
}
