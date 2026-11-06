typedef struct 
{
  s32 pad0;
  s32 z[16];
  void *p170;
  s32 z2[3];
  void *p180;
} A;
typedef struct 
{
  s32 x[7];
} B;
typedef void (*F)(void);
volatile char func_8002E600(A *a, s32 flag)
{
  B *s = a->p170;
  B *new_var;
  if (flag)
  {
    *((s32 *) ((char *) (*((void **) (0x14 + ((unsigned char *) a)))))) = 4;
    ((F) (*((void **) a)))();
  }
  else
    if (a->z[16])
  {
    s->x[1] = 0x8002E670;
  }
  else
  {
    new_var = s;
    new_var->x[1] = ((s32 *) a->p180)[1];
  }
  new_var->x[6] = 0;
  new_var->x[5] = 0;
}

void func_8002E670(void *arg0, s32 arg3, s32 arg4, s32 *arg5, s32 arg6);
typedef struct 
{
  s32 x[2];
  s32 z[3];
  void *base;
} Img;
typedef struct 
{
  s16 x;
  s16 y;
  s16 w;
  s16 h;
} Rect;
void func_80047CF8_ovl_01(Img *a, Rect *r, s32 x, s32 y);
extern f32 D_800B8940_ovl_01;
extern f32 D_800B8944_ovl_01;
extern f32 D_800B8948_ovl_01;
extern f32 D_800B894C_ovl_01;
f32 func_800482C4_ovl_01(f32 x);
