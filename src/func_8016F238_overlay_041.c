/* identical to func_801626A8_ovl_13 (matched), with its names changed by decompdecomp */
void func_80161D94_ovl_13(void *p);
extern volatile unsigned int func_80033634_ovl_01();
extern s32 func_80172778_overlay_041(void *, s32);
void func_8016F238_overlay_041(void *p)
{
  u8 state = *((u8 *) (((u8 *) p) + 6));
  if (!(state == 0))
  {
    if (state != 1)
    {
      return;
    }
  }
  else
  {
    *((u8 *) (((u8 *) p) + 0x2b5)) = func_80033634_ovl_01() & 7;
  }
  (*((u8 *) (((u8 *) p) + 0x2b5)))--;
  if ((*((u8 *) (((u8 *) p) + 0x2b5))) == 255)
  {
    if ((*((u16 *) (((u8 *) p) + 0x1aa))) & 64)
    {
      func_80172778_overlay_041(p, 3);
    }
    else
    {
      func_80172778_overlay_041(p, 2);
    }
  }
}

extern s32 func_800377B0_ovl_01(s32, s32, void *, void *);
extern s32 D_800E8FC8_ovl_01;
void func_80166158_ovl_13(void *p, s32 n);
