s32 func_800292C8_ovl_01(void *, s32);
s32 func_800293C0_ovl_01(void *);
s32 func_80029718_ovl_01(void *);
s32 func_8002A528_ovl_01(void *);
s32 func_8002AD8C_ovl_01(void *, s32);
s32 func_8002D290_ovl_01(void *);
s32 func_8002D360_ovl_01();
s32 func_8002D948_ovl_01(void *);
s32 func_8002E52C_ovl_01(void *);
s32 func_8002E72C_ovl_01(void *, s32);
s32 func_8002E838_ovl_01(void *);
void func_8002DA80_ovl_01(void *arg0)
{
  void **new_var;
  void *temp_s1;
  temp_s1 = *((void **) (((char *) arg0) + 0x164));
  func_8002D360_ovl_01();
  func_8002D948_ovl_01(arg0);
  *((s32 *) (((char *) temp_s1) + 0xC)) = 0;
  *((s32 *) (((char *) temp_s1) + 0x18)) = 0;
  new_var = (void **) (((char *) arg0) + 4);
  *((s32 *) (((char *) temp_s1) + 0x20)) = 0;
  if ((*((s32 *) (((char *) arg0) + 0x118))) == (*((s32 *) (((char *) arg0) + 0x20))))
  {
    *((s32 *) (((char *) temp_s1) + 0x14)) = 0;
    *((s32 *) (((char *) temp_s1) + 0x1C)) = 1;
  }
  else
  {
    *((s32 *) (((char *) (*((void **) (((char *) arg0) + 0)))) + 0x14)) = 0x28;
    (*((s32 (**)(void *)) (((char *) (*((void **) (((char *) arg0) + 0)))) + 0)))(arg0);
  }
  *((s32 *) (((char *) temp_s1) + 0x10)) = func_8002D290_ovl_01(arg0);
  if ((*((s32 *) (((char *) arg0) + 0x44))) != 0)
  {
    if ((*((s32 *) (((char *) arg0) + 0x40))) != 0)
    {
      *((s32 *) (((char *) (*((void **) (((char *) arg0) + 0)))) + 0x14)) = 0x27;
      (*((s32 (**)(void *)) (((char *) (*((void **) (((char *) arg0) + 0)))) + 0)))(arg0);
    }
    *((s32 *) (((char *) arg0) + 0x48)) = 0;
    *((s32 *) (((char *) (*((void **) (((char *) arg0) + 0)))) + 0x14)) = 0x28;
    (*((s32 (**)(void *)) (((char *) (*((void **) (((char *) arg0) + 0)))) + 0)))(arg0);
  }
  if ((*((s32 *) (((char *) arg0) + 0x40))) == 0)
  {
    if ((*((s32 *) (((char *) temp_s1) + 0x10))) != 0)
    {
      func_8002E52C_ovl_01(arg0);
    }
    else
    {
      func_800293C0_ovl_01(arg0);
      func_8002E838_ovl_01(arg0);
    }
    func_8002E72C_ovl_01(arg0, *((s32 *) (((char *) temp_s1) + 0x20)));
  }
  func_80029718_ovl_01(arg0);
  if ((*((s32 *) (((char *) arg0) + 0xE4))) != 0)
  {
    *((s32 *) (((char *) (*((void **) (((char *) arg0) + 0)))) + 0x14)) = 1;
    (*((s32 (**)(void *)) (((char *) (*((void **) (((char *) arg0) + 0)))) + 0)))(arg0);
  }
  else
  {
    func_8002A528_ovl_01(arg0);
  }
  func_800292C8_ovl_01(arg0, (*((s32 *) (((char *) temp_s1) + 0x14))) == 1);
  func_8002AD8C_ovl_01(arg0, 0);
  (*((s32 (**)(void *)) (((char *) (*new_var)) + 0x18)))(arg0);
}

