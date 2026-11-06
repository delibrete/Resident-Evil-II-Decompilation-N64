s32 func_80006650(void *, s32);
s32 func_8000EFA0(void *, s32);
s32 func_800A5618_ovl_01();
s32 func_800A5660_ovl_01();
extern s32 D_80143EA4;
extern void *D_80143F08;
extern s32 D_80143F0C;
extern void *D_80143F10;
extern void *(*D_80143FA8)(s32, s32);
typedef struct { void * value; } __repair_field_0;
void func_800A2714_ovl_01(void *arg0)
{
  s32 temp_s0;
  u16 temp_v0_2;
  u32 temp_hi;
  u32 var_a1;
  u32 var_a1_2;
  void *temp_v0;
  void *temp_v1;
  void *var_a0;
  void *var_a2;
  void *var_a2_2;
  void *var_a3;
  if (D_80143F10 != NULL)
  {
    temp_v0_2 = (((((*((u16 *) (((char *) arg0) + 0))) * D_80143EA4) / 1000) / 192) * 0xC0) + 0xC0;
    temp_v0 = D_80143FA8(0x48, 0);
    temp_s0 = temp_v0_2 * 2;
    ((__repair_field_0 *)temp_v0)->value = (void *) D_80143F10;
    do { func_80006650(D_80143F10, temp_s0); } while (0);
    func_8000EFA0(((__repair_field_0 *)temp_v0)->value, temp_s0);
    *((s32 *) (((char *) temp_v0) + 4)) = temp_v0_2;
    *((s16 *) (((char *) temp_v0) + 0xA)) = (s16) ((*((u8 *) (((char *) arg0) + 0x1B))) << 8);
    *((s16 *) (((char *) temp_v0) + 8)) = (s16) (*((u8 *) (((char *) arg0) + 0x1A)));
    var_a1 = 0;
    if ((*((u8 *) (((char *) arg0) + 0x1A))) != 0)
    {
      var_a3 = temp_v0;
      var_a2 = arg0;
      var_a0 = temp_v0;
      do
      {
        temp_hi = MULTU_HI(D_80143EA4 * (*((u16 *) (((char *) var_a2) + 2))), 0x10624DD3);
        var_a2 += 2;
        temp_v1 = arg0 + var_a1;
        do
        {
          var_a1 += 1;
        }
        while (0);
        *((s32 *) (((char *) var_a0) + 0xC)) = (s32) (((temp_hi >> 6) + 3) & 0xFFFC);
        var_a0 += 4;
        *((s16 *) (((char *) var_a3) + 0x2C)) = (s16) ((*((u8 *) (((char *) temp_v1) + 0x12))) << 8);
        var_a3 += 2;
      }
      while (var_a1 < ((u8) (*((u8 *) (((char *) arg0) + 0x1A)))));
    }
    if ((*((u8 *) (((char *) arg0) + 0x1C))) == 1)
    {
      var_a1_2 = 0;
      temp_v1 = arg0;
      var_a2_2 = temp_v0;
      do
      {
        temp_v0_2 = *((u16 *) (((char *) temp_v1) + 0x1E));
        temp_v1 += 2;/*__repair_loop_weight*/do {
        var_a1_2 += 1;} while (0);
        *((u16 *) (((char *) var_a2_2) + 0x40)) = temp_v0_2;
        var_a2_2 += 2;
      }
      while (var_a1_2 < 4U);
    }
    else
    {
      *((s16 *) (((char *) temp_v0) + 0x40)) = 0;
      *((s16 *) (((char *) temp_v0) + 0x42)) = 0;
      *((s16 *) (((char *) temp_v0) + 0x44)) = 0;
      *((s16 *) (((char *) temp_v0) + 0x46)) = 0x7FFF;
    }
    func_8000EFA0(temp_v0, 0x48);
    func_800A5618_ovl_01();
    D_80143F0C = 0;
    D_80143F08 = temp_v0;
    func_800A5660_ovl_01();
  }
}

