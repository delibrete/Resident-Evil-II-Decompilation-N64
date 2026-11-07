/* identical to func_801710E4_overlay_043 (matched), with its names changed by decompdecomp */
typedef struct { u8 x[0x300]; } Obj;
extern void func_801727B8_overlay_050(Obj *);
typedef void (*Fn)(Obj *, s32, s32);
extern volatile Fn D_80173400_overlay_050[];
void func_801727C0_overlay_050(Obj *a, s32 b, s32 c)
{
  s32 ff = 0xFF;
  if (a->x[5] != ff) {
    a->x[5] = ff;
    func_801727B8_overlay_050(a);
  }
  ff = a->x[0x26E];
  D_80173400_overlay_050[ff](a, b, c);
}
