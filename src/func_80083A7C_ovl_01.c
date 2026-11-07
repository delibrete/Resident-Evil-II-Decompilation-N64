s32 func_80083800_ovl_01(s16, u16 *, u16 *);
void func_80083A7C_ovl_01(void *arg0)
{
  char *new_var2;
  volatile unsigned short sp[4];
  s16 *new_var;
  s32 new_var3;
  new_var3 = (s32) ((*((u16 *) (((char *) arg0) + 0x12C))) * 0xB3);
  sp[2] = 0;
  sp[0] = (u16) (new_var3 >> 7);
  func_80083800_ovl_01(*((s16 *) (((char *) arg0) + 0x66)), (u16 *) (&sp[0]), (u16 *) (&sp[0]));
  new_var2 = (char *) arg0;
  new_var = (s16 *) (new_var2 + 0x1F8);
  *new_var = (s16) ((*((u16 *) (((char *) arg0) + 0x2A))) + sp[0]);
  *((s16 *) (((char *) arg0) + 0x1FC)) = (s16) ((*((u16 *) (((char *) arg0) + 0x32))) + sp[2]);
}

