s32 func_801746E8_overlay_058(void *, u8, s32, s32);
extern u8 D_801748CC_overlay_058;
void func_8016F608_overlay_058(void *arg0)
{
  s32 *temp_v0;
  s32 var_a0;
  u32 var_s0;
  u8 *var_v0;
  var_s0 = 0;
  if ((*((u8 *) (((char *) arg0) + 7))) == 0)
  {
    *((u8 *) (((char *) arg0) + 7)) = 1U;
    return;
  }
  *((s16 *) (((char *) arg0) + 0x1AA)) = (s16) (*((u8 *) (((char *) arg0) + 0x1AB)));
  *((s32 *) (((char *) arg0) + 0)) = (s32) ((*((s32 *) (((char *) arg0) + 0))) & (var_a0 = ~0x800));
  *((u8 *) (((char *) arg0) + 0x25C)) = (u8) ((*((u8 *) (((char *) arg0) + 0x25C))) & 0xFE);
  var_v0 = &D_801748CC_overlay_058;
  do
  {
    var_s0 += 1;
    func_801746E8_overlay_058(arg0, *var_v0, 0, 0);
    var_v0 = &(&D_801748CC_overlay_058)[var_s0];
  }
  while (var_s0 < 8U);
  var_s0 = 0x14;
  var_a0 = 0x1D60;
  do
  {
    do
    {
      var_s0 += 1;
    }
    while (0);
    temp_v0 = (*((s32 *) (((char *) arg0) + 0x234))) + var_a0;
    *temp_v0 &= ~0x400;
    var_a0 += 0x178;
  }
  while (var_s0 < 0x17U);
  *((s8 *) (((char *) arg0) + 0x2C4)) = 0;
  *((s8 *) (((char *) arg0) + 0x2C5)) = 1;
  *((s8 *) (((char *) arg0) + 5)) = 1;
  *((s16 *) (((char *) arg0) + 6)) = 0;
  *((u8 *) (((char *) arg0) + 0x26F)) = (u8) ((*((u8 *) (((char *) arg0) + 0x26F))) & 0x7F);
}

