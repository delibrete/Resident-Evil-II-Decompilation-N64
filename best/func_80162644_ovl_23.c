typedef struct 
{
  u8 pad0[0x234];
  u8 *p;
  u8 pad238[0x82];
  s8 state;
} A;
extern s32 D_801665D0_ovl_23;
extern void func_800662B8_ovl_01(void *);
extern s32 func_80165F70_ovl_13(void);
void func_80162644_ovl_23(A *a)
{
  s32 new_var2[2];
  u8 *b = ((u8 *) a->p) + 0x758;
  switch (a->state)
  {
    case 0:
      D_801665D0_ovl_23 = 0;
      a->state++;

    case 1:
      new_var2[1] = D_801665D0_ovl_23;
      goto calc;

    case 2:
      new_var2[1] = D_801665D0_ovl_23 - 1;
      D_801665D0_ovl_23 = new_var2[1];
      if (!new_var2[1])
    {
      a->state++;
    }
      goto calc2;

    case 3:
      new_var2[1] = D_801665D0_ovl_23;
      goto calc2;

    case 4:
      new_var2[1] = (D_801665D0_ovl_23 = D_801665D0_ovl_23 - 1);
      if (!new_var2[1])
    {
      a->state = 1;
    }
      calc:
    new_var2[1] = new_var2[1] * (new_var2[1] << 11);

      new_var2[1] = (((u32) new_var2[1]) * 0x51EB851F) >> 32;
      new_var2[1] >>= 5;
      *((u16 *) ((*((u8 **) (b + 0x120))) + 12)) = new_var2[1];
      new_var2[0] = ++D_801665D0_ovl_23;
      func_800662B8_ovl_01(a);
      ;
      if (new_var2[0] == 10)
    {
      a->state++;
    }
      break;
      calc2:
    new_var2[1] = new_var2[1] * (new_var2[1] << 11);

      new_var2[1] = (((u32) new_var2[1]) * 0x51EB851F) >> 32;
      new_var2[1] >>= 5;
      *((u16 *) ((*((u8 **) (b + 0x120))) + 12)) = 0x1000 - new_var2[1];
      func_800662B8_ovl_01(a);
      break;

  }

}

