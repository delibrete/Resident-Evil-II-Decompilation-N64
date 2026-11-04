typedef void (*Fn)(void *, s32, s32);
extern Fn D_801697CC_ovl_29[];
extern Fn D_801697E8_ovl_29[];
void func_801625E4_ovl_29(void *arg0, s32 arg1, s32 arg2)
{
  register void *obj = arg0;
  register s32 a = arg1;
  register s32 b = arg2;
  volatile Fn *new_var;
 do { ((volatile Fn *) D_801697CC_ovl_29)[*(((u8 *) obj) + 5)](obj, a, b); } while (0); new_var = (volatile Fn *) D_801697E8_ovl_29;
  new_var[*(((u8 *) obj) + 5)](obj, a, b);
}
