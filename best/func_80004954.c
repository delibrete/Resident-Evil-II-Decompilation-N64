typedef struct 
{
  void *f00;
  s32 f04;
  s32 f08;
  u8 *f0C;
  s32 f10;
  u8 *f14;
} G49;
extern s32 *func_80001180(s32);
extern s32 func_800888CC_ovl_01(s32, void *, s32);
extern void *func_8008AF60_ovl_01(s32);
extern s32 D_800128A8;
extern G49 D_80012860;
extern u8 D_800C7650_ovl_01[];
void func_80004954(void)
{
  s32 buf[0x40];
  void **new_var2;
  s32 *p;
  s32 src;
  s32 n;
  s32 size;
  void *ptr;
  u8 *new_var;
  p = func_80001180(0x43);
  src = *p;
  D_800128A8 = src;
  func_800888CC_ovl_01(src, buf, 0x28);
  n = (D_80012860.f08 = buf[0]);
  ;
  D_80012860.f04 = (n * 8) + 0x28;
  ptr = func_8008AF60_ovl_01(size);
  D_80012860.f00 = ptr;
  new_var = (D_800C7650_ovl_01 + 0x18000) + 0x1A5C;
  func_800888CC_ovl_01(D_800128A8, ptr, (n * 8) + 0x28);
  D_80012860.f10 = 0;
  new_var2 = &D_80012860.f00;
  D_80012860.f14 = ((u8 *) D_80012860.f00) + 0x28;
  D_80012860.f0C = ((u8 *) (*new_var2)) + 8;
  *((s32 *) new_var) &= ~0x20;
}

