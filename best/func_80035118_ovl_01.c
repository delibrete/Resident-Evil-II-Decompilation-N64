s32 func_80034E3C_ovl_01(void *a, s32 idx, s16 v);
s32 func_80040E88_ovl_01(void *a, void *b);
s32 func_8004251C_ovl_01(void *a, void *b, void *c);

void func_80035118_ovl_01(u8 *a) {
    u32 flag = 0x40000;
    u8 buf[0x80];
    union { u8 * pointer; u32 value; } __repair_phase_storage = { buf + 0x20 };
    u8 *s1;
    u8 *s2;
    
    short val;

    s1 = *(u8 **)(a + 0x234);
    s2 = s1 + 0xBC0;

    if (!(*(s32 *)a & flag))
        func_80040E88_ovl_01(a + 0x64, a + 0x14);

    func_8004251C_ovl_01(a + 0x14, s1 + 8, __repair_phase_storage.pointer);
    func_8004251C_ovl_01(__repair_phase_storage.pointer, s2 + 8, s2 + 0x38);

    __repair_phase_storage.value = *(u16 *)(s2 + 0x5A) + (*(u16 *)(a + 0x66) + *(u16 *)(s1 + 0x5A));
    *(u16 *)(s1 + 0x5C) &= 0xFFF;

    val = __repair_phase_storage.value;
    if (!(*(u8 *)(a + 0x25C) & 1))
        val = *(u16 *)(s2 + 0x130) + __repair_phase_storage.value;

    do { func_80034E3C_ovl_01(a, 0, (s16)val); } while (0);
    func_80034E3C_ovl_01(a, 1, (s16)val);
    func_80034E3C_ovl_01(a, 2, (s16)val);
    func_80034E3C_ovl_01(a, 3, (s16)val);
}
