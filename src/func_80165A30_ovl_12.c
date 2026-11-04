extern volatile u32 func_80166E18_ovl_33[];
void func_80165A30_ovl_12(void *arg0) {
  volatile u32 *table = func_80166E18_ovl_33 + 2;
  s32 i = *((u8 *)arg0 + 5);
  i -= 1;
  ((void (*)(void))table[i])();
}
