s32 func_801678B8_ovl_17(void *p);
void func_801679E0_ovl_17(void *p)
{
  u8 n = ((u8 *) p)[0x2d7];
  u8 i;
  u8 ix;
  u8 a;
  u32 val;
  u32 *arr;
  if (n)
  {
    n--;
    i = 0;
 do { ((u8 *) p)[0x2d7] = n; if (n & 1) { do { ix = func_80033634_ovl_01() & 7; a = ((u8 *) 0x80167fbc)[0, ix]; val = arr[(a * 0x178) / 4]; if ((val & 0x4b) == 1) { func_80166FBC_ovl_17(p, a, 9); } i++; } while (i < 3); } } while (0);
  }
}
