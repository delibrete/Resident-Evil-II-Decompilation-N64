extern s32 D_800C5278;
extern s32 D_800128AC;
s32 func_8000521C(void);
s32 func_80005EE8(u32 a, s32 b)
{
  u32 new_var;
  volatile s32 *new_var2;
  s32 x;
  if ((a & 65535) == 65535)
  {
    return b;
    do
    {
 do { } while (0);
    }
    while (0);
    new_var2 = (volatile s32 *) 0;
  }
 D_800128AC = D_800C5278 + 0xAF800; x = func_8000521C();
  new_var = (u32) x;
  if (((u32) D_800128AC) < new_var)
  {
    return *new_var2;
  }
  return x;
}
