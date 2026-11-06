extern short D_8014E0DC;
s32 *func_800AB3DC_overlay_001();
extern char D_800AE104_overlay_001[];
extern char D_8014E0D8[];
extern s32 *D_8014E0E0;
extern s32 D_80152180;
extern char D_80152190[];
s32 func_800ADEF4_ovl_01(s16 arg0)
{
  s32 *temp_v0;
  D_8014E0DC = arg0;
  temp_v0 = func_800AB3DC_overlay_001(&D_8014E0D8, &D_80152190, D_80152180, 8, &D_800AE104_overlay_001);
  D_8014E0E0 = temp_v0;
  if (temp_v0 == NULL)
  {
    return 0;
  }
  if (temp_v0)
  {
    return *temp_v0;
  }
  else
  {
    return *temp_v0;
  }
}

