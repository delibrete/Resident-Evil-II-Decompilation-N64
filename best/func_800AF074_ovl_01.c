extern void *D_801583D0;
s32 func_800AF074_ovl_01(u32 arg0)
{
  u32 temp_v0;
  int new_var;
  void *var_v0;
  void *var_v1;
  if (arg0 != (-1U))
  {
    var_v0 = var_v1;
    var_v1 = D_801583D0;
    var_v0 = NULL;
    if (var_v1 != NULL)
    {
      loop_2:
      temp_v0 = *((u32 *) (((char *) var_v1) + 8));

      if (temp_v0 != arg0)
      {
        var_v0 = NULL;
        if (arg0 >= temp_v0)
        {
          var_v1 = *((void **) (((char *) var_v1) + 0));
          if (var_v1 != NULL)
          {
            goto loop_2;
          }
        }
      }
      else
      {
      }
    }
    if (var_v0 != NULL)
    {
      return *((s32 *) (((char *) var_v0) + 0xC));
    }
    new_var = 1;
    return -new_var;
  }
  return -1;
}

