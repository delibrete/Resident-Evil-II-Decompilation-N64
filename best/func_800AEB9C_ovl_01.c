s32 func_800AE370_overlay_001();
extern u8 D_801587D8;
extern u8 D_801587D9;
extern u8 D_801587DC;
extern char D_80158860;
extern u8 D_801589E0;
inline static char *inline_fn(void *arg0)
{
  return (char *) arg0;
}

void func_800AEB9C_ovl_01(void *arg0)
{
  int temp_a1;
  void *temp_a0;
  func_800AE370_overlay_001();
  temp_a1 = *((u8 *) (inline_fn(arg0) + 0x63));
  *((s32 *) (inline_fn(arg0) + 0)) = 0;
  *((s8 *) (inline_fn(arg0) + 0x2E)) = 0;
  temp_a0 = (temp_a1 * 4) + (&D_80158860);
  if ((*((u16 *) (inline_fn(temp_a0) + 2))) == 0)
  {
    *((u16 *) (inline_fn(temp_a0) + 2)) = 1U;
    if (D_801589E0 != 0xFF)
    {
      *((u8 *) (inline_fn(temp_a0) + 1)) = 0xFFU;
      *((u8 *) (inline_fn(temp_a0) + 0)) = (u8) D_801587D9;
      *((u8 *) (inline_fn((D_801587D9 * 4) + (&D_80158860)) + 1)) = temp_a1;
    }
    else
    {
      *((u8 *) (inline_fn(temp_a0) + 1)) = (u8) D_801589E0;
      *((u8 *) (inline_fn(temp_a0) + 0)) = (u8) D_801589E0;
      D_801589E0 = temp_a1;
    }
    D_801587D9 = temp_a1;
    if ((*((u8 *) (inline_fn(arg0) + 0x4C))) != 0)
    {
      D_801587DC = D_801587DC - 1;
    }
    else
    {
      D_801587D8 -= 1;
    }
  }
  *((s32 *) (inline_fn(arg0) + 0x60)) = -1;
}

