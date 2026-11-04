s32 func_80032EA4_ovl_01();
extern char D_800C7650[];
void func_8016F26C_overlay_057(void *arg0)
{
  char *new_var;
  {
    new_var = D_800C7650;
    func_80032EA4_ovl_01(arg0, *((void **) (D_800C7650 + 0x19AA8)), *((void **) (D_800C7650 + 0x19AB0)), (void *) 0x400);
    do
    {
      func_80032EA4_ovl_01(arg0, *((void **) (D_800C7650 + 0x19AA8)), *((void **) (new_var + 0x19AB0)));
    }
    while (0);
    *((s8 *) (((char *) arg0) + 5)) = 1;
  }
}

