extern void *jtbl_800B8B70_overlay_001[5];
void func_8004FD4C_ovl_01(u8 *state, u16 *out, u32 mode) {
    u32 width, height, count;
    u8 x, y, old;
    if (mode >= 5) return;
    switch (mode) {
    case 0:
        *out = (u16)(state[3] << 4);
        return;
    case 1:
        *out = (u16)((state[1] / state[2]) << 4);
        width = state[3]; height = state[2]; old = state[1];
        count = width * height;
        if (old != count - 1) { state[1] = old + 1; return; }
        return;
    case 2:
        *out = (u16)((state[1] / state[2]) << 4);
        width = state[3]; height = state[2]; old = state[1];
        count = width * height;
        state[1] = old + 1;
        if ((u8)state[1] == count) state[1] = 0;
        return;
    case 3:
        *out = (u16)((state[1] / state[2]) << 4);
        width = state[3]; height = state[2]; old = state[1];
        state[1] = old + 1;
        if ((u8)state[1] == width * height) {
            state[1] = state[1] - height;
            state[0] = 0x84;
        }
        return;
    case 4:
        state[1] = state[1] - 1;
        *out = (u16)((state[1] / state[2]) << 4);
        if (state[1] == 0) {
            x = state[2];
            state[0] = 0x83;
            state[1] = x + state[1];
        }
        return;
    }
}
