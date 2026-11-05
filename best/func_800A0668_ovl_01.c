s32 func_800AC5B4_ovl_01(s32, u8, u8, s32);
extern s32 D_80143BF0;
extern void *D_80143BF8;
void func_800A0668_ovl_01(void)
{
  s16 var_a3;
  s32 var_a3_2;
  s32 var_s1;
  s32 var_s2;
  s32 var_s4;
  s32 var_v0;
  u16 temp_v1_3;
  u32 temp_a1_2;
  u8 temp_a1;
  u8 temp_v1;
  u8 temp_v1_2;
  void *temp_a0;
  void *temp_a2;
  void *temp_v0;
  void *temp_v0_3;
  void *temp_v0_4;
  void *var_v0_2;
  var_s4 = 0;
  var_s2 = 0;
  do
  {
    if ((*((s32 *) (((char *) (D_80143BF8 + var_s2)) + 0x57C))) != 0)
    {
      var_s1 = 0;
      do
      {
        temp_a0 = D_80143BF8 + var_s2;
        temp_v0 = *((void **) (((char *) temp_a0) + 0x57C));
        temp_v1 = *((u8 *) (((char *) temp_v0) + 0));
        temp_a1 = *((u8 *) (((char *) temp_v0) + 1));
        if ((temp_v1 == 0x80) && (temp_a1 == 0))
        {
          *((void **) (((char *) temp_a0) + 0x57C)) = NULL;
          goto block_14;
        }
        if (temp_v1 & 0x80)
        {
          var_a3 = temp_a1 | ((temp_v1 & 0x7F) << 8);
          var_a3_2 = 2;
        }
        else
        {
          var_a3 = temp_v1 & 0xFF;
          var_a3_2 = 1;
        }
        temp_a2 = D_80143BF8 + var_s2;
        temp_a1_2 = (*((u32 *) (((char *) temp_a2) + 0x588))) + var_a3;
        if (((u32) ((*((s32 *) (((char *) temp_a2) + 0x56C))) + (*((s32 *) (((char *) D_80143BF8) + 0x120))))) >= temp_a1_2)
        {
          *((u32 *) (((char *) temp_a2) + 0x588)) = temp_a1_2;
          temp_a0 = (*((void **) (((char *) temp_a2) + 0x57C)) = (*((void **) (((char *) temp_a2) + 0x57C))) + var_a3_2);
          temp_a1 = *((u8 *) (((char *) temp_a0) + 0));
          if (temp_a1 & 0x80)
          {
            var_a3_2 = ((s32) (((*((u8 *) (((char *) temp_a0) + 1))) | ((temp_a1 & 0x7F) << 8)) << 0x11)) >> 0x11;
            var_v0_2 = temp_a0 + 2;
          }
          else
          {
            var_a3_2 = (s32) ((s8) temp_a1);
            var_v0_2 = temp_a0 + 1;
          }
          *((void **) (((char *) temp_a2) + 0x57C)) = var_v0_2;
          temp_v0_3 = D_80143BF8 + var_s2;
          temp_v1_3 = (*((u16 *) (((char *) temp_v0_3) + 0x582))) + var_a3_2;
          *((u16 *) (((char *) temp_v0_3) + 0x582)) = temp_v1_3;
          func_800AC5B4_ovl_01(1, *((u8 *) (((char *) temp_v0_3) + 0x58C)), *((u8 *) (((char *) (&D_80143BF0)) + 3)), (temp_v1_3 >> 7) & 0xFF);
          temp_v0_4 = D_80143BF8 + var_s2;
          func_800AC5B4_ovl_01(0x21, *((u8 *) (((char *) temp_v0_4) + 0x58C)), *((u8 *) (((char *) (&D_80143BF0)) + 3)), (*((u8 *) (((char *) temp_v0_4) + 0x583))) & 0x7F);
          var_v0 = var_s1 & 0xFF;
        }
        else
        {
          block_14:
          var_s1 = 1;

          var_v0 = 1 & 0xFF;
        }
      }
      while (var_v0 == 0);
    }
    var_s4 += 1;
    var_s2 += 0x28;
  }
  while (var_s4 < 0x40);
}

