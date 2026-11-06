/* identical to func_80166974_ovl_30 (matched), with its names changed by decompdecomp */
typedef void (*Fn)(void *, void *, void *);
extern volatile Fn D_80174AE4_overlay_058[];
void func_80173504_overlay_058(u8 *a0, void *a1, void *a2)
{
  volatile Fn *new_var;
  new_var = D_80174AE4_overlay_058;
  {
  }
  new_var[a0[5]](a0, a2, a1);
}

