typedef struct { s32 x[3]; } A500;
typedef struct { s16 x,y; u16 a,b; u16 pad[2]; s32 z; } B500;
extern s32 func_8006B250_overlay_001(void *);
extern s32 func_8006B294_overlay_001(void *);
extern s32 func_8006A6F8_overlay_001(s32,s32,s32,s32,s32,s32);
extern s32 func_8006A78C_overlay_001(void *);
extern s32 func_8006A81C_overlay_001(void *);
extern u32 D_800B92B0[];
s32 func_8006A500_ovl_01(A500 *a, B500 *b, void *c, s32 *out) {
 s32 s7= b->x, s6=b->y, s5=b->a, s0=b->b;
 s32 s3=func_8006B250_overlay_001(b);
 s32 v=func_8006B294_overlay_001(b);
 s32 s4=v-s3;
 s32 n=0;
 if(out) {
  n=func_8006A81C_overlay_001(c);
  switch(n) {
   case 0: return func_8006A6F8_overlay_001(a->x[0],a->x[2],s7,s6,s5,s0);
   case 1: return func_8006A6F8_overlay_001(a->x[0],a->x[2],s7,s6,s5,s0);
   case 2: return func_8006A6F8_overlay_001(a->x[2],a->x[1],s6,s3,s0,s4);
   case 3: return func_8006A6F8_overlay_001(a->x[1],a->x[0],s3,s7,s4,s5);
   case 4: return func_8006A6F8_overlay_001(a->x[1],a->x[0],s3,s7,s4,s5);
   case 5: return func_8006A6F8_overlay_001(a->x[1],a->x[0],s3,s7,s4,s5);
  }
 } else {
  n=func_8006A78C_overlay_001(c);
  if(n==0) return func_8006A6F8_overlay_001(a->x[0],a->x[2],s7,s6,s5,s0);
  if(n==1) return func_8006A6F8_overlay_001(a->x[2],a->x[1],s6,s3,s0,s4);
  if(n==2) return func_8006A6F8_overlay_001(a->x[1],a->x[0],s3,s7,s4,s5);
 }
 return 0;
}
