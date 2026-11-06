/* identical to func_80166080_ovl_13 (matched), with its names changed by decompdecomp */
extern s32 func_80033634_ovl_01(void);
extern s32 func_800377B0_ovl_01(s32, s32, void *, s16 *);
extern u8 D_800E8FC8_ovl_01[];

static inline u16 *__repair_byte_address(void *base, int offset)
{
  return (u16 *)((u8 *)base + offset);
}

void func_80172C10_overlay_041(void *arg0) {
    s16 out[3];
    s32 n;
s32 __repair_result_n;
    n = func_80033634_ovl_01();
    out[0] = *__repair_byte_address(arg0, 42) + (s8)n;
    n = func_80033634_ovl_01();
    out[1] = *(u16 *)((u8 *)arg0 + 0x2E) + (s8)n;
    __repair_result_n = func_80033634_ovl_01();
    out[2] = *(u16 *)((u8 *)arg0 + 0x32) + (s8)__repair_result_n;
    n = func_80033634_ovl_01();
    func_800377B0_ovl_01(0x12800, (n & 0xFF) << 4, D_800E8FC8_ovl_01, out);
}
