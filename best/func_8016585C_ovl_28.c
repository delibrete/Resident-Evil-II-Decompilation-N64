extern u32 D_80168FEC_ovl_28[];
extern u32 D_80168FC0_ovl_28[];
extern u8 D_800C7650_ovl_01[];
s32 func_80032EA4_ovl_01(void *, void *, void *, s32);
void func_80168770_ovl_28(void *a);
void func_8016585C_ovl_28(void *a)
{
  u8 i = *(((u8 *) a) + 0x2b4);
  ((void (*)(void)) (*((volatile u32 *) (((u8 *) a) + (i * 4)))))();
}

void func_80163ED0_ovl_28(void *a);
