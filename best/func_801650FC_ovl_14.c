typedef struct 
{
  u8 pad0[6];
  u8 state;
  u8 pad7[0x1e1];
  s32 unk1e8;
  u8 pad1ec[8];
  s32 x;
  u8 pad1f8[0x30];
  s32 z;
  u8 pad22c[0x88];
  u8 frame;
  u8 frame2;
  u8 pad2b6[6];
  s16 flags;
  u8 pad2ca[4];
  u8 sub;
  u8 pad2cf[0x17];
  u8 id;
  u8 pad2e7[0x20];
} Obj;
extern u8 D_80168B6C_ovl_14[];
extern s16 D_80168CD8_ovl_14[];
s32 func_80162144_ovl_14(void *, void *);
s32 func_801626E8_ovl_14(void *);
void func_800334F8_ovl_01(void *, void *);
s32 func_8008A974_ovl_01(void *, void *, s32, s32);
void func_80032C9C_ovl_01(void *, s32, s32);
s32 func_80083800_ovl_01(s16, s16 *);
s32 func_8006A8B0_ovl_01(s32, s32);
void func_801650FC_ovl_14(Obj *p, void *a1, s32 a2)
{
  s16 (*new_var3)[4];
  int __repair_constant = 4;
  s32 r;
  Obj *new_var;
  s16 v[4];
  s16 *new_var2;
  switch (p->state)
  {
    new_var3 = &v;
    case 0:
      p->unk1e8 = 0x1000f00;
      p->sub = __repair_constant;
      p->state = 1;
      p->flags |= 2;
      do
    {
      func_80162144_ovl_14(p, D_80168B6C_ovl_14);
    }
    while (0);
      r = func_801626E8_ovl_14(p);
      if (r || ((r & 0x20000000) != 0))
    {
      p->pad0[4] = 0x10;
      break;
    }
    {
      new_var = p;
      func_800334F8_ovl_01(p, a1);
      func_8008A974_ovl_01(new_var, a1, a2, 0x100);
      func_80032C9C_ovl_01(new_var, 0, 0);
      break;
    }
      new_var->pad0[0] |= 4;
      if (r & 0x40000000)
    {
      new_var->state = 5;
      break;
    }
      new_var->state = 3;
      new_var->id = r;

    case 3:
      new_var2 = *new_var3;
      new_var->unk1e8 = 0x11000f00;
      new_var->state = 4;
      if (!func_8008A974_ovl_01(new_var, a1, a2, 0x100))
    {
      break;
    }
      v[0] = 0x69d;
      v[2] = 0;
      D_80168CD8_ovl_14[1] = (new_var->frame - new_var->frame2) << 10;
      D_80168CD8_ovl_14[1] += (new_var->frame - new_var->id) << 10;
      r = func_80083800_ovl_01(new_var->frame << 10, new_var2);
      if (new_var->id & 1)
    {
      new_var->x += v[0];
      new_var->z = func_8006A8B0_ovl_01(new_var->id, new_var->z);
      new_var->state = 0;
    }
      break;

    case 5:
      new_var->unk1e8 = 0x10000f00;
      new_var->state = 6;
      if (func_8008A974_ovl_01(new_var, a1, a2, 0x100))
    {
      v[0] = 0x670;
      v[2] = 0;
      D_80168CD8_ovl_14[1] = (new_var->frame - new_var->frame2) << 10;
      {
        func_80083800_ovl_01(new_var->frame << 10, v);
      }
      new_var->state = 0;
    }
      break;

    case 4:

    case 6:
      break;

  }

}

