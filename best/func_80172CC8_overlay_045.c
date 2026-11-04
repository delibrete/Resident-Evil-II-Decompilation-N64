/* identical to func_80166138_ovl_17 (matched), with its names changed by decompdecomp */
s32 func_80033634_ovl_01(void);
void func_80089D34_ovl_01(void *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_80174198_overlay_045(void *arg0, s32 arg1, s32 arg2);
void func_80173B4C_overlay_045(void *arg0, s32 arg1, s32 arg2);
void func_80172D58_overlay_045(void *arg0);

void func_80172CC8_overlay_045(void *arg0, s32 arg1, s32 arg2) {
    *(s32 *)((u8 *)arg0 + 0x1E8) = 0x0D000700;
    func_80089D34_ovl_01(arg0, arg1, arg2, 0x200);
    func_80174198_overlay_045(arg0, 0x2002, (func_80033634_ovl_01() & 3) + 6);
    func_80173B4C_overlay_045(arg0, 0x13, 1);
    func_80172D58_overlay_045(arg0);
    *(s32 *)((u8 *)arg0 + 4) = 0x07000000;
    *(s32 *)arg0 |= 0x42;
    if (*(s8 *)((u8 *)arg0 + 0x2D6) < 0) {
        *(s32 *)((u8 *)arg0 + 0x2C) = *(s16 *)((u8 *)arg0 + 0x1A8) + 0x46;
    }
}
