typedef struct 
{
  u8 pad[0x174];
} X;
void func_80028540_ovl_01(void *arg0, s32 arg1, s32 arg2);
extern u8 D_800C7650_ovl_01[];
void func_8006D2F8_ovl_01(void);
extern u8 D_800C7650_ovl_01[];
extern u8 D_80114EDA_ovl_01;
void func_8006D364_ovl_01(void);
extern s32 D_800DFB00_ovl_01;
extern u8 D_800C7650_ovl_01[];
void func_8006D5D8_ovl_01(void)
{
  volatile s32 *p = &D_800DFB00_ovl_01;
  s32 i;
  volatile s32 *new_var;
  for (i = 0x20; i != 0; i--)
  {
    new_var = p;
    *new_var = 0;
    p++;
  }

  p = D_800C7650_ovl_01 + 0x20f54;
  *((volatile u8 *) p) = 0;
}

