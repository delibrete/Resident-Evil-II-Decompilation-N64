extern int (*D_80172B80_overlay_043[])();
extern int (*D_80172BA0_overlay_043[])();
s32 func_80077D48_ovl_01(s32, void *);
s32 func_80171E1C_overlay_043(void *);
void func_80170570_overlay_043(void *arg0, s32 arg1, s32 arg2)
{
  if ((*((u16 *) (((char *) arg0) + 0x2CE))) == 0)
  {
    func_80077D48_ovl_01(5, arg0);
  }
  *((s32 *) (((char *) arg0) + 4)) = (s32) (*((s32 *) (((char *) arg0) + 0x298)));
  func_80171E1C_overlay_043(arg0);
  if (((u8) (*((s32 *) (((char *) arg0) + 4)))) == 1)
  {
    D_80172BA0_overlay_043[*((u8 *) (((char *) arg0) + 5))](arg0, arg1, arg2);
    D_80172B80_overlay_043[*((u8 *) (((char *) arg0) + 5))](arg0);
  }
}

