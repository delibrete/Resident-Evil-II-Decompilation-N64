typedef struct 
{
  u8 pad[0x2c4];
  u8 active;
  u8 phase;
  u16 frame;
  u8 q[8];
  u8 i;
  u8 j;
} O;
typedef struct 
{
  u8 pad[0x120];
  s16 *values;
} E;
void func_8016B4BC_ovl_31(O *p, E *e)
{
  s16 *new_var;
  u8 s = p->phase;
  s16 *v;
  u16 t;
  if (s > 1)
  {
    return;
  }
  if (!s)
  {
    p->phase = 1;
    p->frame = 0;
  }
  v = e->values;
  t = p->frame;
  e->values[p->i] -= t;
  e->values[p->j] -= p->frame;
  if (e->values[p->j] < 0)
  {
    e->values[p->j] = 0;
  }
  if (e->values[p->i] < 0)
  {
    e->values[p->i] = 0;
  }
  p->frame += 2;
  new_var = e->values;
  e->values[8] = new_var[8] >> 1;
  if ((v[p->i] == 0) && (new_var[p->j] == 0))
  {
    p->active = 0;
    p->phase = 0;
  }
}

