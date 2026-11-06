static inline static u16 __repair_inline(u16 a)
{
  return a;
}

s32 func_8009F850_overlay_001();
s32 func_800A5618_overlay_001();
s32 func_800A5660_overlay_001();
extern u8 D_801362B0_ovl_01;
extern s16 D_80147F70;
extern void *D_80147F80;
s32 func_800A8B68_ovl_01(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
  s32 temp_a3;
  
  s32 var_v1;
  char *var_s0;
  u16 var_a0;
  u16 __repair_result_var_a0;
  void **var_a2;
  void *temp_a1;
  void *temp_s1;
  union { void * pointer; s32 value; } __repair_phase_storage;
  void *new_var;
  if (D_801362B0_ovl_01 != 0)
  {
    var_v1 = 0;
    if (D_80147F70 > 0)
    {
      temp_a3 = arg1 & 0xFFFF;
      var_a2 = &D_80147F80;
      loop_3:
      temp_a1 = *var_a2;

      if ((*((u16 *) (((char *) temp_a1) + 4))) == (arg0 & 0xFFFF))
      {
        if ((*((u16 *) (((char *) temp_a1) + 6))) == 0)
        {
          var_s0 = temp_a1 + ((*((s32 *) (((char *) temp_a1) + 0x24))) + 8);
          __repair_result_var_a0 = __repair_inline(*((u16 *) var_s0));
          new_var = temp_a1 + ((*((s32 *) (((char *) temp_a1) + 0x1C))) + 8);
          temp_s1 = temp_a1 + ((*((s32 *) (((char *) temp_a1) + 0x20))) + 8);
          __repair_phase_storage.pointer = new_var;
          if (__repair_result_var_a0 != 0xFFFF)
          {
            loop_6:
            if (__repair_result_var_a0 != temp_a3)
            {
              var_s0 += 0x84;
              var_a0 = *((u16 *) var_s0);
              if ((*((u16 *) var_s0)) == 0xFFFF)
              {
                return -1;
              }
              goto loop_6;
            }

            do
            {
              func_800A5618_overlay_001(*((u16 *) var_s0), temp_a1, var_a2, temp_a3);
            }
            while (0);
            __repair_phase_storage.value = func_8009F850_overlay_001(__repair_phase_storage.pointer, temp_s1, var_s0, arg2, arg3);
            func_800A5660_overlay_001();
            return __repair_phase_storage.value;
          }
          goto block_13;
        }
        return -1;
      }
      var_v1 += 1;
      var_a2 += 4;
      if (var_v1 >= D_80147F70)
      {
        goto block_13;
      }
      goto loop_3;
    }
  }
  block_13:
  return -1;

}

