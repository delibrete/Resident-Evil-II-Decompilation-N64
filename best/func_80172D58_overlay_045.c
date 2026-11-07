extern unsigned char D_800E8FB2;
s32 func_80173B4C_overlay_045();
extern char D_800C7650[];
void func_80172D58_overlay_045(void *arg0)
{
  s32 var_t1;
  u32 var_s0;
  void *new_var;
  void *temp_t0;
  void *temp_t2;
  new_var = *((void **) (((char *) arg0) + 0x234)); temp_t2=(void *)new_var;
  *((u8 *) (((char *) arg0) + 0x25C)) |= 1;
  var_t1 = *((s32 *) (((char *) temp_t2) + 0x1BE8));
  temp_t0 = temp_t2 + 0x1BE8;
  if (D_800E8FB2 & 8)
  {
    var_t1 |= 0x4A;
    *((s32 *) (((char *) temp_t2) + 0x1BE8)) = var_t1;
  }
  *((s16 *) (((char *) temp_t0) + 0x132)) = -0xF0;
  *((s16 *) (((char *) temp_t0) + 0x138)) = 0;
  *((s16 *) (((char *) temp_t0) + 0x134)) = 0;
  *((s16 *) (((char *) (new_var = temp_t0)) + 0x136)) = 0xF;
  *((s16 *) (((char *) temp_t0) + 0x13C)) = 0;
  *((s32 *) (((char *) temp_t0) + 0x60)) = 0x2F2F2F;
  *((s16 *) (((char *) temp_t0) + 0x130)) = (s16) ((*((u16 *) (((char *) arg0) + 0x66))) + 0x800);
  func_80173B4C_overlay_045((var_s0 = 0, arg0), 0x13, 1);
  do
  {
    func_80173B4C_overlay_045(arg0, 0x13, 2);
    do
    {
      var_s0 += 1;
    }
    while (0);
  }
  while (var_s0 < 4U);
}

