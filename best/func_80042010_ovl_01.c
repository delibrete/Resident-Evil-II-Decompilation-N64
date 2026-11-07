static __inline__ s16 __repair_inline(s16 a) { return a; }
void *func_80042010_ovl_01(void *arg0, void *arg1)
{
  s16 temp_a2;
  s16 temp_a3;
  s16 temp_at;
  s16 temp_t1;
  s16 temp_t1_2;
  s16 temp_t1_3;
  s16 temp_t2;
  s16 temp_t2_2;
  s16 temp_t2_3;
  s16 temp_t3;
  s16 temp_t3_2;
  s16 temp_t3_3;
  s16 temp_t4;
  s16 temp_t5;
  s16 temp_t6;
  s16 temp_t7;
  s16 temp_v0;
  s16 temp_v1;
  temp_t4 = *((s16 *) (((char *) arg0) + 0));
  temp_t1 = *((s16 *) (((char *) arg1) + 0));
  temp_t5 = *((s16 *) (((char *) arg0) + 2));
  temp_t2 = __repair_inline(*((s16 *) (((char *) arg1) + 6)));
  temp_t6 = *((s16 *) (((char *) arg0) + 4));
  temp_t3 = *((s16 *) (((char *) arg1) + 0xC));
  temp_t7 = *((s16 *) (((char *) arg0) + 6));
  temp_a2 = *((s16 *) (((char *) arg0) + 8));
  temp_a3 = *((s16 *) (((char *) arg0) + 0xA));
  *((s16 *) (((char *) arg0) + 0)) = (s16) (((s32) (((temp_t5 * temp_t2) + (temp_t4 * temp_t1)) + (temp_t6 * temp_t3))) >> 0xC);
  temp_v0 = *((s16 *) (((char *) arg0) + 0xC));
  temp_v1 = *((s16 *) (((char *) arg0) + 0xE));
  temp_at = *((s16 *) (((char *) arg0) + 0x10));
  *((s16 *) (((char *) arg0) + 6)) = (s16) (((s32) (((temp_a2 * temp_t2) + (temp_t7 * temp_t1)) + (temp_a3 * temp_t3))) >> 0xC);
  temp_t1_2 = *((s16 *) (((char *) arg1) + 2));
  temp_t2_2 = *((s16 *) (((char *) arg1) + 8));
  *((s16 *) (((char *) arg0) + 0xC)) = (s16) (((s32) (((temp_v1 * temp_t2) + (temp_v0 * temp_t1)) + (temp_at * temp_t3))) >> 0xC);
  temp_t3_2 = *((s16 *) (((char *) arg1) + 0xE));
  *((s16 *) (((char *) arg0) + 2)) = (s16) (((s32) (((temp_t5 * temp_t2_2) + (temp_t4 * temp_t1_2)) + (temp_t6 * temp_t3_2))) >> 0xC);
  *((s16 *) (((char *) arg0) + 8)) = (s16) (((s32) (((temp_a2 * temp_t2_2) + (temp_t7 * temp_t1_2)) + (temp_a3 * temp_t3_2))) >> 0xC);
  temp_t1_3 = *((s16 *) (((char *) arg1) + 4));
  temp_t2_3 = *((s16 *) (((char *) arg1) + 0xA));
  temp_t3_3 = *((s16 *) (((char *) arg1) + 0x10));
  *((s16 *) (((char *) arg0) + 0xE)) = (s16) (((s32) (((temp_v1 * temp_t2_2) + (temp_v0 * temp_t1_2)) + (temp_at * temp_t3_2))) >> 0xC);
  return arg0;
  *((s16 *) (((char *) arg0) + 4)) = (s16) (((s32) (((temp_t5 * temp_t2_3) + (temp_t4 * temp_t1_3)) + (temp_t6 * temp_t3_3))) >> 0xC);
  *((s16 *) (((char *) arg0) + 0xA)) = (s16) (((s32) (((temp_a2 * temp_t2_3) + (temp_t7 * temp_t1_3)) + (temp_a3 * temp_t3_3))) >> 0xC);
  *((s16 *) (((char *) arg0) + 0x10)) = (s16) (((s32) (((temp_v1 * temp_t2_3) + (temp_v0 * temp_t1_3)) + (temp_at * temp_t3_3))) >> 0xC);
}

