static inline static u8 __repair_inline(u8 a)
{
  return a;
}

extern s32 func_80033634_ovl_01(void);
extern s32 func_800377B0_ovl_01(s32, s32, s32, void *);
extern s32 D_80166684_ovl_22;
extern s32 *D_80166888_ovl_22;
typedef struct 
{
  unsigned char pad_0[8];
  unsigned short field_8;
  unsigned short field_A;
} __repair_record_p;
static inline int inline_fn()
{
  return 1;
}

void func_8016293C_ovl_22(void *arg0)
{
  s32 temp_s0;
  s32 temp_s3;
  u8 n;
  s32 *p;
  temp_s3 = *((s32 *) (((u8 *) arg0) + 0x234));
  n = __repair_inline(*((u8 *) (((u8 *) arg0) + 0x2c4)));
  if (!n)
  {
    D_80166888_ovl_22 = &D_80166684_ovl_22;
    *((s32 *) (((u8 *) arg0) + 0x2bc)) = (s32) func_8016293C_ovl_22;
    *((u8 *) (((u8 *) arg0) + 0x2c4)) = n + inline_fn();
    return;
  }
  p = D_80166888_ovl_22;
  do
  {
    if (!(((__repair_record_p *) p)->field_A & 2))
    {
      temp_s0 = ((__repair_record_p *) p)->field_8;
      temp_s0 *= 0x178;
      temp_s0 += temp_s3;
      temp_s0 += 0x38;
      do
      {
        p = (s32 *) (((u8 *) p) + 0xc);
        temp_s3 = ((func_80033634_ovl_01() & 255) * 2) + 0x1000;
        func_800377B0_ovl_01(temp_s3 | 0x06000000, 0, temp_s0, p);
      }
      while (0);
    }
    D_80166888_ovl_22 = p;
  }
  while (1 & ((__repair_record_p *) p)->field_A);
  n = *((u8 *) (((u8 *) arg0) + 0x2c4));
  if (n == 0x18)
  {
    *((s32 *) (((u8 *) arg0) + 0x2bc)) = 0;
  }
  n++;
  *((u8 *) (((u8 *) arg0) + 0x2c4)) = n;
}

