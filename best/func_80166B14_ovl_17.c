extern s32 D_800E1008[];
s32 func_80069F4C_ovl_01(void *, s32);
static inline int inline_fn(s32 *arg0, int arg1)
{
  return (*arg0) != arg1;
}

s32 func_80166B14_ovl_17(void *arg0)
{
  s32 *table = D_800E1008;
  s32 result;
  s32 limit;
  s32 value;
  s32 *obj = (s32 *) arg0;
  s32 new_var;
  s32 *node = (s32 *) (((u8 *) arg0) + 0x2B4);
  if ((*table) == 0)
  {
    if (arg0)
    {
      return 0;
    }
    else
    {
      return 0;
    }
  }
  do
  {
    result = func_80069F4C_ovl_01(((u8 *) arg0) + 0x28, *table);
    new_var = node[4];
    *((s16 *) (((u8 *) node) + 0xE)) = result << 10;
    node[4] = *table;
    if (((result << 26) >> 16) == (((*((u16 *) (((u8 *) arg0) + 0x66))) + 0x200) & 0xC00))
    {
      limit = -obj[0x2C / 4];
      value = *((s32 *) (((u8 *) new_var) + 0xC));
      if ((((u32) value) + 1) > ((u32) (limit / 1800)))
      {
        table++;
        continue;
      }
      return (result & 0xFFFF) + 1;
    }
    table++;
  }
  while (inline_fn(table, 0));
  return 0;
  value = *((s32 *) (((u8 *) node[4]) + 0xC));
}

