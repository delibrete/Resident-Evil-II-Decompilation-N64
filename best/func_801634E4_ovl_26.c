extern u8 D_80167244_ovl_26;
extern u8 D_8016723C_ovl_26;
extern u8 D_80167218_ovl_26;
s32 func_80033634_ovl_01(void);
void func_80166984_ovl_26(void *);
void func_801639A4_ovl_26(void *a);
void func_80163950_ovl_26(void *a);
void func_8016369C_ovl_26(void *a);
void func_801634E4_ovl_26(void *a)
{
  u8 *p = ((u8 *) a) + 0x2b4;
  u32 i = func_80033634_ovl_01();
  u8 *new_var;
  volatile long new_var2;
  p[8] = *new_var;
  ;
  p[0xa] = (*(((u8 *) (&D_80167218_ovl_26)) + (func_80033634_ovl_01() & 7))) + 0x1e;
  ;
  p[9] = (*(((s8 *) a) + 0x206)) ? (15) : (0);
  *((s16 *) (((u8 *) a) + 0x130)) = (*(((u8 *) a) + 0x2cd)) ? (-800) : (800);
  *(((u8 *) a) + 5) = 1;
  *((u16 *) (((u8 *) a) + 6)) = 0;
  new_var = ((u8 *) (&D_80167218_ovl_26)) + (i & 7);
  func_80166984_ovl_26(a);
}

