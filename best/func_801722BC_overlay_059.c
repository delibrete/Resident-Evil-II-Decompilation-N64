s32 func_80032EA4_ovl_01();
extern char D_800C7650[];
void func_801722BC_overlay_059(void *arg0)
{
  volatile int temp_s0;
  u32 temp_s2;
  func_80032EA4_ovl_01(arg0, *((void **) (D_800C7650 + 0x19AA8)), *((void **) (D_800C7650 + 0x19AB0)), (void *) 0x5F4);
  temp_s2 = *((u32 *) (((char *) arg0) + 0x28C));
  temp_s0 = func_80032EA4_ovl_01(arg0, *((void **) (D_800C7650 + 0x19AA8)), *((void **) (D_800C7650 + 0x19AB0)), 0x200);
  func_80032EA4_ovl_01(arg0, *((void **) (D_800C7650 + 0x19AA8)), *((void **) (D_800C7650 + 0x19AB0)));
  if (((((temp_s0 << 0x10) == 0) && (temp_s2 >= 0x9C5U)) && ((temp_s2 + 1) <= 0xFA0U)) && ((*((u8 *) (((char *) arg0) + 0x2BA))) == 0))
  {
    *((s32 *) (((char *) arg0) + 4)) = 0x01020000;
  }
  if ((*((s16 *) (((char *) arg0) + 0x1F2))) < 0x2BC)
  {
    *((s32 *) (((char *) arg0) + 4)) = 0x01000000;
    *((u8 *) (((char *) arg0) + 0x26F)) = (*((u8 *) (((char *) arg0) + 0x26F))) | 0x80;
  }
}

