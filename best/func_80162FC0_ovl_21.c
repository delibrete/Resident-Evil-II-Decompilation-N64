typedef struct 
{
  u8 x[0x300];
} Obj;
typedef void (*Fn)(Obj *, s32, s32);
extern volatile Fn D_801638B4_ovl_21[];
extern s32 func_801635B8_ovl_21(void *, s32);
extern void func_80162FA0_ovl_21(void *, s32);
void func_80162FC0_ovl_21(Obj *a, s32 b, s32 c)
{
  Obj *new_var3;
  s32 ff = 0xFF;
  u8 new_var;
  Obj *new_var2;
  if ((new_var = a->x[5]) != ff)
  {
    func_80162FA0_ovl_21(a, func_801635B8_ovl_21(new_var3, b));
    new_var3 = a;
    new_var3->x[5] = ff;
    new_var2 = new_var3;
  }
  ff = new_var2->x[0x26E];
  D_801638B4_ovl_21[ff](new_var2, b, c);
}

