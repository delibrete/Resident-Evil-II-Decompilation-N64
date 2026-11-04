/* identical to func_80166060_ovl_12 (matched), with its names changed by decompdecomp */
typedef struct 
{
  u8 x[0x400];
} Obj;
extern s32 func_80033634_ovl_01(void);
extern void func_80173490_overlay_040(void *, s32, s32);
extern void func_80172648_overlay_040(void);
void func_80172BF0_overlay_040(Obj *a)
{
  u32 i;
  func_80172648_overlay_040();
  if ((a->x[0x26e] < 3) || (a->x[5] == 16))
  {
    a->x[0x2bb] = 6;
    for (i = 0; i < 6; i++)
    {
      func_80173490_overlay_040(a, func_80033634_ovl_01() & 15, 7);
    }

    i = 0;
    for (; i < 17; i++)
    {
      u8 *p = (u8 *) ((*((u32 *) (a->x + 0x234))) + (i * 0x178));
      *((s32 *) (p + 0x60)) = 0x202020;
    }

  }
}

