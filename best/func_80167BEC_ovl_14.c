typedef struct 
{
  u8 b[0x340];
} Obj;
s32 func_80077D48_ovl_01(s32, void *);
s32 func_80162B24_overlay_014(void *, void *, s32);
s32 func_8008A974_ovl_01(void *, s32, s32, s32);
s32 func_80162940_overlay_014(Obj *arg0, void *);
s32 func_80166BFC_ovl_14(void *);
extern u8 D_80168B74_ovl_14[];
void func_80167BEC_ovl_14(Obj *arg0, s32 arg1, s32 arg2)
{
  u16 *new_var3;
  u8 *p;
  s32 v0;
  s32 __repair_subtotal;
  u32 v1;
  s32 t;
  s16 *new_var;
  s32 __repair_phase_t;
  u8 *new_var2;
  new_var2 = p + 0x2E0;
  switch (((u8 *) arg0)[7])
  {
    new_var3 = (u16 *) (p + 0x2C8);
    case 0:
      ((u8 *) arg0)[0x26F] |= 0x80;
      func_80077D48_ovl_01(7, arg0);
      func_80162B24_overlay_014(arg0, D_80168B74_ovl_14 + (((u8 *) arg0)[0x2CB] * 8), 0);
      v0 = *new_var3;
      *((s32 *) (((u8 *) arg0) + 0x1E8)) = 0x19000000;
      new_var = (s16 *) (((u8 *) arg0) + 0x1E4);
      *new_var = 0;
      *((s16 *) (((u8 *) arg0) + 0x1E0)) = 0;
      *((s16 *) (((u8 *) arg0) + 0x1E2)) = 0;
      __repair_subtotal = 2;
      t = v0 | __repair_subtotal;
      *((u16 *) (((u8 *) arg0) + 0x2C8)) = t;
      v0 = *((s32 *) (p + 0x2C));
      v1 = p[7];
      do
    {
      v1++;
    }
    while (0);
      ((u8 *) arg0)[7] = v1;
      v0 += 0x546;
      *((s32 *) (((u8 *) arg0) + 0x2C)) = v0;
      do
    {
      func_8008A974_ovl_01(arg0, arg1, arg2, 0x1000);
    }
    while (0);
      v1 = *((s16 *) new_var2);
      v0 = *((s32 *) (p + 0x2C));
      if (v0 >= ((s32) v1))
    {
      s32 __repair_branch_v0_0 = v0;
      ((u8 *) arg0)[0x1E9] = 0;
      __repair_branch_v0_0 &= -9;
      *((s32 *) (((u8 *) arg0) + 0x2BC)) = 0;
      func_80162940_overlay_014(arg0, arg0);
      *((s32 *) (((u8 *) arg0) + 0x1E8)) = 0x19000000;
      __repair_branch_v0_0 = *((s32 *) p);
      *((s32 *) ((u8 *) arg0)) = __repair_branch_v0_0;
      __repair_branch_v0_0 = p[7];
      __repair_branch_v0_0++;
      ((u8 *) arg0)[7] = __repair_branch_v0_0;
      func_8008A974_ovl_01(arg0, arg1, arg2, 0x400);
    }
    else
    {
      ((u8 *) arg0)[0x1E9] = 0;
    }
      break;

    case 1:
      if ((*((s16 *) (((u8 *) arg0) + 0x1F2))) <= (0 - 1))
    {
      ((u8 *) arg0)[0x2CE] = 3;
      ((u8 *) arg0)[0x26F] &= 0x7F;
      ((u8 *) arg0)[6]++;
      *((s32 *) ((u8 *) arg0)) &= -13;
    }
    else
    {
      goto st2;
    }
      break;

    case 2:
      st2:
    *((s32 *) (((u8 *) arg0) + 0x1E8)) = 0x16000000;

      ((u8 *) arg0)[7]++;
      v0 = func_8008A974_ovl_01(arg0, arg1, arg2, 0x1000);
      ((u8 *) arg0)[7] += v0;
      break;

    case 3:
      if ((*((s16 *) (((u8 *) arg0) + 0x1F2))) < 0)
    {
      ((u8 *) arg0)[0x2CE] = 3;
      ((u8 *) arg0)[0x26F] &= 0x7F;
      ((u8 *) arg0)[6]++;
      *((s32 *) ((u8 *) arg0)) &= -13;
    }
    else
    {
      s32 __repair_branch_v0_1;
      ((u8 *) arg0)[7]++;
      *((s32 *) (((u8 *) arg0) + 0x1E8)) = 0x16000000;
      __repair_branch_v0_1 = func_8008A974_ovl_01(arg0, arg1, arg2, 0x1000);
      ((u8 *) arg0)[7] += __repair_branch_v0_1;
    }
      break;

    case 4:

    case 5:
      __repair_phase_t = 0x2CE;
      ((u8 *) arg0)[__repair_phase_t] = 3;
      ((u8 *) arg0)[0x26F] &= 0x7F;
      *((s32 *) ((u8 *) arg0)) &= -13;
      func_80166BFC_ovl_14(arg0);
      break;

  }

  v0 = *((s16 *) (p + 0x1E2));
  v1 = *((s32 *) (p + 0x2C));
  v1 += v0;
  v1 += 0x48;
  __repair_phase_t = *((s16 *) new_var2);
  if (((s32) v1) < __repair_phase_t)
  {
    s32 __repair_branch_v0_2;
    __repair_branch_v0_2 = *((s16 *) (p + 0x1E2));
    __repair_branch_v0_2 += 0x30;
    *((s16 *) (((u8 *) arg0) + 0x1E2)) = __repair_branch_v0_2;
    __repair_branch_v0_2 <<= 16;
    __repair_branch_v0_2 >>= 16;
    v1 = *((s32 *) (p + 0x2C));
    __repair_branch_v0_2 += v1;
    *((s32 *) (((u8 *) arg0) + 0x2C)) = __repair_branch_v0_2;
    __repair_subtotal = *((s16 *) (p + 0x1E0));
    __repair_branch_v0_2 = __repair_subtotal;
    __repair_branch_v0_2 += *((s32 *) (p + 0x28));
    *((s32 *) (((u8 *) arg0) + 0x28)) = __repair_branch_v0_2;
    *((s32 *) (((u8 *) arg0) + 0x30)) = (__repair_branch_v0_2 = *((s16 *) (p + 0x1E4)));
    __repair_branch_v0_2 += *((s32 *) (p + 0x30));
  }
  else
  {
    *((s32 *) (((u8 *) arg0) + 0x2C)) = __repair_phase_t;
  }
  if (arg1 == 123)
  {
    t = arg2;
  }
}

