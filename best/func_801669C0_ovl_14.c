#define HANDLE (*(s32 *)((u8 *)&func_80168C50_ovl_31+0x90))
extern void func_80166A8C_ovl_14(void *, s32 *, s32);
extern u32 D_800E10D0_ovl_01;
extern s32 func_80168C50_ovl_31;
typedef void (*Fn)(void *, s32, s32);
extern volatile Fn D_80168C94_ovl_14[];
void func_801669C0_ovl_14(void *arg0, s32 arg1, volatile int arg2)
{
  u8 *p = arg0;
  s32 x;
  s32 a1 = arg1;
  u8 y;
  u8 *new_var;
  if (p[5] != 255)
  {
    p[0x2cb] = y;
    new_var = p;
    x = new_var[0xc];
    if (HANDLE == x)
    {
      HANDLE = 0;
    }
    *((u32 *) (new_var + 0x2c4)) = (u32) (&D_800E10D0_ovl_01);
    p[0x2b5] = 2;
    p[5] = 255;
    func_80166A8C_ovl_14(arg0, &HANDLE, 255);
    if (new_var[0x26e])
    {
      *((u32 *) new_var) &= ~0xe;
      *((u16 *) (new_var + 0x2c8)) &= 0xfd0f;
    }
    y = p[5];
  }
  D_80168C94_ovl_14[new_var[0x26e]](arg0, a1, arg2);
}

