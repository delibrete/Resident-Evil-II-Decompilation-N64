typedef struct S_8004A358_ent {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
} S_8004A358_ent;
extern u8 D_800C7650_overlay_001[];

s32 func_8004A358_ovl_01(S_8004A358_ent *arg0, s32 arg1, S_8004A358_ent *arg2) {
    s32 off;
    u8 *sym;
    volatile s32 big;
    u8 *base;
    s16 ref;
    s16 hi;
    s16 lo;
    s32 a;
    s32 b;
    s32 v;
    S_8004A358_ent *p0;
    S_8004A358_ent *p1;

    big = 0x18000;
    sym = D_800C7650_overlay_001;
    off = (arg1 << 3) & 0x3F8;
    base = sym + big;
    ref = *(s16 *) (base + 0x1A42);
    p0 = (S_8004A358_ent *) ((u8 *) arg0 - off);
    p1 = (S_8004A358_ent *) ((u8 *) arg2 - off);
    a = p1->unk_08 - ref;
    b = p0->unk_0C - ref;
    if ((a ^ b) < 0) {
        return 0;
    }
    v = (*(s32 *) ((u8 *) arg2 + off) - *(s32 *) ((u8 *) arg0 + off + 4)) * b / (a + b)
        + *(s32 *) ((u8 *) arg0 + off + 4);
    lo = *(s16 *) (base + 0x1A46);
    hi = *(s16 *) (base + 0x1A44);
    return (u32) (v - lo) < (u32) (hi - lo);
}
