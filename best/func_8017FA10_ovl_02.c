static __inline__ s16 __repair_inline(s16 a) { return a; }
void func_8017FA10_ovl_02(void *arg0)
{
  s16 temp_a2;
  s16 temp_a3;
  s16 temp_t2;
  s16 temp_t3;
  s16 temp_t4;
  s16 temp_t5;
  s16 temp_v0;
  s32 temp_a1_2;
  s32 temp_a2_2;
  s32 temp_a2_3;
  s32 temp_a3_2;
  s32 temp_a3_3;
  s32 temp_t1;
  s32 temp_t2_2;
  s32 temp_t3_2;
  s32 temp_t4_2;
  s32 temp_t5_2;
  s32 temp_t6;
  s32 temp_v1;
  temp_t3 = __repair_inline(*((s16 *) (((char *) arg0) + 0xC)));
  temp_t5 = *((s16 *) (((char *) arg0) + 4));
  temp_a2 = *((s16 *) (((char *) arg0) + 2));
  temp_a3 = *((s16 *) (((char *) arg0) + 0xE));
  temp_t2 = *((s16 *) (((char *) arg0) + 0xA));
  temp_t4 = *((s16 *) (((char *) arg0) + 6));
  temp_t6 = (*((s16 *) (((char *) arg0) + 8))) << 0xB;
  if (((((((temp_t6 | temp_t3) | temp_t5) | temp_a2) | temp_a3) | temp_t2) | temp_t4) == 0)
  {
    temp_v0 = (*((u16 *) (((char *) arg0) + 0))) * 8;
    *((s16 *) (((char *) arg0) + 0xE)) = temp_v0;
    *((s16 *) (((char *) arg0) + 0xC)) = temp_v0;
    *((s16 *) (((char *) arg0) + 0xA)) = temp_v0;
    *((s16 *) (((char *) arg0) + 8)) = temp_v0;
    *((s16 *) (((char *) arg0) + 6)) = temp_v0;
    *((s16 *) (((char *) arg0) + 4)) = temp_v0;
    *((s16 *) (((char *) arg0) + 2)) = temp_v0;
    *((u16 *) (((char *) arg0) + 0)) = (u16) temp_v0;
    return;
  }
  temp_t1 = (temp_a2 + temp_a3) * 0x235;
  temp_a2_2 = temp_t1 + (temp_a2 * 0x8E4);
  temp_a3_2 = temp_t1 - (temp_a3 * 0xD4E);
  temp_v1 = (temp_t2 + temp_t4) * 0x968;
  temp_t2_2 = temp_v1 - (temp_t2 * 0x31F);
  temp_t4_2 = temp_v1 - (temp_t4 * 0xFB1);
  temp_v1 = ((temp_t5 = (s16) (*((u16 *) (((char *) arg0) + 0)))) << 0xB) + 0x80;{ s32 __repair_value; __repair_value = temp_v1 + temp_t6; temp_t1 = __repair_value; }
  temp_a1_2 = temp_v1 - temp_t6;
  temp_t6 = (temp_t5 + temp_t3) * 0x454;
  temp_t3_2 = temp_t6 - (temp_t3 * 0xEC8);
  temp_t5_2 = temp_t6 + (temp_t5 * 0x620);
  temp_t6 = temp_a2_2 + temp_t2_2;
  temp_a2_3 = temp_a2_2 - temp_t2_2;
  temp_t2_2 = temp_a3_2 + temp_t4_2;
  temp_a3_3 = temp_a3_2 - temp_t4_2;
  temp_t4_2 = temp_t1 + temp_t5_2;
  temp_a3_2 = temp_t1 - temp_t5_2;
  temp_a2 = 0x80;
  temp_t5_2 = temp_a1_2 + temp_t3_2;
  temp_v1 = temp_a1_2 - temp_t3_2;
  temp_t3_2 = ((s32) (((temp_a2_3 + temp_a3_3) * 0xB5) + temp_a2)) >> 8;
  temp_a2_2 = ((s32) (((temp_a2_3 - temp_a3_3) * 0xB5) + temp_a2)) >> 8;
  *((u16 *) (((char *) arg0) + 0)) = (u16) (((s32) (temp_t4_2 + temp_t6)) >> 8);
  *((s16 *) (((char *) arg0) + 2)) = (s16) (((s32) (temp_t5_2 + temp_t3_2)) >> 8);
  *((s16 *) (((char *) arg0) + 4)) = (s16) (((s32) (temp_v1 + temp_a2_2)) >> 8);
  *((s16 *) (((char *) arg0) + 6)) = (s16) (((s32) (temp_a3_2 + temp_t2_2)) >> 8);
  *((s16 *) (((char *) arg0) + 8)) = (s16) (((s32) (temp_a3_2 - temp_t2_2)) >> 8);
  *((s16 *) (((char *) arg0) + 0xC)) = (s16) (((s32) (temp_t5_2 - temp_t3_2)) >> 8);
  *((s16 *) (((char *) arg0) + 0xA)) = (s16) (((s32) (temp_v1 - temp_a2_2)) >> 8);
  *((s16 *) (((char *) arg0) + 0xE)) = (s16) (((s32) (temp_t4_2 - temp_t6)) >> 8);
}

