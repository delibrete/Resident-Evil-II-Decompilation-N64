s32 func_80033174_ovl_01(void *, void *);
void func_801658F4_ovl_16(void *a)
{
  u8 *p = a;
  s32 r;
  s32 v;
  if (!((*((u16 *) (p + 0x2c8))) & 0x40))
  {
    r = *((s32 *) (p + 0x2bc));
    if ((r == 0) && ((*((s32 *) (p + 0x2c))) >= (*((s16 *) (p + 0x25e)))))
    {
      r = func_80033174_ovl_01(a, *((void **) (p + 0x2c4))) & 255;
      v = p[0x2cb] - 1;
      if (v < 19)
      {
        switch (v)
        {
          case 0:
            if (r)
          {
            p[0x26e] = 4;
          }
          else
          {
            p[0x26e] = 3;
          }
            break;

          case 1:
            if (r)
          {
            *((u16 *) (p + 0x26c)) |= 32;
          }
            break;

          case 2:
            if (r)
          {
            p[0x26e] = 4;
          }
          else
          {
            p[0x26e] = 3;
          }
            break;

          case 3:
 do { p[0x26e] = 1; break; } while (0);

          case 4:
            if (r)
          {
            *((u16 *) (p + 0x26c)) |= 32;
          }
          else
          {
            *((u16 *) (p + 0x26c)) &= ~32;
          }
            p[0x26e] = 6;
            break;

        }

      }
    }
    else
    {
      p[0x26e] = 5;
    }
  }
  else
  {
    p[0x26e] = 0;
  }
}
