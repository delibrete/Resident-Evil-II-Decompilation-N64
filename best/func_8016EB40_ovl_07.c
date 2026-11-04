extern u16 D_80171D44_ovl_07;
extern s8 D_80171D29_ovl_07;
extern s32 D_80171D3C_ovl_07;
s32 func_8002751C_ovl_01(s32, s32);
s32 func_80027530_ovl_01(s32, s32, s32, s32);
s32 func_800276B4_ovl_01(s32);
s32 func_8017001C_ovl_07(s32, s32, s32);
void func_8016EB40_ovl_07(void)
{
  u16 new_var2;
  register u16 *p = &D_80171D44_ovl_07;
  unsigned short new_var;
  u16 v;
  if ((*(&D_80171D44_ovl_07)) & 1)
  {
    if (func_800276B4_ovl_01(0))
    {
      D_80171D29_ovl_07 = 1;
      *(&D_80171D44_ovl_07) ^= 1;
    }
  }
  else
  {
    func_80027530_ovl_01(0x200, -0x100, 7, 1);
    D_80171D29_ovl_07 = 0;
    v = (*p) | 1;
    *(&D_80171D44_ovl_07) = v;
    if (v & 0x800)
    {
      func_8002751C_ovl_01(0, 0);
      new_var2 = *p;
      v = new_var2;
      v ^= 0x800;
      *p = (new_var = v);
    }
    else
    {
      func_8002751C_ovl_01(2, 1);
    }
    if ((float) (new_var2 & 0x1000))
    {
      func_8017001C_ovl_07(D_80171D3C_ovl_07, 1, 0);
      D_80171D3C_ovl_07 = 0;
      *p ^= 0x1000;
    }
  }
}

