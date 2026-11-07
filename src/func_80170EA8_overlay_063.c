typedef void (*Fn)(void *);
extern volatile Fn D_80173244_overlay_063[];
void func_80170EA8_overlay_063(u8 *a0) {
    u32 j = a0[5] - 1;
    *(s16 *)(a0 + 0x64) = 0;
    D_80173244_overlay_063[j](a0);
}
