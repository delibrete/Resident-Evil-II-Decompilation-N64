static __inline__ int __repair_inline(s32 a, s32 b) { return a < b; }
extern u8 D_80113400_overlay_001[];
extern void *D_8010B660_overlay_001[];
void func_8004D1B4_overlay_001(void *, void *);
void func_8004D060_ovl_01(void *arg) {
    u8 *entry = D_80113400_overlay_001;
    void **slot = D_8010B660_overlay_001;
    s32 i;
    for (i = 0; __repair_inline(i, 4); i++, entry += 6, slot++) {
        u8 data[4];
        u32 *queue;
        u32 next;
        func_8004D1B4_overlay_001(data, arg);
        data[0] = entry[2];
        data[1] = entry[3];
        *(u16 *)(data + 2) = *(u16 *)entry;
        queue = *(u32 **)*slot;
        next = (queue[3] + 1) % queue[0];
        if (next == queue[2])
            queue[2] = (next + 1) % queue[0];
        arg = *(void **)data;
        ((u32 *)queue[1])[queue[3]] = (u32)arg;
        queue[3] = next;
    }
}
