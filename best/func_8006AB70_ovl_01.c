extern s32 D_800C7650_ovl_01;
extern s32 D_80139DE4;
extern s32 func_80112698_ovl_01;
s32 func_8006AB70_ovl_01(void *arg0, void *arg1, s32 arg2, s32 arg3)
{
  int *__repair_home3 = &arg3;
  s32 sp0;
  s16 temp_a2;
  s16 temp_t0;
  s32 *new_var3;
  s16 temp_t0_2;
  s16 temp_t0_3;
  s32 temp_a1;
  s32 temp_a1_2;
  s32 temp_a1_3;
  s32 temp_a2_2;
  s32 temp_a2_3;
  s32 temp_lo;
  s32 temp_lo_2;
  s32 temp_lo_3;
  s32 temp_lo_4;
  s32 temp_lo_5;
  s32 temp_lo_6;
  s32 temp_s2;
  s32 temp_s3;
  s32 temp_s3_2;
  s32 temp_t1;
  s32 temp_t1_2;
  s32 temp_t1_3;
  s32 temp_t3;
  s32 temp_t3_2;
  s32 temp_t3_3;
  s32 temp_t4;
  s32 temp_t4_2;
  s32 temp_t6;
  s32 temp_t6_2;
  s32 temp_t6_3;
  char *new_var;
  s32 temp_t8_2;
  s32 temp_t8_3;
  s32 temp_t9;
  s32 temp_t9_2;
  s32 temp_t9_3;
  s32 var_t5;
  s32 var_v0;
  s32 var_v1;
  s32 __repair_result_var_v1;
  u16 temp_t5;
  u16 temp_t7_2;
  u16 temp_t7_3;
  u16 temp_t8;
  u16 temp_v1;
  u16 temp_v1_2;
  union 
  {
    void *pointer;
    s32 value;
  } __repair_phase_storage;
  void *var_t2;
  volatile short new_var2;
  var_t2 = *((void **) (((char *) (*((void **) (((char *) (&D_800C7650_ovl_01)) + 0x1827C)))) + 0x20));
  __repair_phase_storage.pointer = var_t2 + ((*((s32 *) (((char *) var_t2) + 4))) * 0x10);
  loop_1:
  var_t2 += 0x10;

  loop_2:
  var_v0 = 0;

  if (var_t2 != __repair_phase_storage.pointer)
  {
    temp_v1 = *((u16 *) (((char *) var_t2) + 8));
    if ((temp_v1 & arg2) && ((*((temp_v1 & 0xF) + (&func_80112698_ovl_01))) == 0))
    {
      D_80139DE4 = 3;
      if ((((u32) ((*((s32 *) (((char *) arg0) + 0))) - (*((s16 *) (((char *) var_t2) + 0))))) < ((u16) (*((u16 *) (((char *) var_t2) + 4))))) && (((u32) ((*((s32 *) (((char *) arg0) + 8))) - (*((s16 *) (((char *) var_t2) + 2))))) < ((u16) (*((u16 *) (((char *) var_t2) + 6))))))
      {
        D_80139DE4 = 2;
        goto block_13;
      }
      if ((((u32) ((*((s32 *) (((char *) arg1) + 0))) - (*((s16 *) (((char *) var_t2) + 0))))) < ((u16) (*((u16 *) (((char *) var_t2) + 4))))) && (((u32) ((*((s32 *) (((char *) arg1) + 8))) - (*((s16 *) (((char *) var_t2) + 2))))) < ((u16) (*((u16 *) (((char *) var_t2) + 6))))))
      {
        D_80139DE4 ^= 1;
        goto block_13;
      }
      temp_a2 = *((s16 *) (((char *) var_t2) + 2));
      temp_t3 = *((s32 *) (((char *) arg0) + 8));
      temp_v1 = *((u16 *) (((char *) var_t2) + 4));
      temp_t0 = *((s16 *) (((char *) var_t2) + 0));
      temp_t1 = *((s32 *) (((char *) arg0) + 0));
      temp_t5 = *((u16 *) (((char *) var_t2) + 6));
      temp_lo = temp_t5 * (temp_t1 - temp_t0);
      sp0 = temp_lo;
      new_var3 = (s32 *) (((char *) arg1) + 0);
      temp_a1 = *((s32 *) (((char *) arg1) + 8));
      temp_t9 = *new_var3;
      __repair_phase_storage.value = temp_t1 - temp_t9;
      temp_s3_2 = temp_t3 - temp_a1;
      temp_t4 = temp_t5 + temp_a2;
      temp_s2 = temp_t0 + temp_v1;
      temp_lo_2 = temp_s3_2 * (temp_s2 - temp_t1);
      sp0 = temp_lo_2;
      if ((((((temp_v1 * (temp_t3 - temp_a2)) - temp_lo) ^ ((temp_v1 * (temp_a1 - temp_a2)) - (temp_t5 * (temp_t9 - temp_t0)))) & (((__repair_phase_storage.value * (temp_a2 - temp_t3)) - (temp_s3_2 * (temp_t0 - temp_t1))) ^ ((__repair_phase_storage.value * (temp_t4 - temp_t3)) - temp_lo_2))) < 0) || (((((temp_v1 * (temp_t4 - temp_t3)) - (temp_t5 * (temp_t1 - temp_t0))) ^ ((temp_v1 * (temp_t4 - temp_a1)) - (temp_t5 * (temp_t9 - temp_t0)))) & (((__repair_phase_storage.value * (temp_t4 - temp_t3)) - (temp_s3_2 * (temp_t0 - temp_t1))) ^ ((__repair_phase_storage.value * (temp_a2 - temp_t3)) - (temp_s3_2 * (temp_s2 - temp_t1))))) < 0))
      {
        block_13:
        var_v0 = 1;

        if ((*__repair_home3) != 0)
        {
          temp_t9 = *((s32 *) (((char *) var_t2) + 0xC));
          var_t5 = 0;
          if (!(temp_t9 & 1))
          {
            do
            {
              var_v1 = var_v1 >> 1;
              var_t5 -= 0x708;
            }
            while (!(var_v1 & 1));
          }
          temp_v1_2 = *((u16 *) (((char *) var_t2) + 0xA));
          temp_a2_3 = 0x64;
          temp_t4_2 = (-((temp_v1_2 >> 0xB) * temp_a2_3)) - (((temp_v1_2 >> 6) & 0x1F) * 0x708);
          if (((((u32) ((*((s32 *) (((char *) arg0) + 4))) - temp_t4_2)) < ((u32) (var_t5 - temp_t4_2))) && (((u32) ((*((s32 *) (((char *) arg0) + 8))) - (*((s16 *) (((char *) var_t2) + 2))))) < ((u16) (*((u16 *) (((char *) var_t2) + 6)))))) || ((((u32) ((*((s32 *) (((char *) arg1) + 4))) - temp_t4_2)) < ((u32) (var_t5 - temp_t4_2))) && (((u32) ((*((s32 *) (((char *) arg1) + 8))) - (*((s16 *) (((char *) var_t2) + 2))))) < ((u16) (*((u16 *) (((char *) var_t2) + 6)))))))
          {
            D_80139DE4 ^= 2;
            goto block_23;
          }
          temp_t3_2 = *((s32 *) (((char *) arg0) + 4));
          temp_t7_2 = *((u16 *) (((char *) var_t2) + 6));
          temp_t0_2 = *((s16 *) (((char *) var_t2) + 2));
          temp_t1_2 = *((s32 *) (((char *) arg0) + 8));
          temp_t9_2 = var_t5 - temp_t4_2;
          temp_lo_3 = temp_t9_2 * (temp_t1_2 - temp_t0_2);
          sp0 = temp_lo_3;
          temp_a2_2 = *((s32 *) (((char *) arg1) + 4));
          temp_a1_2 = *((s32 *) (((char *) arg1) + 8));
          temp_t8_2 = temp_t1_2 - temp_a1_2;
          temp_t6_2 = temp_t3_2 - temp_a2_2;
          temp_s3 = temp_t0_2 + temp_t7_2;
          temp_a2_3 = temp_a2_2;
          temp_lo_4 = temp_t6_2 * (temp_s3 - temp_t1_2);
          sp0 = temp_lo_4;
          if ((((((temp_t7_2 * (temp_t3_2 - temp_t4_2)) - temp_lo_3) ^ ((temp_t7_2 * (temp_a2_3 - temp_t4_2)) - (temp_t9_2 * (temp_a1_2 - temp_t0_2)))) & (((temp_t8_2 * (temp_t4_2 - temp_t3_2)) - (temp_t6_2 * (temp_t0_2 - temp_t1_2))) ^ ((temp_t8_2 * (var_t5 - temp_t3_2)) - temp_lo_4))) < 0) || (((((temp_t7_2 * (var_t5 - temp_t3_2)) - (temp_t9_2 * (temp_t1_2 - temp_t0_2))) ^ ((temp_t7_2 * (var_t5 - temp_a2_3)) - (temp_t9_2 * (temp_a1_2 - temp_t0_2)))) & (((temp_t8_2 * (var_t5 - temp_t3_2)) - (temp_t6_2 * (temp_t0_2 - temp_t1_2))) ^ ((temp_t8_2 * (temp_t4_2 - temp_t3_2)) - (temp_t6_2 * (temp_s3 - temp_t1_2))))) < 0))
          {
            block_23:
            if (((((u32) ((*((s32 *) (((char *) arg0) + 4))) - temp_t4_2)) < ((u32) (var_t5 - temp_t4_2))) && (((u32) ((*((s32 *) (((char *) arg0) + 0))) - (*((s16 *) (((char *) var_t2) + 0))))) < ((u16) (*((u16 *) (((char *) var_t2) + 4)))))) || ((((u32) ((*((s32 *) (((char *) arg1) + 4))) - temp_t4_2)) < ((u32) (var_t5 - temp_t4_2))) && (((u32) ((*((s32 *) (((char *) arg1) + 0))) - (*((s16 *) (((char *) var_t2) + 0))))) < ((u16) (*((u16 *) (((char *) var_t2) + 4)))))))
            {
              if (D_80139DE4 != 0)
              {
                return 1;
              }
              goto loop_1;
            }

            temp_t3_3 = *((s32 *) (((char *) arg0) + 4));
            temp_t7_3 = *((u16 *) ((new_var = (char *) var_t2) + 4));
            temp_t0_3 = *((s16 *) (new_var + 0));
            temp_t1_3 = *((s32 *) (((char *) arg0) + 0));
            temp_t9_3 = var_t5 - temp_t4_2;
            temp_lo_5 = temp_t9_3 * (temp_t1_3 - temp_t0_3);
            sp0 = temp_lo_5;
            temp_a2_3 = *((s32 *) (((char *) arg1) + 4));
            temp_a1_3 = *new_var3;
            temp_t8_3 = temp_t1_3 - temp_a1_3;
            temp_t6_3 = temp_t3_3 - temp_a2_3;
            temp_s3_2 = temp_t0_3 + temp_t7_3;
            temp_lo_6 = temp_t6_3 * (temp_s3_2 - temp_t1_3);
            new_var2 = temp_a1_3 - temp_t0_3;
            sp0 = temp_lo_6;
            if ((((((temp_t7_3 * (temp_t3_3 - temp_t4_2)) - temp_lo_5) ^ ((temp_t7_3 * (temp_a2_3 - temp_t4_2)) - (temp_t9_3 * (temp_a1_3 - temp_t0_3)))) & (((temp_t8_3 * (temp_t4_2 - temp_t3_3)) - (temp_t6_3 * (temp_t0_3 - temp_t1_3))) ^ ((temp_t8_3 * (var_t5 - temp_t3_3)) - temp_lo_6))) < 0) || ((var_t2 += 0x10, ((((temp_t7_3 * (var_t5 - temp_t3_3)) - (temp_t9_3 * (temp_t1_3 - temp_t0_3))) ^ ((temp_t7_3 * (var_t5 - temp_a2_3)) - (temp_t9_3 * new_var2))) & (((temp_t8_3 * (var_t5 - temp_t3_3)) - (temp_t6_3 * (temp_t0_3 - temp_t1_3))) ^ ((temp_t8_3 * (temp_t4_2 - temp_t3_3)) - (temp_t6_3 * (temp_s3_2 - temp_t1_3))))) < 0)))
            {
              var_v0 = 1;
              return var_v0;
            }
            goto loop_2;
          }
          goto loop_1;
        }
        return var_v0;
      }
      goto loop_1;
    }
    goto loop_1;
  }
  return var_v0;
}

