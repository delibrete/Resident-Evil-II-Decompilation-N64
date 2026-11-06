typedef void (*Fn)(void *);
extern Fn D_80166D64_ovl_12[];
extern void func_80166458_ovl_12(void *);
void func_8016F59C_overlay_064(void *arg0)
{
  volatile Fn *table;
  u8 index = ((u8 *) arg0)[6];
  table[index](arg0);
  func_80166458_ovl_12(arg0);
  table = D_80166D64_ovl_12;
}

