extern u16 D_80110EE4_overlay_001[];
void func_80040E88_overlay_001(void *arg0, void *arg1);

void func_8005C2AC_ovl_01(u8 *a0, u8 *a1) {
    u16 v;
    if ((u32)(((*(u16 *)(a0 + 0x1AA)) & 0xFFF) - 9) < 3u) {
        a1 = *(u8 **)(a0 + 0x234);
        a0 = a1 + 0x1D60;
        if (*(s16 *)(a0 + 0x11E) != 0xFF) {
            v = D_80110EE4_overlay_001[*(s8 *)(a0 + 0x112)];
            *(u16 *)(a0 + 0x5C) = v;
            if (v == 0x8000) {
                *(s16 *)(a0 + 0x5C) = 0;
                *(s16 *)(a0 + 0x11E) = 0xFF;
            } else {
                *(u8 *)(a0 + 0x112) += 1;
            }
        }
    }
    func_80040E88_overlay_001(a1 + 0x1DB8, a1 + 0x1D68);
}
