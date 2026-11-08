typedef struct { s32 a; s32 b; s16 f[6]; } S_5B508;
extern s32 jtbl_800B9030_overlay_001[];
s32 func_8005B508_ovl_01(S_5B508 *p, s32 mode, s32 *out0, s32 *out1) {
    s32 i = 0, x, y, q, r;
    if ((mode & 1) == 0) {
        do { mode = (mode & 0xFF) >> 1; i++; } while ((mode & 1) == 0);
    }
    switch (i) {
    case 0:
        x=p->f[4]; y=p->f[5]; q=(x-y)/3; r=x-2*q; *out0=r; *out1=y-2*q; break;
    case 1:
        x=p->f[4]; y=p->f[5]; q=(x-y)/3; r=x-q; *out0=r; *out1=y-q; break;
    case 2:
        x=p->f[4]; y=p->f[5]; *out0=x; q=(x-y)/3; r=y; *out1=r; break;
    case 3:
        x=p->f[2]; y=p->f[3]; *out0=x; q=(x-y)/3; *out1=y; break;
    case 4:
        x=p->f[0]; y=p->f[1]; *out0=x; q=(x-y)/3; *out1=y; break;
    case 5:
        x=p->f[0]; y=p->f[1]; q=(x-y)/3; *out0=x+q; *out1=y+q; break;
    case 6:
        x=p->f[0]; y=p->f[1]; q=(x-y)/3; r=2*q; *out0=x+r; *out1=y+r; break;
    default: return 0;
    }
    return q;
}
