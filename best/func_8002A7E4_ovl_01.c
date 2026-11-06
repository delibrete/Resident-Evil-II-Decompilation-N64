typedef struct 
{
  u8 pad[0x3C];
  s32 **a;
  s32 **b;
} Data;
void func_8002A7E4_ovl_01(void *arg0)
{
  int __repair_literal;
  void *base = arg0;
  Data *temp_s0;
  s32 temp_v1;
  s32 count;
  s32 var_t6;
  u8 *var_t5;
  s32 *temp_t0;
  s32 *temp_t2;
  s32 *var_t1;
  s32 *var_t3;
  s32 temp_a0;
  s32 temp_a0_2;
  s32 temp_a2;
  s32 temp_a2_2;
  s32 temp_lo;
  
  s32 temp_v1_3;
  s32 temp_v1_4;
  s32 temp_v1_5;
  s32 var_a3;
  temp_s0 = *((Data **) (((u8 *) base) + 0x168));
  temp_v1 = *((s32 *) (((u8 *) base) + 0x10C));
  count = *((s32 *) (((u8 *) base) + 0x20));
  var_t5 = (char *) (*((u8 **) (((u8 *) base) + 0xB0)));
  var_t5 += (s32) 0x24;
  var_t6 = 0;
  __repair_literal = 0;
  if (count > __repair_literal)
  {
    do
    {
      temp_lo = ((*((s32 *) (var_t5 - 0x18))) * (*((s32 *) var_t5))) / (*((s32 *) (((u8 *) base) + 0x10C)));
      temp_a0 = var_t6 * 4;
      temp_t2 = *((s32 **) (((u8 *) temp_s0->a) - (-temp_a0)));
      temp_t0 = *((s32 **) (temp_a0 + ((int) temp_s0->b)));
      var_a3 = 0;
      if (temp_lo > 0)
      {
        var_t3 = temp_t0;
        var_t1 = temp_t2;
        do
        {
          temp_a0 = var_a3 - temp_lo;
          temp_v1_3 = (temp_lo * (temp_v1 + 1)) + var_a3;
          temp_a2 = (temp_lo * (temp_v1 + 2)) + var_a3;
          do
          {
            var_a3++;
          }
          while (0);
          temp_a0_2 = temp_a0 * 4;
          ;
          *((s32 *) (temp_a0_2 + ((int) temp_t2))) = *((s32 *) ((temp_v1_3 * 4) + ((int) temp_t2)));
          ;
          *((s32 *) (temp_a0_2 + ((int) temp_t0))) = *((s32 *) (((u8 *) temp_t0) + (temp_v1_3 * 4)));
          temp_v1_5 = *var_t1;
          var_t1++;
          *((s32 *) (((u8 *) temp_t2) + (temp_a2 * 4))) = temp_v1_5;
          *((s32 *) (((u8 *) temp_t0) + (temp_a2 * 4))) = *var_t3;
          var_t3++;
        }
        while (var_a3 < temp_lo);
      }
      var_t6++;
      var_t5 = var_t5 + 0x50;
    }
    while (var_t6 < count);
  }
}

