extern void (*D_80167380_overlay_032[])(void *, void *);
void func_8006671C(void *, void *, s32, s32);
void func_801655F0_ovl_32(void *p, void *q) {
    D_80167380_overlay_032[*((u8 *)p + 0x2B4)](p, q);
    func_8006671C(p, q, *(s32 *)((u8 *)q + 0xB4), *(s32 *)((u8 *)q + 0x120));
}
