s16 func_80032D44_ovl_01(s16, s16, s16, s16);
s32 func_80033174_ovl_01(void *, s32 *);
s32 func_80052C00_ovl_01(s32, s32);
s32 func_80052C9C_ovl_01(s32, s32, s32);
s32 func_80059E30_ovl_01(s32, s32);
s32 func_801740A8_overlay_058(s32);
s32 func_801740CC_overlay_058(void *, s32, s32);
s32 func_801740FC_overlay_058();
s32 func_8017411C_overlay_058();
extern s32 D_800E10D0;
s32 func_801741DC_overlay_058(void *arg0)
{
  void *temp_v0;
  if (func_8017411C_overlay_058() != 0)
  {
    if (func_80059E30_ovl_01(0x14, 0) != 2)
    {
      temp_v0 = (char *)((*((s32 *) (((char *) arg0) + 0x234)))); temp_v0 += (s32)(0x468);
      *((s16 *) (((char *) (&D_800E10D0)) + 0x1F4)) = func_80032D44_ovl_01(*((s16 *) (((char *) temp_v0) + 0x4E)), *((s16 *) (((char *) temp_v0) + 0x56)), *((s16 *) (((char *) (&D_800E10D0)) + 0x2A)), *((s16 *) (((char *) (&D_800E10D0)) + 0x32)));
      do { func_801740CC_overlay_058(arg0, 0, func_80033174_ovl_01(arg0, &D_800E10D0) & 0xFF); } while (0);
      if ((*((u8 *) (((char *) arg0) + 0x2BD))) == 0)
      {
      }
      else
      {
        func_801740A8_overlay_058(func_80033174_ovl_01(arg0, &D_800E10D0) & 0xFF);
        if (1)
        {
        }
      }
      func_80052C00_ovl_01(8, 0);
      func_80052C9C_ovl_01(8, 0xFA, 4);
      return 1;
    }
    func_801740FC_overlay_058();
    return -1;
  }
  return 0;
}

