extern s32 func_80084514_ovl_01(s32, s32);
extern s32 func_80040E88_ovl_01(void *, void *);
extern s32 func_8004251C_ovl_01(void *, void *, void *);
extern s32 func_800362C0_ovl_01(void *, void *, void *);
extern s32 func_80036764_ovl_01(void *, void *);
extern s32 func_800662B8_ovl_01(void *, void *, s32, s32);
extern s32 D_800C7650_ovl_01[];
extern s32 D_8016729C_ovl_32;
extern s32 D_80167308_ovl_32;
extern void (*D_80167380_ovl_32[])(void *, void *);
void func_80166740_ovl_32(s32 a, s32 b);
void func_801666EC_ovl_32(void);
void func_801655F0_ovl_32(void *p, void *q)
{
 { D_80167380_ovl_32[*((u8 *) (((char *) p) + 0x2b4))](p, q); do { func_800662B8_ovl_01(p, q, *((s32 *) (((char *) q) + 0xb4)), *((s32 *) (((char *) q) + 0x120))); } while (0); }
}

void func_80165534_ovl_32(void *p);
