/* identical to func_8016497C_ovl_12 (matched), with its names changed by decompdecomp */
s32 func_8016FC4C_overlay_040(void);

void func_8017150C_overlay_040(u8 *arg0) {
    if (func_8016FC4C_overlay_040() != 0) {
        *(s8 *)(arg0 + 5) = 0xD;
        *(s16 *)(arg0 + 6) = 0x100;
        *(u8 *)(arg0 + 0x26F) &= 0x7F;
    }
}
