s32 func_80089D34_ovl_01(void *, s32, s32, s32);
s32 func_80163154_overlay_030(void *);
s32 func_801672F4_ovl_30(void *, s32, s32);
extern s32 D_80167CEC_ovl_30;
void func_801636A0_ovl_30(void *arg0, s32 arg1, s32 arg2)
{
  s16 temp_a1;
  s32 var_v0;
  void *temp_s2;
  char *new_var;
  temp_s2 = (char *) arg0;
  new_var = ((char *) arg0) + 7;
  temp_s2 += (s32) 0x2B4;
  if ((*((u8 *) (((char *) arg0) + 7))) == 0)
  {
    *((u8 *) new_var) = 1U;
    temp_a1 = *((s16 *) (((char *) temp_s2) + 2));
    var_v0 = 0x08260000;
    if (temp_a1 == 0)
    {
      var_v0 = 0x072E0000;
    }
    *((s32 *) (((char *) arg0) + 0x1E8)) = (s32) (var_v0 | 0xF00);
    temp_a1 = *((temp_a1 * 4) + (&D_80167CEC_ovl_30));
    func_801672F4_ovl_30(arg0, (temp_a1 + 1) & 0xFF, 6);
    func_801672F4_ovl_30(arg0, (temp_a1 + 2) & 0xFF, 6);
    func_801672F4_ovl_30(arg0, (temp_a1 + 3) & 0xFF, 6);
  }
  if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x100) != 0)
  {
    *((s8 *) (((char *) arg0) + 5)) = 2;
    *((s16 *) (((char *) arg0) + 6)) = 0;
    *((s8 *) (((char *) (temp_s2 + (*((s16 *) (((char *) temp_s2) + 2))))) + 4)) = 0x1E;
    func_80163154_overlay_030(arg0);
    *((s8 *) (((char *) temp_s2) + 0xC)) = 0;
  }
}

