extern s32 func_80032F24_ovl_01(void *, s32, s32);
extern s16 func_80032D44_ovl_01(s16,s16,s16,s16);
extern s32 func_80036764_ovl_01(void *,s32,s32,s32);
extern u8 D_800C7650[];
void func_801644E8_ovl_23(void *a) {
 s16 z = func_80032D44_ovl_01(*(s16 *)(D_800C7650+0x19aaa), *(s16 *)(D_800C7650+0x19ab2), *(s16 *)((u8 *)a+0x2a), *(s16 *)((u8 *)a+0x32));
 if (!*((u8 *)a+6)) {
  if (*(u8 *)(D_800C7650+0x18538)) func_80036764_ovl_01(a,1,3,0);
  func_80032F24_ovl_01(a,z,8);
 }
}
