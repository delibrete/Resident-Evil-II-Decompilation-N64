typedef struct { unsigned char x[0x2D0]; } Obj;
extern unsigned char D_800E10D0[];
extern void func_80035AAC_ovl_01_108(Obj *);
extern void func_8016FBCC_overlay_042(Obj *);
extern void func_801749C0_overlay_042(Obj *);
typedef void (*Fn)(Obj *, int, int);
extern volatile Fn D_80175844_overlay_042[];
void func_80174A70_overlay_042(Obj *a, int b, int c) {
 int ff=255, v=a->x[5];
 if (v != ff) {
  a->x[0x2CB]=v;
  a->x[5]=ff;
  *(int *)(a->x+0x2C4)=(int)D_800E10D0;
  func_80035AAC_ovl_01_108(a);
  func_8016FBCC_overlay_042(a);
  func_801749C0_overlay_042(a);
 }
 ff=a->x[0x26E];
 D_80175844_overlay_042[ff](a,b,c);
}
