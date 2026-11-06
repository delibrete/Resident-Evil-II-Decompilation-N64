extern s32 D_800E7650;
extern u8 D_80173A60_overlay_040;
void func_801728E4_overlay_040(void *arg0)
{
  s32 var_a1;
  u8 *var_v0;
  var_a1 = 0;
  *((u8 *) (((char *) arg0) + 0x25C)) = (u8) ((*((u8 *) (((char *) arg0) + 0x25C))) | 1);
  var_v0 = &D_80173A60_overlay_040;
  do
  {
    arg0 = (char *) (*((s32 *) (((char *) arg0) + 0x234)));
    arg0 += (s32) ((*var_v0) * 0x178);
    var_a1 = *((s32 *) (((char *) arg0) + 0));
    if ((*((u8 *) (((char *) (&D_800E7650)) + 0x1962))) & 8)
    {
      var_a1 |= 0x4A;
    }
    *((s32 *) (((char *) arg0) + 0)) = var_a1;
    do
    {
      var_a1 += 1;
    }
    while (0);
    *((s16 *) (((char *) arg0) + 0x138)) = 0;
    *((s16 *) (((char *) arg0) + 0x134)) = 0x320;
    *((s16 *) (((char *) arg0) + 0x132)) = -0x96;
    *((s16 *) (((char *) arg0) + 0x136)) = 0xA;
    *((s16 *) (((char *) arg0) + 0x13C)) = -0x64;
    *((s32 *) (((char *) arg0) + 0x60)) = 0x101040;
    *((u16 *) (((char *) arg0) + 0x130)) = (u16) (*((u16 *) (((char *) arg0) + 0x66)));
    var_v0 = &(&D_80173A60_overlay_040)[var_a1];
  }
  while (var_a1 < 7U);
}

