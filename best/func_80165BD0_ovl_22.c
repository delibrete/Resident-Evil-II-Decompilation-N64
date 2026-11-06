extern volatile u32 D_80166814_overlay_022[];
void func_80165BD0_ovl_22(u8 *p)
{
  u8 new_var;
  new_var = p[5];
  *((u32 *) (p + 4)) = *((u32 *) (p + 0x298));
  if ((*((u8 *) (p + 4))) == 1)
  {
    ((void (*)(void)) D_80166814_overlay_022[new_var])();
  }
  else
  {
    *((u32 *) (p + 4)) = 0x01010000;
  }
}

