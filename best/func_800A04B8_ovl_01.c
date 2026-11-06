s32 func_800AC5B4_ovl_01(s32, u8, u8, s32);
extern s32 D_80143BF0;
extern void *D_80143BF8;
void func_800A04B8_ovl_01(void)
{
  s32 var_a2;
  s32 var_a3;
  unsigned int new_var3;
  s32 var_a3_2;
  s32 var_s1;
  s32 var_s2;
  s32 var_s4;
  s32 var_v0;
  u16 temp_v1_3;
  u32 temp_a0_2;
  u8 temp_v1;
  u8 temp_v1_2;
  void *temp_a0;
  void *temp_a1;
  union 
  {
    void *pointer;
    unsigned int value;
  } __repair_phase_storage;
  void *new_var;
  void *temp_v0_2;
  char *new_var2;
  void *temp_v0_3;
  void *temp_v0_4;
  void *var_v0_2;
  var_s4 = 0;
  var_s2 = 0;
  do
  {
    if ((*((s32 *) (((char *) (D_80143BF8 + var_s2)) + 0x578))) != 0)
    {
      var_s1 = 0;
      do
      {
        temp_a0 = D_80143BF8 + var_s2;
        __repair_phase_storage.pointer = *((void **) (((char *) temp_a0) + 0x578));
        temp_v1 = *((u8 *) (((char *) __repair_phase_storage.pointer) + 0));
        __repair_phase_storage.value = (u8) (*((u8 *) (((char *) __repair_phase_storage.pointer) + 1)));
        new_var3 = __repair_phase_storage.value;
        if ((temp_v1 == 0x80) && (((u8) new_var3) == 0))
        {
          *((void **) (((char *) temp_a0) + 0x578)) = NULL;
          goto block_14;
        }
        if (temp_v1 & 0x80)
        {
          var_a2 = ((u8) new_var3) | ((temp_v1 & 0x7F) << 8);
          var_a3 = 2;
        }
        else
        {
          var_a2 = temp_v1 & 0xFF;
          var_a3 = 1;
        }
        temp_a1 = D_80143BF8 + var_s2;
        temp_a0_2 = var_a2 + (*((u32 *) (((char *) temp_a1) + 0x584)));
        if (((u32) ((*((s32 *) (((char *) temp_a1) + 0x56C))) + (*((s32 *) (((char *) D_80143BF8) + 0x120))))) >= temp_a0_2)
        {
          new_var2 = (char *) temp_a1;
          *((u32 *) (new_var2 + 0x584)) = temp_a0_2;
          temp_v0_2 = (*((void **) (new_var2 + 0x578))) + var_a3;
          *((void **) (new_var2 + 0x578)) = temp_v0_2;
          temp_v1_2 = *((u8 *) (((char *) temp_v0_2) + 0));
          if (temp_v1_2 & 0x80)
          {
            var_a3_2 = (s32) (((*((u8 *) (((char *) temp_v0_2) + 1))) | ((temp_v1_2 & 0x7F) << 8)) << 0x11);
            var_a3_2 = var_a3_2 >> 0x11;
            var_v0_2 = temp_v0_2 + 2;
          }
          else
          {
            var_a3_2 = ((s32) (temp_v1_2 << 0x19)) >> 0x19;
            var_v0_2 = temp_v0_2 + 1;
          }
          *((void **) (((char *) temp_a1) + 0x578)) = var_v0_2;
          new_var = D_80143BF8 + var_s2;
          temp_v0_3 = new_var;
          temp_v1_3 = (*((u16 *) (((char *) temp_v0_3) + 0x580))) + var_a3_2;
          *((u16 *) (((char *) temp_v0_3) + 0x580)) = temp_v1_3;
          func_800AC5B4_ovl_01(0x80, *((u8 *) (((char *) temp_v0_3) + 0x58C)), *((u8 *) (((char *) (&D_80143BF0)) + 3)), (temp_v1_3 >> 7) & 0xFF);
          temp_v0_4 = D_80143BF8 + var_s2;
          func_800AC5B4_ovl_01(0x81, *((u8 *) (((char *) temp_v0_4) + 0x58C)), *((u8 *) (((char *) (&D_80143BF0)) + 3)), (*((u8 *) (((char *) temp_v0_4) + 0x581))) & 0x7F);
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

