typedef struct {s32 pad0; s32 z[16]; void *p170; s32 z2[3]; void *p180;} A; typedef struct {s32 x[7];} B; typedef void (*F)(void);
void func_8002E600(A *a,s32 flag);                                                                                                                                                                     
void func_8002E670(void *arg0, s32 arg3, s32 arg4, s32 *arg5, s32 arg6);                                                                                                                                                                                                                                                                                                          
typedef struct {s32 x[2];s32 z[3];void *base;} Img;typedef struct{s16 x,y,w,h;} Rect;
void func_80047CF8_ovl_01(Img *a,Rect *r,s32 x,s32 y);                                                                                                                                                                                                                                    
extern f32 D_800B8940_ovl_01,D_800B8944_ovl_01,D_800B8948_ovl_01,D_800B894C_ovl_01;
f32 func_800482C4_ovl_01(f32 x){if(x>0.0f){f32 a=D_800B8948_ovl_01/x;return D_800B894C_ovl_01-a;}else{f32 a=D_800B8940_ovl_01/x;return D_800B8944_ovl_01-a;}}
