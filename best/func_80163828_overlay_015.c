extern short D_800E12C2;
extern short D_800E8C4C;
extern int D_800E10AC;
s32 func_80033634_ovl_01();
extern char D_800C7650[];
void func_80163828_overlay_015(void *arg0)
{
  u8 *new_var;
  int new_var3;
  s8 var_v0;
  u8 *new_var2;
  if ((*((s16 *) (((char *) arg0) + 0x1F2))) < 0x61A8)
  {
    *((u16 *) (((char *) arg0) + 0x2B4)) |= 0x20;
  }
  if ((D_800E12C2 + 1) > 0)
  {
    if ((*((u8 *) (((char *) arg0) + 0x2C2))) == 7)
    {
      new_var3 = 1;
      if ((*((u8 *) (((char *) arg0) + 0x2CC))) != new_var3)
      {
        *((s8 *) (((char *) arg0) + 0x26E)) = new_var3;
        return;
      }
      goto block_17;
    }
    new_var2 = &(*((u8 *) (((char *) arg0) + 0x2CA)));
    new_var = new_var2;
    if ((((*((u16 *) (((char *) arg0) + 0x2B4))) & 0x10) && (D_800E8C4C == 8)) && ((*((s16 *) (((char *) arg0) + 0x1F2))) < 0x61A8))
    {
      var_v0 = 3;
      if (D_800E10AC & 0x40000000)
      {
        *((s16 *) (((char *) arg0) + 0x2C4)) = 0;
        *((s16 *) (((char *) arg0) + 0x2C6)) = 0;
      }
      else
      {
        var_v0 = 2;
      }
      *((s8 *) (((char *) arg0) + 0x2C0)) = 0;
      *(((char *) arg0) + 0x26E) = var_v0;
      return;
    }
    if ((((*((s8 *) (((char *) arg0) + 0x2C1))) == 0) && ((*new_var) == 0)) && (!(func_80033634_ovl_01(&D_800C7650, D_800C7650 + 0x18000) & 3)))
    {
      *((s8 *) (((char *) arg0) - -0x26E)) = 4;
      *((u8 *) (((char *) arg0) + 0x2CA)) = (u8) ((func_80033634_ovl_01() & 0x3F) + 0x78);
      return;
    }
    goto block_17;
  }
  block_17:
  *((s8 *) (((char *) arg0) + 0x26E)) = 0;

}

