extern s32 D_800E8CA0;
extern u32 D_80163CD0_overlay_027;
extern void func_8016281C_overlay_027(void *, s32, s32);
void func_80163458_ovl_27(void *arg0, s32 arg1, s32 arg2) {
    if (D_80163CD0_overlay_027 < 4U) D_80163CD0_overlay_027 += 1;
    else func_80083788_ovl_01(&D_800E8CA0, 0x14);
    *(s16 *)((u8 *)arg0 + 0x1F2) = 1;
    *(s32 *)((u8 *)arg0 + 4) = ((*(u8 *)((u8 *)arg0 + 0x2CA) + 0x90000) + 0x01000000) + ((*(u8 *)((u8 *)arg0 + 0x2C9) << 8));
    func_8016281C_overlay_027(arg0, arg1, arg2);
}
