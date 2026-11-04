s32 func_80027530_ovl_01();
s32 func_800275F8_ovl_01();
s32 func_800276B4_ovl_01();
s32 func_80077B0C_ovl_01();
s32 func_8015FB30_overlay_003();
extern char D_800C7650_ovl_01[];
extern char D_80160B9C_ovl_03[];
void func_8015B47C_ovl_03(void)
{
  *((u16 *) (D_80160B9C_ovl_03 + 0x10)) = (u16) ((*((u16 *) (D_80160B9C_ovl_03 + 0x10))) + (*((u16 *) (D_80160B9C_ovl_03 + 0x12))));
  func_80027530_ovl_01(0x200, 0, 7, 1);
  do
  {
    func_800275F8_ovl_01(0, (s16) (*((u16 *) (D_80160B9C_ovl_03 + 0x10))), 0);
  }
  while (0);
  if (func_800276B4_ovl_01(0) != 0)
  {
    *((u16 *) (D_80160B9C_ovl_03 + 0x12)) = 0U;
    *((u16 *) (D_80160B9C_ovl_03 + 0x10)) = -((unsigned char) 1U);
  }
  if (!((*((u16 *) (D_800C7650_ovl_01 + 0x1825E))) & 0x9FF))
  {
    if (func_800276B4_ovl_01(0) != 0)
    {
      if ((*((u16 *) (D_800C7650_ovl_01 + 0x1825E))) & 0x9FF)
      {
        goto block_5;
      }
      goto block_6;
    }
  }
  else
  {
    block_5:
    func_80077B0C_ovl_01(0x04060000, 0);

    block_6:
    *((u16 *) (D_80160B9C_ovl_03 + 0x12)) = -0x1000U;

    *((s16 *) (D_80160B9C_ovl_03 + 0xE)) = 0;
    *((s8 *) (D_80160B9C_ovl_03 + 1)) = 1;
    *((s8 *) (D_80160B9C_ovl_03 + 2)) = 0;
 do { } while (0);
    *((s8 *) (D_80160B9C_ovl_03 + 3)) = 0;
  }
  func_8015FB30_overlay_003();
}
