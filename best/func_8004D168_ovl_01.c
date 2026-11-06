void func_8002844C_ovl_01(void *arg0);
extern u8 D_80129E30_ovl_01;
extern s32 D_8010B660_ovl_01[];
s32 func_8004D168_ovl_01(s32 arg0, s32 arg1)
{
  u8 new_var;
  new_var = D_80129E30_ovl_01 >> arg1;
  if (((u32) arg1) < 5)
  {
    if ((new_var & 1) != 0)
    {
      return D_8010B660_ovl_01[arg1];
    }
  }
  return 0;
}

extern s32 D_800C7650_ovl_01[];
extern s32 *D_800E1388_ovl_01[];
void func_8004DA70_ovl_01(void *);
s32 func_8004D3D0_ovl_01(void *, void *);
void func_8004DB8C_ovl_01(void *arg0);
void func_8004DC28_ovl_01(void *arg0);
