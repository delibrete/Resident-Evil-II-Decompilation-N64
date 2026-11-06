inline static u32 __repair_inline(u32 a)
{
  return a;
}

s32 func_800AC63C_ovl_01(u8, u8, u8);
s32 func_800AF150_ovl_01(void *, u32 *);
extern s32 D_80158A20;
extern s32 D_80158A40;
s32 func_800AF564_ovl_01(void *arg0, u32 *arg1)
{
  s32 temp_v1_3;
  s32 var_v0;
  s32 var_v0_2;
  u16 temp_v1_2;
  u32 temp_v1;
  u8 temp_a1;
  void *new_var;
  temp_v1 = __repair_inline(*arg1);
  if ((temp_v1 >> 0x18) == 0)
  {
    temp_v1_2 = *((u16 *) (((char *) arg0) + 0x50));
    var_v0 = ((s32) (temp_v1 << 0x10)) >> 0x18;
  }
  else
  {
    temp_v1_2 = *((u16 *) (((char *) arg0) + 0x4E));
    var_v0 = ((s32) (temp_v1 << 0x10)) >> 0x18;
  }
  *((u16 *) (((char *) arg0) + 0x50)) = (u16) (temp_v1_2 + var_v0);
  temp_v1_2 = *((u16 *) (((char *) arg0) + 0x50));
  if (((s16) (*((u16 *) (((char *) arg0) + 0x50)))) >= 0)
  {
    if (temp_v1_2 >= 0x80U)
    {
      temp_v1_2 = 0x7F;
      goto block_9;
    }
    *((u16 *) (((char *) arg0) + 0x50)) = temp_v1_2;
  }
  else
  {
    temp_v1_2 = 0;
    block_9:
    *((u16 *) (((char *) arg0) + 0x50)) = temp_v1_2;

  }
  *((s8 *) (((char *) arg0) + 0xC0)) = (s8) ((u16) (*arg1));
  if ((*((s32 *) (((char *) arg0) + 0x60))) != (-1))
  {
    var_v0_2 = 0;
    if ((*((u8 *) (((char *) arg0) + 0x4A))) != 0xFF)
    {
      temp_a1 = *((u8 *) (((char *) arg0) + 0x63));
      new_var = arg0;
      if ((*((u8 *) (((char *) arg0) + 0x4B))) == 0xFF)
      {
        var_v0_2 = temp_a1 & 0xFF;
    temp_v1 = var_v0_2;
        temp_v1_3 = temp_v1;
        var_v0_2 = 0;
        if ((*(temp_v1_3 + (&D_80158A20))) == temp_v1_3)
        {
          var_v0_2 = 1;
        }
      }
      else
      {
        var_v0_2 = 1;
        if ((*(((*((u8 *) (((char *) arg0) + 0x4A))) + ((*((u8 *) (((char *) new_var) + 0x4B))) * 0x10)) + (&D_80158A40))) != temp_a1)
        {
          goto block_16;
        }
      }
    }
  }
  else
  {
    block_16:
    var_v0_2 = 0;

  }
  if (var_v0_2 & 0xFF)
  {
    func_800AC63C_ovl_01(*((u8 *) (((char *) arg0) + 0x4A)), *((u8 *) (((char *) arg0) + 0x4B)), *((u8 *) (((char *) new_var) + 0x51)));
  }
  *arg1 = 4;
  return func_800AF150_ovl_01(arg0, arg1) & 0xFF;
}

