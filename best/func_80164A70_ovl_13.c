typedef struct { unsigned char x[0x2D0]; } Obj;
extern unsigned char D_800C7650_ovl_01[];

void func_80164A70_ovl_13(Obj *a, s16 b) {
    union { u64 q; struct { u32 lo; u32 hi; } w; } b_addr;
    u32 base;
    b_addr.w.lo = (u32)D_800C7650_ovl_01;
    base = b_addr.w.lo + 0x20000;
    if (*(unsigned char *)(base + 0x1962) & 8) {
        *(int *)a->x |= 0x4A;
    } else {
        *(int *)a->x = 0;
    }
    *(s16 *)(a->x + 0x134) = 0x320;
    *(s16 *)(a->x + 0x136) = 10;
    *(s16 *)(a->x + 0x130) = b;
    *(s16 *)(a->x + 0x138) = 0;
    *(s16 *)(a->x + 0x132) = 0;
    *(s16 *)(a->x + 0x13C) = -100;
    *(int *)(a->x + 0x60) = 0x101040;
}
