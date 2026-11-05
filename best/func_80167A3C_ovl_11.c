s32 func_800377B0_ovl_01(s32, s16, void *, s32);
static inline char *inline_fn(void *arg0)
{
  return ((char *) arg0) + 0x234;
}

void func_80167A3C_ovl_11(void *arg0)
{
  void *temp_a2;
  *((u16 *) (((char *) arg0) + 0x2B6)) = (*((u16 *) (((char *) arg0) + 0x2B6))) | 0x1800;
  *((s32 *) (((char *) (*((void **) (((char *) arg0) + 0x234)))) + 0x60)) = 0x304040;
  *((s32 *) (((char *) (*((void **) (((char *) arg0) + 0x234)))) + 0x1D8)) = 0x304040;
  *((s32 *) (((char *) (*((void **) inline_fn(arg0)))) + 0x350)) = 0x405050;
  *((s32 *) (((char *) (*((void **) (((char *) arg0) + 0x234)))) + 0x7B8)) = 0x405050;
  *((s32 *) (((char *) (*((void **) (((char *) arg0) + 0x234)))) + 0xC20)) = 0x304040;
  *((s32 *) (((char *) (*((void **) (((char *) arg0) + 0x234)))) + 0xD98)) = (*((s32 *) (((char *) (*((void **) (((char *) arg0) + 0x234)))) + 0x1200)) = 0x506060);
  func_800377B0_ovl_01(0x040F1770, *((s16 *) (((char *) arg0) + 0x66)), (*((void **) (((char *) arg0) + 0x234))) + 0x38, 0);
  temp_a2 = *((void **) (((char *) arg0) + 0x234));
  if ((*((s32 *) (((char *) temp_a2) + 0x11A0))) & 1)
  {
    func_800377B0_ovl_01(0x040F0FA0, *((s16 *) (((char *) arg0) + 0x66)), temp_a2 + 0x11D8, 0);
  }
  if ((*((s32 *) (((char *) (*((void **) (((char *) arg0) + 0x234)))) + 0x468))) & 1)
  {
    func_800377B0_ovl_01(0x040F0FA0, *((s16 *) (((char *) arg0) + 0x66)), (*((void **) (((char *) arg0) + 0x234))) + 0x4A0, 0);
  }
}

