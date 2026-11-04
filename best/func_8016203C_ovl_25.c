typedef void (*Fn)(void *, s32, s32);
extern Fn D_80162FD8_ovl_25[];
extern Fn D_80162FF8_ovl_25[];
void func_8016203C_ovl_25(void *arg0, s32 arg1, s32 arg2)
{
  void *new_var;
  register void *p0 = arg0;
  register s32 p1 = arg1;
  char new_var3;
  register s32 p2 = arg2;
  Fn *new_var2;
  new_var = p0;
  new_var3 = *(((u8 *) new_var) + 5);
  ((volatile Fn *) D_80162FD8_ovl_25)[new_var3](new_var, p1, p2);
  ((volatile Fn *) (new_var2 = D_80162FF8_ovl_25))[*(((u8 *) p0) + 5)](new_var, p1, p2);
}

