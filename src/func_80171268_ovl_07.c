void func_801712D4_ovl_07(s16 **arg0);
void func_80171268_ovl_07(s16 **arg0, u8 **arg1)
{
  u8 *src = *arg1;
  s16 *dst = *arg0;
  u32 i = 0;
  u8 *q = src + 1;
  do {
    u8 r = q[1];
    u8 g = q[0];
    u8 b = *src;
    q += 3; src += 3; i++;
    *dst = (((r >> 3) << 1) + ((g >> 3) << 6) + ((b >> 3) << 11)) | 1;
    dst++;
  } while (i < 0x140);
  *arg0 = dst; *arg1 = src;
}
