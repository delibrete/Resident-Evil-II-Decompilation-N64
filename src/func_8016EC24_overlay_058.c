typedef void (*Callback)(void);
extern volatile Callback D_801748F4_overlay_058[];
extern void func_8017472C_overlay_058(void *);
void func_8016EC24_overlay_058(void *arg0) {
    u8 *p=(u8 *)arg0;
    u8 *q=p+0x2B4;
    u16 *w=(u16 *)q;
    D_801748F4_overlay_058[p[5]]();
    q[6]=p[5];
    q[7]=p[6];
    q[8]=p[7];
    w[0x1E/2]=*(u16 *)(p+0x1E0);
    w[0x20/2]=*(u16 *)(p+0x1E2);
    w[0x22/2]=*(u16 *)(p+0x1E4);
    func_8017472C_overlay_058(arg0);
}
