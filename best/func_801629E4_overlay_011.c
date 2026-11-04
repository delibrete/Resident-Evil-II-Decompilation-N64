typedef void (*Fn)(void *, void *, void *);
extern volatile Fn D_8016E12C_overlay_011[];
extern volatile Fn D_8016E16C_overlay_011[];
void func_801629E4_overlay_011(unsigned char *p, void *a1, void *a2)
{
    D_8016E12C_overlay_011[p[5]](p, a1, a2);
    D_8016E16C_overlay_011[p[5]](p, a1, a2);
}
