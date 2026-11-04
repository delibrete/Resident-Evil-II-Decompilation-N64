s32 func_800A548C_ovl_01(u8, s32 *, s32);
s32 func_800AB36C_ovl_01(s32);
s32 func_800AD9D4_ovl_01(s32, s32 *);
extern u8 D_801362B1_ovl_01;
extern s32 D_801589F0;
extern s32 D_801589F8;
s32 func_800AF6A0_ovl_01(void *arg0, void *arg1)
{
  int __repair_literal;
  s32 var_a2;
  s32 temp_hi;
  s32 var_a0;
  s32 var_lo;
  u32 var_s0;
  u8 temp_v1;
  do
  {
    var_s0 = ((u32) (*((u32 *) (((char *) arg1) + 0)))) >> 8;
    if (D_801362B1_ovl_01 != 0)
    {
      var_a0 = var_s0 & 0xFFFF;
      if (D_801362B1_ovl_01 != 0x2A)
      {
        var_a0 = var_s0;
        var_a0 = var_a0 & 0xFFFF;
        if (!(func_800AB36C_ovl_01(var_a0) & 0x1F))
        {
          var_s0 = func_800AB36C_ovl_01(var_a0) & 0xFF;
          goto block_4;
        }
      }
    }
    else
    {
      block_4:
      var_a0 = var_s0 & 0xFFFF;

    }
    if (func_800AD9D4_ovl_01(var_a0, &D_801589F0) == 0)
    {
      temp_v1 = (u8) (*((u32 *) (((char *) arg1) + 0)));
      if (temp_v1 != 1)
      {
        __repair_literal = 2;
        if (((s32) temp_v1) < __repair_literal)
        {
          if (temp_v1 != 0)
          {
            D_801589F8 = 0;
          }
          else
          {
            *((u32 *) (((char *) (&D_801589F0)) + 8)) = (u32) (*((u32 *) (((char *) arg1) + 4)));
          }
        }
        else
          if (temp_v1 != 2)
        {
          D_801589F8 = 0;
        }
        else
        {
          var_lo = (*((u16 *) (((char *) arg0) + 0x30))) * (*((u32 *) (((char *) arg1) + 4)));
          goto block_15;
        }
      }
      else
      {
        var_lo = (0x7F - (*((u16 *) (((char *) arg0) + 0x30)))) * (*((u32 *) (((char *) arg1) + 4)));
        block_15:
        temp_hi = var_lo / 127;

        *((u32 *) (((char *) (&D_801589F0)) + 8)) = (u32) (((u32) (temp_hi + (((u32) (var_lo - temp_hi)) >> 1))) >> 6);
      }
      if (((u32) (*((u32 *) (((char *) (&D_801589F0)) + 8)))) >= ((u32) (*((u32 *) (((char *) (&D_801589F0)) + 0xC)))))
      {
        *((u32 *) (((char *) (&D_801589F0)) + 8)) = (u32) ((*((u32 *) (((char *) (&D_801589F0)) + 0xC))) - 1);
      }
      var_a2 = 0;
      if (!((*((s32 *) (((char *) arg0) + 0x24))) & 0x200))
      {
        var_a2 = 1;
      }
      do
      {
        func_800A548C_ovl_01(*((u8 *) (((char *) arg0) + 0x63)), &D_801589F0, var_a2);
      }
      while (0);
      *((s32 *) (((char *) arg0) + 0x5C)) = (s32) (*((s32 *) (((char *) (&D_801589F0)) + 0)));
      *((s32 *) (((char *) arg0) + 0x24)) = (s32) ((*((s32 *) (((char *) arg0) + 0x24))) | 0x20);
      *((s32 *) (((char *) arg0) + 0x58)) = (s32) (*((s32 *) (((char *) (&D_801589F0)) + 4)));
    }
    return 0;
  }
  while (0);
}

