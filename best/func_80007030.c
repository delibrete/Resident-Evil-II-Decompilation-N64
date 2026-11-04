extern s32 func_80007000(void);
extern s32 func_800072E0(void);
extern void func_80007300(s32);
extern s32 D_80017820;
extern s32 D_80017828;
extern s32 D_8001782C;
s32 func_80007030(void)
{
  s32 a = func_800072E0();
  s32 b = func_80007000();
  u32 new_var2;
  s32 x = b - D_80017820;
  s32 c = D_80017828;
  int new_var;
  s32 d = D_8001782C;
  if (new_var2 || b)
  {
    func_80007300(a);
    x = x;
    b = d + x;
    new_var2 = (u32) b;
    new_var = c + (new_var2 < ((u32) x));
    return new_var;
  }
  else
  {
    func_80007300(a);
    x = x;
    b = d + x;
    new_var2 = (u32) b;
    new_var = c + (new_var2 < ((u32) x));
    return new_var;
  }
}

