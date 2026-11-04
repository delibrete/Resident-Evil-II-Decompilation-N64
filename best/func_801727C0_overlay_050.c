/* identical to func_80165C30_ovl_22 (matched), with its names changed by decompdecomp */
typedef struct
{
  u8 x[0x300];
} Obj;
extern void func_801727B8_overlay_050(Obj *);
typedef void (*Fn)(Obj *, s32, s32);
extern volatile Fn D_80166870_ovl_22[];
void func_801727C0_overlay_050(Obj *a, s32 b, s32 c)
{
  s32 ff = 0xFF;
  if (a->x[5] != ff)
  {
    a->x[5] = ff;
    func_801727B8_overlay_050(a);
  }
  ff = a->x[0x26E];
  D_80166870_ovl_22[ff](a, b, c);
}
