inline static u16 __repair_inline(u16 a)
{
  return a;
}

s32 func_8009F850_overlay_001(void *, void *, u16 *, s32, s32);
s32 func_800A5618_overlay_001(void *, void *, s32, void **);
s32 func_800A5660_overlay_001();
extern u8 D_801362B0_overlay_001;
extern s16 D_80147F70;
extern void *D_80147F80;
s32 func_800A8C94_ovl_01(s32 arg0, s32 arg1, s32 arg2, s32 arg3, u8 arg4)
{
  s32 var_a2;
  s32 var_s0;
  u16 *var_s0_2;
  u16 var_a0;
  u16 __repair_result_var_a0;
  void **var_a3;
  void *temp_a1;
  void *temp_s1;
  void *temp_s2;
  if (D_801362B0_overlay_001 != 0)
  {
    var_a2 = 0;
    if (D_80147F70 > 0)
    {
      var_a3 = &D_80147F80;
      loop_3:
      temp_a1 = *var_a3;

      if ((*((u16 *) (((char *) temp_a1) + 4))) == (arg0 & 0xFFFF))
      {
        if ((*((u16 *) (((char *) temp_a1) + 6))) == 0)
        {
          var_s0_2 = temp_a1 + ((*((s32 *) (((char *) temp_a1) + 0x24))) + 8);
          __repair_result_var_a0 = __repair_inline(*var_s0_2);
          temp_s2 = temp_a1 + ((*((s32 *) (((char *) temp_a1) + 0x20))) + 8);
          temp_s1 = temp_a1 + ((*((s32 *) (((char *) temp_a1) + 0x1C))) + 8);
          if (__repair_result_var_a0 != 0xFFFF)
          {
            loop_6:
            if (__repair_result_var_a0 != arg1)
            {
              var_s0_2 += 0x84;
              var_a0 = *var_s0_2;
              if (var_a0 == 0xFFFF)
              {
                return -1;
              }
              goto loop_6;
            }

            if (arg4 & 0xFF)
            {
              var_s0 = func_8009F850_overlay_001(temp_s1, temp_s2, var_s0_2, arg2, arg3);
            }
            else
            {
              func_800A5618_overlay_001(temp_s1, temp_a1, var_a2, var_a3);
              var_s0 = func_8009F850_overlay_001(temp_s1, temp_s2, var_s0_2, arg2, arg3);
              func_800A5660_overlay_001();
            }
            return var_s0;
          }
          goto block_16;
        }
        return -1;
      }
      var_a2 += 1;
      var_a3 += 4;
      if (var_a2 >= D_80147F70)
      {
        goto block_16;
      }
      goto loop_3;
    }
  }
  block_16:
  return -1;

}

