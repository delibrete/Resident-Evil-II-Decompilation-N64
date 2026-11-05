s32 func_80040E88_ovl_01(void *, void *);
void func_80165B50_overlay_035(void *arg0, s32 arg1, s16 arg2, s16 arg3)
{
  void *temp_s0;
  void *temp_s0_2;
  temp_s0 = (*((s32 *) (((char *) arg0) + 0x234))) + ((arg1 & 0x3F) * 0x178);
  if (!(arg1 & 0x40))
  {
    temp_s0_2 = temp_s0;
    *((s16 *) (((char *) temp_s0_2) + 0x58)) = (s16) (-arg2);
    *((s16 *) (((char *) temp_s0_2) + 0x5A)) = (s16) (-arg3);
    func_80040E88_ovl_01(temp_s0_2 + 0x58, temp_s0_2 + 8);
  }
  temp_s0_2 = temp_s0_2 + 0x2F0;
  if (!(arg1 & 0x80))
  {
    *((s16 *) (((char *) temp_s0_2) + 0x58)) = arg2;
    *((s16 *) (((char *) temp_s0_2) + 0x5A)) = arg3;
    func_80040E88_ovl_01(temp_s0_2 + 0x58, temp_s0_2 + 8);
  }
}

