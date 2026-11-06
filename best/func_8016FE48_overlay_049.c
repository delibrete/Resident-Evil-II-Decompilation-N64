extern int (*D_801703F4_overlay_049[])();
extern s32 D_800C7650;
inline static int inline_fn(u8 arg0)
{
  return arg0 == 0xF;
}

void func_8016FE48_overlay_049(void)
{
  u8 new_var;
 do { new_var = *((u8 *) (((char *) (&D_800C7650)) + 0x19A88)); D_801703F4_overlay_049[inline_fn(new_var)](); } while (0);
}
