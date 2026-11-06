s32 func_80032B8C_ovl_01();
unsigned short func_80033634_ovl_01();
s32 func_80171B40_overlay_040();
void func_8017214C_overlay_040(void *arg0, s32 arg1, s32 arg2)
{
  char *new_var;
  if ((*((s8 *) (((char *) arg0) + 0x206))) == 0)
  {
    new_var = ((char *) arg0) + 0x1E0;
    *((s8 *) (((char *) arg0) + 0x206)) = 1;
    if ((*((u8 *) (((char *) arg0) + 5))) != 0xC)
    {
      *((s16 *) new_var) = 0x28;
      func_80032B8C_ovl_01(arg0, *((s16 *) (((char *) arg0) + 0x1F4)));
      *((u16 *) (((char *) arg0) + 0x66)) += (func_80033634_ovl_01() & 0xFF) + 0xFF80;
    }
  }
  func_80171B40_overlay_040(arg0, arg1, arg2);
  if (((u8) (*((u8 *) (((char *) arg0) + 7)))) >= 2U)
  {
    *((u8 *) (((char *) arg0) + 0x2BF)) &= 0xBF;
  }
}

