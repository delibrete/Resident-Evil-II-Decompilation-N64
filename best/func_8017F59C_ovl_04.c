extern unsigned char D_800E8ADA;
extern unsigned char D_800E10D8;
extern unsigned short D_800E8AF2;
extern unsigned short D_800E10FA;
extern unsigned short D_800E8AF4;
extern unsigned short D_800E10FE;
extern unsigned short D_800E8AF6;
extern unsigned short D_800E1102;
extern unsigned short D_800E8FAC;
extern unsigned short D_800E1136;
extern int D_800E108C;
extern int D_800E8AD0;
extern int D_800DFB84;
extern unsigned char D_800E8AE8;
extern unsigned char D_8012BF42;
extern unsigned char D_800E8AE9;
extern unsigned char D_8012BF40;
extern int D_800E10AC;
extern int D_800E8AE4;
extern unsigned short D_800E8AEA;
extern unsigned short D_800E12C2;
extern unsigned char D_800E8ADF;
extern unsigned char D_800E1386;
extern unsigned char D_800E8ADC;
extern unsigned short D_800E8AE0;
extern unsigned short D_800E1384;
extern unsigned char D_800E8ADD;
extern unsigned char D_800E8AD9;
extern unsigned char D_800DFB89;
extern unsigned char D_800E8ADE;
s32 func_8006BB3C_ovl_01();
extern char D_800C7650[];
extern u8 D_800E91E2;
extern u8 D_80119E13;
extern u8 D_80119E14;
extern char D_8012BF38[];
void func_8017F59C_ovl_04(void)
{
  unsigned short new_var2;
  u16 new_var;
  int new_var3;
  unsigned short temp_a1;
  D_800E8ADA = (u8) D_800E10D8;
  new_var3 = D_800DFB84;
  new_var = (u16) D_800E10FA;
  D_800E8AF2 = new_var;
  D_800E8AF4 = (u16) D_800E10FE;
  D_800E8AF6 = (u16) D_800E1102;
  D_800E8FAC = (u16) D_800E1136;
  if (D_800E108C & 0x200000)
  {
    D_800E8AD0 = 0;
  }
  else
  {
    temp_a1 = D_800E8AD0 + (func_8006BB3C_ovl_01(-1, D_800E1102, D_800E1136) - new_var3);
    D_800E8AD0 = temp_a1;
    D_800DFB84 = func_8006BB3C_ovl_01(-1, (u16) temp_a1);
  }
  D_800E8AE8 = (u8) D_8012BF42;
  D_800E8AE9 = (u8) D_8012BF40;
  if (D_800E108C & 0x20)
  {
    D_800E10AC = (s32) (D_800E10AC | 0x04000000);
  }
  D_800E8AE4 = (s32) D_800E10AC;
  new_var2 = D_800E12C2;
  D_800E8AEA = (u16) new_var2;
  D_800E8ADF = (u8) D_800E1386;
  D_800E8ADC = (u8) D_80119E13;
  D_800E8AE0 = (int) ((u16) D_800E1384);
  D_800E8ADD = (u8) D_80119E14;
  D_800E8AD9 = (u8) D_800DFB89;
  D_800E8ADE = (u8) D_800E91E2;
}

