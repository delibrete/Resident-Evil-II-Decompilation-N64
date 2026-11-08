extern u8 D_80148B80[];
extern u8 D_80148C00[];
void func_800AC63C_ovl_01(s32 arg0, s32 arg1, u8 arg2)
{
  int new_var;
  s32 t = arg1 & 255;
  u8 *p;
  if (t == 255)
  {
  }
  else
  {
    p = (char *) D_80148B80;
    p = D_80148C00 + (arg0 & 255);
  }
  arg1 = t * 16;
  p += (s32) ((arg0 & 255) + arg1);
  *p = arg2;
}

extern s32 D_80143F08;
extern s32 (*D_80143FAC)(s32);
s32 func_800A56F0_ovl_01(void);
void func_800A5B60_ovl_01(void);
extern s32 D_80143EAC;
void func_800A5AB4_ovl_01(s32 arg0);
