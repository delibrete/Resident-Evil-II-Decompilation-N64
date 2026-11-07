extern s32 D_800C7650_ovl_01;
extern s16 D_800E10DA_ovl_01;
extern s32 D_800E1898_ovl_01;
void func_8006D3B4_ovl_01(void)
{
  s32 *var_a0;
  s16 *var_a1;
  void *temp_v1;
  void *temp_v1_2;
  var_a1 = (char *) (&D_800E10DA_ovl_01);
  var_a1 += (s32) 0x2B6;
  D_800E10DA_ovl_01 = 0xFFFF;
  if ((*((s32 *) (((char *) (&D_800C7650_ovl_01)) + 0x1828C))) != var_a1)
  {
    do
    {
      temp_v1 = *var_a1;
      if ((*((s32 *) (((char *) temp_v1) + 0))) & 1)
      {
        *((s16 *) (((char *) temp_v1) + 0xA)) = 0xFFFF;
      }
      var_a1 += 4;
    }
    while (var_a1 != (*((s32 *) (((char *) (&D_800C7650_ovl_01)) + 0x1828C))));
  }
  var_a0 = &D_800E1898_ovl_01;
  temp_v1_2 = &D_800E1898_ovl_01;
  temp_v1_2 = ((*((u8 *) (((char *) (*((void **) (((char *) (&D_800C7650_ovl_01)) + 0x1827C)))) + 2))) * 0x368) + temp_v1_2;
  if (((u32) (&D_800E1898_ovl_01)) < ((u32) temp_v1_2))
  {
    do
    {
      if ((*((s32 *) (((char *) var_a0) + 0))) & 1)
      {
        *((s16 *) (((char *) var_a0) + 0xA)) = 0xFFFF;
      }
      var_a0 += 0x368;
    }
    while (((u32) var_a0) < ((u32) temp_v1_2));
  }
}

