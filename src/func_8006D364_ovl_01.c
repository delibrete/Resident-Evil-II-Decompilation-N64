extern s32 D_800C7650_ovl_01;
extern s8 D_80114EDA_ovl_01;
volatile unsigned long func_8006D364_ovl_01(void)
{
  char *new_var2;
  char *new_var;
  new_var = (char *) (&D_800C7650_ovl_01);
  new_var2 = (char *) (&D_800C7650_ovl_01);
  *((s16 *) (new_var2 + 0x215C8)) = -1;
  *((s16 *) (new_var2 + 0x215CA)) = -1;
  *((s16 *) (new_var2 + 0x215CC)) = -1;
  *((s16 *) (0x215CE + new_var)) = -1;
  *((s32 *) (new_var2 + 0x21654)) = 0;
  *((s32 *) (new_var2 + 0x19A64)) = 0;
  *((s32 *) (new_var2 + 0x19A68)) = 0;
  *((s32 *) (new_var2 + 0x19A6C)) = 0;
  *((s32 *) (new_var2 + 0x19A70)) = 0;
  D_80114EDA_ovl_01 = 0;
}

