s32 func_80033634_ovl_01();
void func_801672F4_ovl_30(void *p, u32 a, u32 b);
extern u8 D_80167D18_ovl_30[];
extern u8 D_80167D30_ovl_30[];
void func_801653A4_overlay_030(u8 *p)
{
  volatile u8 *table = D_80167D30_ovl_30;
  u32 r;
  u32 n;
  u8 rem;
  if (r || p)
  {
    r = func_80033634_ovl_01();
    rem = n % 3;
    n = *((u8 *) (p + 0x26E));
    func_801672F4_ovl_30(p, table[(rem * 4) + (r & 3)], D_80167D18_ovl_30[(*((u8 *) (p + 5))) - 1]);
  }
  else
  {
    r = func_80033634_ovl_01();
    rem = n % 3;
    n = *((u8 *) (p + 0x26E));
    func_801672F4_ovl_30(p, table[(rem * 4) + (r & 3)], D_80167D18_ovl_30[(*((u8 *) (p + 5))) - 1]);
  }
}

