void func_80166138_ovl_17(void);
extern volatile u32 D_80167F50_ovl_17[];
void func_80165E48_ovl_17(void *arg0)
{
  u8 new_var;
  u8 *p = (u8 *) arg0;
  new_var = p[0x2BE];
  if (p[0x2C0])
  {
    goto special;
  }
  {
    u32 i = new_var;
    if (i || p)
    {
      ((void (*)(void)) D_80167F50_ovl_17[i])();
    }
    else
    {
      ((void (*)(void)) D_80167F50_ovl_17[i])();
    }
  }
  goto done;
  done:
  return;

  special:
  func_80166138_ovl_17();

}

