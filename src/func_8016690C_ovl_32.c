/* identical to func_801785B0_overlay_059 (matched), with its names changed by decompdecomp */
typedef struct { u8 pad0[2]; s8 first; s8 second; u8 pad4[24]; } Entry28;
extern Entry28 D_80166ED4_overlay_032[];
Entry28 *func_8016690C_ovl_32(u8 index, s8 first, s8 second) {
    Entry28 *entry = &D_80166ED4_overlay_032[index];
    entry->first = first;
    entry->second = second;
    return D_80166ED4_overlay_032;
}
