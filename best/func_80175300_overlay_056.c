/* identical to func_80168770_ovl_28 (matched), with its names changed by decompdecomp */
extern u32 D_80168FEC_ovl_28[];
extern u32 D_80168FC0_ovl_28[];
extern u8 D_800C7650_ovl_01[];
s32 func_80032EA4_ovl_01(void *, void *, void *, s32);
inline static int inline_fn(u8 arg0, int arg1)
{
  return arg0 * arg1;
}

void func_80175300_overlay_056(void *a)
{
  u8 i = *(((u8 *) a) + 0x2bc);
  u8 new_var2;
  volatile u32 *new_var;
  u32 *t = D_80168FEC_ovl_28;
  new_var2 = i;
  new_var = (volatile u32 *) (((u8 *) t) + inline_fn(new_var2, 4));
 do { ((void (*)(void)) (*new_var))(); } while (0);
}

void func_8016585C_ovl_28(void *a);
void func_80163ED0_ovl_28(void *a);
