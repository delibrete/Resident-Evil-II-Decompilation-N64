extern u8 D_801665D4_overlay_023[];
extern u8 D_801665D7_overlay_023[];
extern u8 D_801665D8_overlay_023[];
extern u8 D_800C7650[];
void func_80162B44_ovl_23(S_func_80162870_ovl_23_arg0 *p) {
    u8 s = p->unk_2C4;
    if (s == 0) {
        func_80162998_ovl_23(p, 1, 0, 6, 0x2000, 3);
        p->unk_2BC = (s32)func_80162B44_ovl_23;
        p->unk_2C4 = p->unk_2C4 + 1;
    } else if (s == 4 || s == 7 || s == 10) {
        goto stage;
    } else if (s < 5) {
        return;
    } else {
        return;
    }
    return;
stage:
    if (s == 4 || s == 10) {
        p->unk_2C4 = p->unk_2C4 + 1;
    } else {
        s32 addr = 0x18000;
        D_801665D8_overlay_023[0] = p->unk_26E;
        p->unk_26E = D_801665D7_overlay_023[0];
        if (*(volatile u32 *)((u8 *)D_800C7650 + addr + 0x264) & 0x40) {
            func_80162998_ovl_23(p, 1, 0, 6, 0x1800, 3);
            p->unk_26E = D_801665D8_overlay_023[3];
            if (s == 10) p->unk_2BC = 0;
            p->unk_2C4 = p->unk_2C4 + 1;
        } else {
            p->unk_2C4 = p->unk_2C4 + 1;
        }
    }
}
