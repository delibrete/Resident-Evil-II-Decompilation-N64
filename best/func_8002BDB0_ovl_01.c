typedef struct Image Image;
typedef struct Decoder
{
  s32 (*run0)(Image *);
  s32 (*run1)(Image *, s32);
  u8 pad[8];
  s32 value;
  s32 a;
  s32 b;
} Decoder;
typedef struct Stream
{
  u8 *data;
  s32 remaining;
  u8 pad[4];
  s32 (*refill)(Image *);
} Stream;
struct Image
{
  Decoder *decoder;
  u8 pad4[16];
  Stream *stream;
  u8 pad18[0x9C];
  s8 tableA;
  u8 padB5[15];
  s8 tableB;
};
s32 func_8002BDB0_ovl_01(Image *arg0)
{
  int __repair_literal;
  Stream *s;
  u8 *p;
  u8 *p2;
  int new_var;
  u8 *p3;
  s32 count;
  s32 remain;
  s32 __repair_phase_remain;
  
  s32 result;
s32 __repair_phase_result;
  u8 code;
  u8 value;
  s32 tmp;
  s = arg0->stream;
  __repair_phase_remain = s->remaining;
  count = __repair_phase_remain - 1;
  if (__repair_phase_remain == 0)
  {
    result = 0;
    if (s->refill(arg0) == 0)
    {
      return result;
    }
    count = s->remaining - 1;
  }
  p = s->data + 1;
  __repair_phase_remain = s->data[0] << 8;
  if (count == 0)
  {
    result = 0;
    if (s->refill(arg0) == 0)
    {
      return result;
    }
    p = s->data;
    count = s->remaining;
  }
  count--;
  tmp = (__repair_phase_remain + (*p)) - 2;
  p2 = p + 1;
  if (tmp <= 0)
  {
    goto finish;
  }
  do
  {
    remain = count - 1;
    if (count == 0)
    {
      result = 0;
      if (s->refill(arg0) == 0)
      {
        return result;
      }
      p2 = s->data;
      remain = s->remaining - 1;
    }
    code = *p2;
    p3 = p2 + 1;
    if (remain == 0)
    {
      result = 0;
      if (s->refill(arg0) == 0)
      {
        return result;
      }
      p3 = s->data;
      remain = s->remaining;
    }
    count = remain - 1;
    value = *p3;
    p2 = p3 + 1;
    tmp -= 2;
    arg0->decoder->value = 0x47;
    arg0->decoder->a = code;
    arg0->decoder->b = value;
    arg0->decoder->run1(arg0, 1);
    __repair_literal = 16;
    result = ((s32) code) < __repair_literal;
    remain = (s32) code;
    if (code >= 32)
    {
      arg0->decoder->value = 0x15;
      arg0->decoder->a = code;
      arg0->decoder->run0(arg0);
      result = remain < 16;
    }
    if (!result)
    {
      arg0->tableB = value;
    }
    else
    {
      new_var = 4;
      arg0->tableA = value & 15;
      arg0->tableB = value >> new_var;
      if (((u8) (value >> 4)) < (value & 15))
      {
        arg0->decoder->value = 0x16;
        arg0->decoder->a = value;
        arg0->decoder->run0(arg0);
      }
    }
  }
  while (tmp > 0);
  finish:
  __repair_phase_result = 1;

  s->data = p2;
  s->remaining = count;
  return __repair_phase_result;
}

