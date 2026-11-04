extern u8 D_80148B80[];
extern u8 D_80148C00[];
u8 func_800AC684_ovl_01(s32 a, s32 b)
{
  u8 *p;
  s32 new_var;
  s32 t = b & 255;
  if (t == 255)
  {
    p = (char *) D_80148C00;
    new_var = (s32) (a & 255);
    p += new_var;
  }
  else
  {
    p = (char *) D_80148B80;
    t = a & 255;
    new_var = t * 16;
    p += (s32) (t + new_var);
  }
  return *p;
}

