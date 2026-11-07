extern u16 D_801535B0[];
extern s32 D_8014E10C;
extern s32 D_8014E170;
extern s32 D_80152180;
extern s32 D_80152990;
extern s32 D_801535A0;
extern s32 D_80157DB0;
extern void func_800A5C7C_ovl_01(void);
void func_800AE074_ovl_01(void);
extern s16 D_8014E100;
extern s32 D_80157DB0;
extern u8 D_80157DC0[];
extern u8 D_800AE124_ovl_01[];
extern s32 func_800AB3DC_ovl_01(void *, void *, int, s32, void *);
s32 func_800ADFD4_ovl_01(s16 arg0);
extern u8 D_8014E0F0[];
extern u8 D_801529A0[];
extern u8 D_800AE114_ovl_01[];
extern s32 D_8014E0FC;
extern s32 D_80152990;
s32 func_800ADF54_ovl_01(volatile unsigned int arg0, s16 *arg1)
{
  s32 v;
  *((s16 *) (D_8014E0F0 + 4)) = arg0;
  D_8014E0FC = (v = func_800AB3DC_ovl_01(D_8014E0F0, D_801529A0, D_80152990, 12, D_800AE114_ovl_01));
  if (v)
  {
    *arg1 = *((u16 *) (v + 6));
    return *((s32 *) D_8014E0FC);
  }
  return 0;
}

