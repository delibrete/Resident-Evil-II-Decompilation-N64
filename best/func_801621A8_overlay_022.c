s32 func_80033174_ovl_01(s32 *, s32);
extern s32 D_800E10D0_ovl_01;
void func_801621A8_overlay_022(s32 arg0)
{
  char *new_var;
  s32 temp_v0;
  *((s32 *) (((char *) (&D_800E10D0_ovl_01)) + 4)) = 0x02000000;
  temp_v0 = func_80033174_ovl_01(&D_800E10D0_ovl_01, arg0);
  new_var = (char *) (&D_800E10D0_ovl_01);
  *((s32 *) (new_var + 0x250)) = arg0;
  *((u8 *) (((char *) (&D_800E10D0_ovl_01)) + 5)) = (u8) ((*((u8 *) (((char *) (&D_800E10D0_ovl_01)) + 5))) + temp_v0);
}

