typedef struct S_ent
{
  u8 pad[0x60];
  u32 v;
  u8 rest[0x114];
} S_ent;
void func_80162E88_overlay_014(void *arg0, u32 arg1, s32 arg2, s32 arg3, s32 arg4)
{
  s32 new_var;
  u32 i;
  S_ent *p;
  i = 0;
  if (arg1 != 0)
  {
    p = (S_ent *) (*((void **) (((u8 *) arg0) + 0x234)));
    do
    {
      i++;
      new_var = arg4 << 16;
      p->v = (p->v & 0xFF000000) | (((arg3 << 8) | new_var) | arg2);
      p++;
    }
    while (i < arg1);
  }
}

