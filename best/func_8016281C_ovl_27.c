s32 func_801628B0_ovl_27();
s32 func_80162994_ovl_27(void *);
extern s32 D_800C7650_ovl_01;
void func_8016281C_ovl_27(void *arg0)
{
  int new_var;
  if ((*((u8 *) (((char *) arg0) + 6))) == 0)
  {
    func_801628B0_ovl_27();
  }
  else
  {
    func_80162994_ovl_27(arg0);
  }
  new_var = 0x030A0000;
  *((u8 *) (((char *) arg0) + 0x2C9)) = (u8) (*((u8 *) (((char *) arg0) + 6)));
  *((u8 *) (((char *) arg0) + 0x2CA)) = (u8) (*((u8 *) (((char *) arg0) + 7)));
  if (((*((s16 *) (((char *) arg0) + 0x270))) == 1) || ((*((u16 *) (((char *) (&D_800C7650_ovl_01)) + 0x19A78))) & 0x10))
  {
    *((s16 *) (((char *) arg0) + 0x1F2)) = -1;
    *((s32 *) (((char *) arg0) + 4)) = new_var;
  }
}

