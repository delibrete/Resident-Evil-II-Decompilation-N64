extern s32 func_8008A974_ovl_01(void *, s32, s32, s32);
extern s32 func_801626E8_overlay_014(void *);
extern void func_8008386C_ovl_01();
extern s32 func_80032D44_ovl_01();
extern s32 D_800C7650_ovl_01;
typedef struct 
{
  u8 x[8];
} Blob8;
void func_80165994_ovl_14(void *arg0, s32 arg1, s32 arg2)
{
  u8 *p = arg0;
  s32 state = p[6];
  s32 t;
  s32 __repair_phase_t;
  Blob8 b;
  switch (state)
  {
    case 4:
      bump:
    ;

      bumpstate:
    p[6] = p[6] + 1;

      break;

    case 0:
      *((s32 *) (p + 0x1e8)) = 0x03000000;
      *((u16 *) (p + 0x2c8)) |= 2;
      *((s32 *) (p + 0x2bc)) = 0;
      p[0x2ce] = 0;
      *((s16 *) (p + 0x1e2)) = 0;
      p[6]++;
      if (!func_8008A974_ovl_01(arg0, arg1, arg2, 0x1000))
    {
      goto done;
    }
      if (p[0x2b5] == 2)
    {
      goto phase5;
    }
      __repair_phase_t = func_801626E8_overlay_014(arg0);
      if (!__repair_phase_t)
    {
      goto done;
    }
      *((s32 *) (p + 0x2c4)) = __repair_phase_t;
      phase5:
    p[0x2ce] = 5;

      *((s32 *) (p + 0x1e8)) = 0x12000000;
      *((s16 *) (p + 0x1f4)) = -1;
      goto bump;

    case 1:
      *((s16 *) (p + 0x1e2)) += 0x48;
      *((s32 *) (p + 0x2c)) += *((s16 *) (p + 0x1e2));
      if (!func_8008A974_ovl_01(arg0, arg1, arg2, 0x1000))
    {
      goto done;
    }
      t = p[6];
      goto bumpstate;

    case 2:
      b = *((Blob8 *) 0x801686fc);
      func_8008386C_ovl_01();
      do
    {
      func_80032D44_ovl_01();
    }
    while (0);
      p[6]++;
      *((s16 *) (p + 0x1e2)) += 0x48;
      *((s32 *) (p + 0x2c)) += *((s16 *) (p + 0x1e2));
      if (!func_8008A974_ovl_01(arg0, arg1, arg2, 0x1000))
    {
      goto done;
    }
      if ((((*((s32 *) (p + 0x2c))) + (*((s16 *) (p + 0x1e2)))) + 0x48) < 0)
    {
      goto done;
    }
      *((s32 *) (p + 0x1e8)) = 0x13000000;
      t = p[6];
      goto bumpstate;

    case 3:
      p[0x2ce] = 4;
      if (!func_8008A974_ovl_01(arg0, arg1, arg2, 0x1000))
    {
      goto done;
    }
      if (func_8008A974_ovl_01(arg0, arg1, arg2, 0x1000))
    {
      *((s32 *) (p + 4)) = 0x01000000;
    }
      goto done;

  }

  done:
  ++(*((u16 *) (p + 0x1f4)));

}

