typedef struct 
{
  s32 x;
  u8 p[4];
  s32 z;
} A;
typedef struct 
{
  s16 x;
  s16 y;
  u16 d;
  u16 n;
} B;
s32 func_8006A45C_ovl_01(A *a, B *b);
extern u8 D_80112794_ovl_01;
extern u8 D_80112908_ovl_01[7];
extern s32 D_801129BC_ovl_01;
extern s32 D_80139E00;
void func_8006BDD4_ovl_01(void)
{
  u8 *p = D_80112908_ovl_01;
  s32 v;
  p[0] = 8;
  p[1] = 8;
  p[2] = 8;
  p[3] = 8;
  p[6] = 8;
  p[4] = 0;
  p[5] = 0;
  D_801129BC_ovl_01 = 0;
  v = D_80139E00;
  v |= 1;
  v &= -3;
  v &= (v = -17);
  v &= -33;
  D_80139E00 = v;
  D_80112794_ovl_01 &= 0xF7;
}

extern s32 func_8000E9D0(s32);
extern s32 D_80139E00;
s32 func_8006BE40_ovl_01(void);
extern s32 D_80112758_ovl_01;
extern s32 D_80112918_ovl_01[];
extern s32 D_80112968_ovl_01[];
extern s32 func_8000E980(void *, ...);
extern s32 func_8000EC60(s32);
extern s32 func_8006BE40_ovl_01(void);
void func_8006BEEC_ovl_01(s32 arg0);
