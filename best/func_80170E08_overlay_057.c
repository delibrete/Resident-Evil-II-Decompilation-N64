extern unsigned char D_800E133F;
extern unsigned short D_800E10CA;
s32 func_80032EA4_ovl_01();
extern char D_800C7650[];
void func_80170E08_overlay_057(void *arg0)
{
  s32 temp_a0;
  s32 new_var;
  s32 temp_v1;
  s32 var_v0;
  s16 *new_var3;
  u32 temp_s2;
  s32 new_var2;
  temp_s2 = *((u32 *) (((char *) arg0) + 0x28C));
  func_80032EA4_ovl_01(arg0, *((void **) (D_800C7650 + 0x19AA8)), *((void **) (D_800C7650 + 0x19AB0)), (void *) 0x5F4);
  func_80032EA4_ovl_01(arg0, *((void **) (D_800C7650 + 0x19AA8)), *((void **) (D_800C7650 + 0x19AB0)));
  temp_v1 = func_80032EA4_ovl_01(arg0, *((void **) (D_800C7650 + 0x19AA8)), *((void **) (D_800C7650 + 0x19AB0)));
  temp_a0 = temp_v1;
  if ((*((u16 *) (((char *) arg0) + 0x2C0))) == 0)
  {
    new_var3 = (s16 *) (((char *) arg0) + 0x1AA);
    *new_var3 = 1;
    var_v0 = 0x01060000;
    goto block_12;
  }
  new_var = temp_v1;
  if ((*((s16 *) (((char *) arg0) + 0x1F2))) < 0x64)
  {
    *new_var3 = 1;
    var_v0 = 0x01060000;
    goto block_12;
  }
  if (((new_var << 0x10) == 0) && (temp_s2 >= 0x9C5U))
  {
    *((s32 *) (((char *) arg0) + 4)) = 0x01010000;
  }
  if ((((D_800E133F == 0) && ((*((s16 *) (((char *) arg0) + 0x1F4))) < 0xA)) && ((new_var2 = temp_a0 << 0x10) == 0)) && (temp_s2 < 0x9C4U))
  {
    var_v0 = 0x01040000;
    if (D_800E10CA & 4)
    {
      block_12:
      *((s32 *) (((char *) arg0) + 4)) = var_v0;

    }
  }
}

