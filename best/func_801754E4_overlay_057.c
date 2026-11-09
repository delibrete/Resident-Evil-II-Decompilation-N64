s32 func_80032DEC_ovl_01(void *, s32, s32, s32);
s32 func_80077B0C_ovl_01(s32, void *, s32);
s32 func_80089D34_ovl_01(void *, s32, s32, s32);
extern s32 D_800C7650;
void func_801754E4_overlay_057(void *arg0, s32 arg1, s32 arg2)
{
  u8 temp_v1;
  temp_v1 = *((u8 *) (((char *) arg0) + 6));
 do { switch (temp_v1) { case 0: *((s32 *) (((char *) arg0) + 0x1E8)) = 0x300; *((u8 *) (((char *) arg0) + 6)) = 1U; *((s32 *) (((char *) (&D_800C7650)) + 0x19A5C)) = (s32) ((*((s32 *) (((char *) (&D_800C7650)) + 0x19A5C))) | 0x40); *((s8 *) (((char *) arg0) + 0x25C)) = 1; func_80077B0C_ovl_01(0x04000001, arg0 + 0x28, 1); case 1: *((s8 *) (((char *) arg0) + 0x1E9)) = 0; func_80089D34_ovl_01(arg0, arg1, arg2, 0x400); func_80032DEC_ovl_01(arg0, *((s32 *) (((char *) (*((void **) (((char *) (&D_800C7650)) + 0x19D40)))) + 0x28)), *((s32 *) (((char *) (*((void **) (((char *) (&D_800C7650)) + 0x19D40)))) + 0x30)), 0x100); return; } } while (0);
}
