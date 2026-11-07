/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif


extern int (*D_80170864_overlay_055[])();
M2C_UNK func_8004DB8C_ovl_01(void *);               /* extern */
M2C_UNK func_8004DCE8_ovl_01(void *, M2C_UNK);      /* extern */
M2C_UNK func_80170660_overlay_055(void *);          /* extern */
extern M2C_UNK D_800C7650;

void func_8016E800_overlay_055(void *arg0) {
char *__repair_addr;

    u8 temp_v0;
    u8 temp_v1;

    if (!(M2C_FIELD(&D_800C7650, s32 *, 0x19A60) & 0x20000000)) {
        temp_v1 = M2C_FIELD(arg0, u8 *, 0x26F);
        if (temp_v1 & 0x7F) {
            M2C_FIELD(arg0, u8 *, 0x26F) = (u8) (temp_v1 - 1);
        }
        temp_v0 = M2C_FIELD(arg0, u8 *, 0x2BE);
        if (temp_v0 != 0) {
            M2C_FIELD(arg0, u8 *, 0x2BE) = (u8) (temp_v0 - 1);
        }
        D_80170864_overlay_055[M2C_FIELD(arg0, u8 *, 4)](arg0, M2C_FIELD(arg0, s32 *, 0x1A4), M2C_FIELD(arg0, s32 *, 0x218));
__repair_addr = (char *)((M2C_FIELD(arg0, s32 *, 0x250) + 0x2B4));

        if ((M2C_FIELD(arg0, u8 *, 0x2C8) == 0) && (M2C_FIELD(arg0, u8 *, 0x2C6) != 0) && (M2C_FIELD(__repair_addr, u16 *, 0x20) != 0)) {
            func_80170660_overlay_055(arg0);
        }
        func_8004DB8C_ovl_01(arg0);
        func_8004DCE8_ovl_01(arg0, 0x400);
    }
}
