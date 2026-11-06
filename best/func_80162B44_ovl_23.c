extern u8 D_801665D4_overlay_023[];
extern u8 D_801665D7_overlay_023[];
extern u8 D_801665D8_overlay_023[];
extern u8 D_800C7650_ovl_01[];
void func_80162B44_ovl_23(S_func_80162870_ovl_23_arg0 *p) {
    u8 s = p->unk_2C4;
    if (s < 5) {
        if (s == 0) {
            func_80162998_ovl_23(p, 1, 0, 6, 0x2000, 3);
            p->unk_2BC = (s32)func_80162B44_ovl_23;
            p->unk_2C4 = s + 1;
        } else if (s == 4) goto done;
    } else if (s == 7 || s == 10) {
        if (s == 10) goto done;
    } else goto done;
    if (s == 7 || s == 10) {
        u8 old = p->unk_26E;
        D_801665D8_overlay_023[0] = old;
        p->unk_26E = D_801665D7_overlay_023[0];
        if (*(s32 *)(D_800C7650_ovl_01 + 0x18000 + 0x264) & 0x40) {
            func_80162998_ovl_23(p, 1, 0, 6, 0x1800, 3);
            p->unk_26E = D_801665D8_overlay_023[3];
            if (s == 10) { p->unk_2BC = 0; goto done; }
            p->unk_2C4 = s + 1;
        }
    }
done:;
}
