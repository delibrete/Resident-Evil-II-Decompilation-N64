s32 func_8000EFA0(void *, s32, s32, void *);
void func_8006C074_overlay_001(void *, s32);
extern s32 D_801342B8_overlay_001;
extern s32 D_801343C0_overlay_001;
extern s32 D_80134408_overlay_001;
extern s32 D_80134494_overlay_001;

void func_8009EE80_ovl_01(s32 arg0, s32 arg1) {
    volatile s32 *p = (volatile s32 *)&D_801342B8_overlay_001;
    s32 off = D_801343C0_overlay_001;
    p[0] = (arg0 + off) & 0x0FFFFFFF;
    p[1] = (arg1 + off) & 0x0FFFFFFF;
    func_8000EFA0((void *)&D_801342B8_overlay_001, 0x80, off, (void *)&D_801342B8_overlay_001);
    D_80134494_overlay_001 = 4;
    func_8006C074_overlay_001((void *)&D_80134408_overlay_001, 0);
}
