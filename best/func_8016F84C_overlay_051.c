s32 func_80032F24_ovl_01(s32 *, s16, s32);
s32 func_80033174_ovl_01(s32 *);
extern s32 D_800E10D0;
void func_8016F84C_overlay_051(void *arg0)
{
  char *new_var;
  *((s32 *) (((char *) (&D_800E10D0)) + 4)) = 0x05010000;
  new_var = (char *) (&D_800E10D0);
  if (func_80033174_ovl_01(&D_800E10D0) & 0xFF)
  {
    func_80032F24_ovl_01(&D_800E10D0, *((s16 *) (((char *) arg0) + 0x66)), 0x200);
    *((u8 *) (new_var + 5)) = (u8) ((*((u8 *) (new_var + 5))) + 1);
  }
  else
  {
    func_80032F24_ovl_01(&D_800E10D0, (s16) (((u16) (*((s16 *) (((char *) arg0) + 0x66)))) - 0x800), 0x200);
  }
  *((void **) (((char *) (&D_800E10D0)) + 0x250)) = arg0;
  *((s32 *) (((char *) (&D_800E10D0)) + 0x224)) = (s32) (*((s32 *) (((char *) arg0) + 0x224)));
  *((s32 *) (new_var + 0x228)) = (s32) (*((s32 *) (((char *) arg0) + 0x228)));
}

