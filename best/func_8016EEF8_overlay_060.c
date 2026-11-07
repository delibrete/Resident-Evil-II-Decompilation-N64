extern volatile u32 D_80173AA0_overlay_060[];
extern volatile u32 D_80173AB4_overlay_060[];
void func_8016EEF8_overlay_060(void *a0, void *a1, void *a2)
{
  if ((*(u16 *)((u8 *)a0 + 0x2C2) & 6) == 4) {
    *(u32 *)((u8 *)a0 + 4) = 0x03000000;
    return;
  }
  {
    u32 n = ((u8 *)a0)[5];
    u32 addr = D_80173AA0_overlay_060[n];
    ((void (*)(void *))addr)(a0);
  }
  {
    u32 n = ((u8 *)a0)[5];
    u32 addr = D_80173AB4_overlay_060[n];
    ((void (*)(void *,void *,void *))addr)(a0,a1,a2);
  }
}
