typedef struct 
{
  u32 f0;
  u32 f4;
  u32 pos;
  u32 bits;
  u32 count;
  u8 pad[8];
  u32 end;
} S;
extern S *D_80186C14_ovl_02;
extern s32 D_8018579C_ovl_02;
extern void func_8017B768_ovl_02(void *, s32);
extern s32 func_8017B874_ovl_02(void);
extern void func_8017B96C_ovl_02(void *, s32);
void func_8017BD0C_ovl_02(s32 arg1)
{
  s32 new_var;
  int __repair_constant = 24;
  S *p = D_80186C14_ovl_02;
  s32 b = p->count - 0x20;
  p->bits = 0;
  if (D_8018579C_ovl_02 && (p->pos >= (p->end - 4)))
  {
    do
    {
      if (b < 25)
      {
        s32 lim = __repair_constant;
        do
        {
          if (p->pos >= D_80186C14_ovl_02->end)
          {
            func_8017B96C_ovl_02(&D_80186C14_ovl_02, arg1);
          }
          new_var = func_8017B874_ovl_02() << (lim - b);
          D_80186C14_ovl_02->bits |= new_var;
          b += 8;
        }
        while (b < 25);
      }
    }
    while (0);
  }
  else
    if (b < 25)
  {
    s32 lim = __repair_constant;
    do
    {
      if (D_80186C14_ovl_02->pos >= (D_80186C14_ovl_02->f0 + 0x800))
      {
        func_8017B768_ovl_02(&D_80186C14_ovl_02, arg1);
      }
      D_80186C14_ovl_02->bits |= (*((u8 *) (D_80186C14_ovl_02->pos++))) << (lim - b);
      b += 8;
    }
    while (b < 25);
  }
  D_80186C14_ovl_02->count = b;
}

