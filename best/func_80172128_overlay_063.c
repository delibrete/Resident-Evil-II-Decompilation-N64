extern int (*D_80173340_overlay_063[])();
s32 func_80033634_ovl_01();
s32 func_80171CD0_overlay_063(void *, s32, s32, void *);
s32 func_80172EB4_overlay_063(void *, s32, s32);
void func_80172128_overlay_063(void *arg0, s32 arg1, s32 arg2)
{
  s32 var_a1;
  s32 var_v1;
  volatile unsigned int var_a0;
  u32 var_a0_2;
  void *temp_a3;
  void *temp_v0;
  if ((*((u8 *) (((char *) arg0) + 6))) == 0)
  {
unsigned int __block_var_a0;

    func_80172EB4_overlay_063(arg0, 8, func_80033634_ovl_01() & 3);
    func_80172EB4_overlay_063(arg0, 8, (func_80033634_ovl_01() & 3) | 4);
    func_80172EB4_overlay_063(arg0, 9, func_80033634_ovl_01() & 3);
    func_80172EB4_overlay_063(arg0, 9, (func_80033634_ovl_01() & 3) | 4);
    __block_var_a0 = 0;
    var_v1 = 0;
    do
    {
      __block_var_a0 += 1;
      temp_a3 = (*((void **) (((char *) arg0) + 0x234))) + var_v1;
      *((s32 *) (((char *) temp_a3) + 0x60)) = 0x301040;
      *((s16 *) (((char *) temp_a3) + 0x124)) = 0x1000;
      *((s16 *) (((char *) temp_a3) + 0x126)) = 0x1000;
      *((s16 *) (((char *) temp_a3) + 0x128)) = 0x1000;
      *((s32 *) (((char *) temp_a3) + 0)) = (s32) ((*((s32 *) (((char *) temp_a3) + 0))) | 0x400);
      var_v1 += 0x178;
    }
    while (__block_var_a0 < 0xDU);
    temp_v0 = *((void **) (((char *) arg0) + 0x234));
    temp_a3 = temp_v0 + 0x178;
    *((s32 *) (((char *) temp_v0) + 0x178)) = (s32) ((*((s32 *) (((char *) temp_v0) + 0x178))) | 0x10);
temp_v0 = 0;
    *((s16 *) (((char *) temp_a3) + 0x130)) = 0;
    *((s16 *) (((char *) temp_a3) + 0x132)) = 0;
    *((s16 *) (((char *) temp_a3) + 0x136)) = 0x1E;
    *((s8 *) (((char *) temp_a3) + 0x134)) = 0x1E;
    *((s8 *) (((char *) temp_a3) + 0x135)) = 0x1E;
    func_80171CD0_overlay_063(arg0, arg1, arg2, temp_a3);
  }
  else
  {
    D_80173340_overlay_063[*((u8 *) (((char *) arg0) + 6))](arg0, arg1, arg2);
  }
  if ((*((u8 *) (((char *) arg0) + 0x2BD))) != 0)
  {
    var_a0_2 = 3;
    var_a1 = 0x468;
    do
    {
      temp_a3 = (*((void **) (((char *) arg0) + 0x234))) + var_a1;
      var_a0_2 += 1;
      if ((*((s16 *) (((char *) temp_a3) + 0x124))) >= 0xC01)
      {
        *((s16 *) (((char *) temp_a3) + 0x124)) = (s16) (((u16) (*((s16 *) (((char *) temp_a3) + 0x124)))) - 0x40);
        *((u16 *) (((char *) temp_a3) + 0x126)) = (u16) ((*((u16 *) (((char *) temp_a3) + 0x126))) - 0x40);
        *((u16 *) (((char *) temp_a3) + 0x128)) = (u16) ((*((u16 *) (((char *) temp_a3) + 0x128))) - 0x40);
      }
      var_a1 += 0x178;
    }
    while (var_a0_2 < 7U);
  }
}

