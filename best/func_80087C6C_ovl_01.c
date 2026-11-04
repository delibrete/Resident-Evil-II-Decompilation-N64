void func_8002FC30_ovl_01(void *, s32, s32);
void func_80030D98_ovl_01(void *);
void func_8002D1B8_ovl_01(void *);
void func_80028480_ovl_01(u8 *a);
extern u16 D_80127560_ovl_01[];
s32 func_80087898_ovl_01(void *arg0, s32 arg1);
s32 func_8000CEC0(void *, void *, s32, u32, s32, s32, void *, void *);
s32 func_80087AFC_ovl_01(void *, void *, void *, u32);
extern s32 D_80129FD4_ovl_01;
extern s32 D_8013A1D0;
extern s32 D_8013A2C0;
void func_80087C6C_ovl_01(void *arg)
{
  union 
  {
    u32 value;
    u8 *pointer;
  } __repair_phase_storage;
  void *p = *((void **) (((u8 *) arg) + 4));
  void *new_var;
  __repair_phase_storage.pointer = (u8 *) ((*((s32 *) p)) + ((s32) (&D_80129FD4_ovl_01)));
  if ((*__repair_phase_storage.pointer) == 2)
  {
    *__repair_phase_storage.pointer = 3;
    *((s32 *) arg) = 8;
    __repair_phase_storage.value = *((u32 *) (((u8 *) p) + 4));
    if (__repair_phase_storage.value >= 101)
    {
      new_var = arg;
      func_8000CEC0(&D_8013A2C0, new_var, 0, __repair_phase_storage.value, 0, 0, &D_8013A1D0, new_var);
    }
    else
    {
      do { func_80087AFC_ovl_01(new_var, new_var, p, __repair_phase_storage.value); } while (0);
    }
  }
}

extern u8 D_800C7650_ovl_01[];
void func_80089B5C_ovl_01(void *arg);
