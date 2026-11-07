typedef void (*Callback)(void);
extern volatile Callback D_80174A78_overlay_045[];
extern void func_80172950_overlay_045(void);
void func_8017228C_overlay_045(void *arg0) {
    u8 *p = arg0;
    if (p[0x2C0] == 0) {
        D_80174A78_overlay_045[p[0x2BE]]();
    } else {
        func_80172950_overlay_045();
    }
}
