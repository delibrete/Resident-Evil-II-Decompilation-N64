s32 func_8000CB60(s32 *, s8 *, s32);
s32 func_80011390();
s32 func_800A56F0_ovl_01();
extern s32 D_800A4884_ovl_01;
extern u8 D_801362B0_ovl_01;
extern s32 D_80143DF0;
extern s32 D_80143E00;
extern s32 D_80143E40;
extern u16 D_80143EAA;
extern s32 D_80143EB0;
extern u8 D_80143EEC;
extern u8 D_80143EED;
extern s32 D_80143EF8;
extern s32 D_80143F04;
extern s32 D_80143F08;
extern s32 D_80143F10;
extern s32 D_80143F18;
extern s32 D_80143F1C;
extern s32 D_80143F2C;
extern s32 D_80143F30;
extern u16 D_80143F42;
extern s32 D_80143F8C;
extern s32 D_80143F90;
void func_800A5120_ovl_01(void)
{
  s8 sp10;
  s32 (*new_var)(s32);
  if (D_801362B0_ovl_01 != 0)
  {
    D_80143F42 = D_80143EAA;
    do
    {
    }
    while ((D_80143F42 << 0x10) > 0);
    (*((s32 (**)(s32 *)) (((char *) (&D_80143F90)) + 0xC)))(&D_800A4884_ovl_01);
    if (D_80143EED != 0)
    {
      (*((s32 (**)()) (((char *) (&D_80143F90)) + 4)))();
      func_80011390();
      D_80143EED = 0;
    }
    if (D_80143F08 != 0)
    {
      do
      {
        func_800A56F0_ovl_01();
      }
      while (0);
      (*((s32 (**)(s32)) (((char *) (&D_80143F90)) + 0x1C)))(D_80143F08);
      D_80143F08 = 0;
    }
    if (D_80143F10 != 0)
    {
      (*((s32 (**)(s32)) (((char *) (&D_80143F90)) + 0x1C)))(D_80143F10);
    }
    do
    {
    }
    while (D_80143EEC != 0);
    (*((s32 (**)(s32)) (((char *) (&D_80143F90)) + 0x1C)))(D_80143F8C);
    (*((s32 (**)(s32)) (((char *) (&D_80143F90)) + 0x1C)))(D_80143F1C);
    (*((s32 (**)(s32)) (((char *) (&D_80143F90)) + 0x1C)))(D_80143F18);
    new_var = *((s32 (**)(s32)) (((char *) (&D_80143F90)) + 0x1C));
    (*((s32 (**)(s32)) (((char *) (&D_80143F90)) + 0x1C)))(D_80143F30);
    (*((s32 (**)(s32)) (((char *) (&D_80143F90)) + 0x1C)))(D_80143F2C);
    do { new_var(*((s32 *) (((char *) (&D_80143EF8)) + 0))); } while (0);
    (*((s32 (**)(s32)) (((char *) (&D_80143F90)) + 0x1C)))(*((s32 *) (((char *) (&D_80143EF8)) + 4)));
    (*((s32 (**)(s32)) (((char *) (&D_80143F90)) + 0x1C)))(D_80143EB0);
    (*((s32 (**)(s32)) (((char *) (&D_80143F90)) + 0x1C)))(D_80143F04);
    sp10 = 0xFF;
    func_8000CB60(&D_80143E00, &sp10, 1);
    (*((s32 (**)(s32)) (((char *) (&D_80143F90)) + 0x1C)))(D_80143E40);
    (*((s32 (**)(s32)) (((char *) (&D_80143F90)) + 0x1C)))(D_80143DF0);
  }
}

