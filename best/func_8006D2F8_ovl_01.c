extern u8 D_800C7650_ovl_01[];
void func_8006D2F8_ovl_01(void)
{
  union 
  {
    u8 *pointer;
    s32 value;
  } __repair_phase_storage = {D_800C7650_ovl_01};
  u8 *new_var;
  u32 k = 0x18000;
  u8 *p;
  s32 i;
  *((s32 *) ((__repair_phase_storage.pointer + k) + 0x4a0)) = 0;
  *((s32 *) ((__repair_phase_storage.pointer + k) + 0x4a4)) = 0;
  new_var = __repair_phase_storage.pointer + 0x27c;
  p = __repair_phase_storage.pointer + 0x1a248;
  for (i = 0x20; i != 0; i--)
  {
    *((s32 *) p) = 0;
    p[0x1e1] = 0;
    p += 0x368;
  }

  {
    u8 *q = *((u8 **) (new_var + k));
    __repair_phase_storage.value = q[2];
    while (__repair_phase_storage.value)
    {
      __repair_phase_storage.value--;
    }

  }
}

