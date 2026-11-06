s32 func_80032EA4_ovl_01();
extern char D_800C7650[];
void func_80170A60_overlay_056(void *arg0)
{
  char *new_var;
  u32 temp_s2;
  temp_s2 = *((u32 *) (((char *) arg0) + 0x28C));
  new_var = D_800C7650;
  func_80032EA4_ovl_01(arg0, *((void **) (D_800C7650 + 0x19AA8)), *((void **) (D_800C7650 + 0x19AB0)), (void *) 0x5F4);
  do { func_80032EA4_ovl_01(arg0, *((void **) (new_var + 0x19AA8)), *((void **) (D_800C7650 + 0x19AB0))); } while (0);
  if (((func_80032EA4_ovl_01(arg0, *((void **) (D_800C7650 + 0x19AA8)), *((void **) (D_800C7650 + 0x19AB0)), 0x400) << 0x10) == 0) && (temp_s2 >= 0x9C5U))
  {
    *((s32 *) (((char *) arg0) + 4)) = 0x01010000;
  }
}

