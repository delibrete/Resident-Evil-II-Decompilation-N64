void func_80077D48_ovl_01(s32 arg0, void *arg1);
void func_80162B24_overlay_016(void *arg0, void *arg1, s32 arg2);
s32 func_8008A974_ovl_01(void *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_80162940_overlay_016(void *arg0);
void func_80165A04_ovl_16(void *arg0);
extern u8 func_80167368_ovl_16[];
typedef struct 
{
  s32 unk_00;
  u8 unk_04[2];
  u8 unk_06;
  u8 unk_07;
  u8 unk_08[0x20];
  s32 unk_28;
  s32 unk_2C;
  s32 unk_30;
  u8 unk_34[0x1AC];
  s16 unk_1E0;
  u16 unk_1E2;
  s16 unk_1E4;
  u8 unk_1E6[2];
  s32 unk_1E8;
  u8 unk_1EC[6];
  s16 unk_1F2;
  u8 unk_1F4[0x7B];
  u8 unk_26F;
  u8 unk_270[0x4C];
  s32 unk_2BC;
  u8 unk_2C0[8];
  u16 unk_2C8;
  u8 unk_2CA;
  u8 unk_2CB;
  u8 unk_2CC[2];
  u8 unk_2CE;
  u8 unk_2CF[0x11];
  s16 unk_2E0;
} S_func_80166728_ovl_16;
void func_80166728_ovl_16(S_func_80166728_ovl_16 *p, s32 arg1, s32 arg2)
{
  s32 a3v;
  S_func_80166728_ovl_16 *new_var;
  int new_var3;
  S_func_80166728_ovl_16 *new_var2;
  volatile unsigned int new_var4;
  switch (p->unk_07)
  {
    case 0:
      p->unk_26F = p->unk_26F | 0x80;
      func_80077D48_ovl_01((unsigned long long) 7, p);
      func_80162B24_overlay_016(p, func_80167368_ovl_16 + (p->unk_2CB * 8), 0);
      p->unk_2C8 |= 2;
      p->unk_1E8 = 0x13000000;
      p->unk_1E4 = 0;
      p->unk_1E0 = 0;
      new_var = p;
      new_var->unk_1E2 = 0;
      p->unk_07++;
      new_var2 = p;
      new_var2->unk_2C += 0x546;
      do
    {
      func_8008A974_ovl_01(p, arg1, arg2, 0x1000);
    }
    while (0);
      ((u8 *) new_var2)[0x1E9] = 0;
      if (p->unk_2C < 0)
    {
      break;
    }
      do
    {
      func_80162940_overlay_016(p);
    }
    while (0);
      new_var2->unk_2BC = 0;
      p->unk_1E8 = 0x13000000;
      new_var2->unk_00 &= ~8;
      p->unk_07++;
      new_var3 = 0x400;
      a3v = new_var3;
      goto addstate;

    case 1:
      if (p->unk_1F2 < 0)
    {
      p->unk_2CE = 3;
      p->unk_26F &= 0x7F;
      p->unk_06++;
      p->unk_00 &= ~0xC;
      break;
    }
      new_var2->unk_1E8 = 0x10000000;
      new_var2->unk_07++;
      a3v = 0x1000;
      addstate:
    p->unk_07 += func_8008A974_ovl_01(p, arg1, arg2, a3v);

      break;

    case 2:

    case 3:

    case 4:

    new_var4 = 3;
    case 5:
      p->unk_2CE = new_var4;
      p->unk_26F &= 0x7F;
      new_var2->unk_00 &= ~0xC;
      func_80165A04_ovl_16(new_var2);
      break;

  }

  if (((new_var2->unk_2C + ((s16) new_var2->unk_1E2)) + 0x48) < p->unk_2E0)
  {
    new_var2->unk_1E2 += 0x30;
    p->unk_2C += (s16) new_var2->unk_1E2;
    p->unk_28 += new_var2->unk_1E0;
    p->unk_30 += new_var2->unk_1E4;
  }
  else
  {
    new_var2->unk_2C = p->unk_2E0;
  }
}

