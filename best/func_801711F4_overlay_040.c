typedef void (*Fn)(void *);
extern Fn D_80166D64_ovl_12[];
extern void func_80166458_ovl_12(void *);
void func_801711F4_overlay_040(void *arg0)
{
  volatile Fn *table;
  u8 index = ((u8 *) arg0)[6];
  void *new_var;
  new_var = arg0;
  table[index](new_var);
  func_80166458_ovl_12(new_var);
  table = D_80166D64_ovl_12;
}

