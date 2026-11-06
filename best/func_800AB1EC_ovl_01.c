extern f32 func_8000DB80(f32);
void func_800AB1EC_ovl_01(f32 *arg0)
{
  f32 new_var;
  f32 len;
  len = func_8000DB80(((arg0[0] * arg0[0]) + (arg0[1] * arg0[1])) + (arg0[2] * arg0[2]));
  new_var = arg0[1];
  do
  {
    arg0[0] = arg0[0] / len;
    arg0[2] = arg0[2] / len;
  }
  while (0);
  arg0[1] = new_var / len;
}

