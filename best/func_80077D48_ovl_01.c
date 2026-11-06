s32 func_8007880C_ovl_01(s8, s32);
extern s8 D_80119E4B_ovl_01;
extern s32 D_80119E78_ovl_01;
extern s32 D_80119E9C_ovl_01;
extern s32 D_80119ECC_ovl_01;
extern u8 D_8011A22E_ovl_01;
void func_80077D48_ovl_01(s8 arg0, void *arg1)
{
  void *new_var;
  s16 temp_a2;
  s16 var_s5;
  s32 temp_s2;
  s8 var_s1;
  int new_var3;
  s8 var_s4;
  u32 var_a0;
  u32 var_a1;
  u8 temp_v1;
  int new_var2;
  void *temp_s0;
  void *temp_v1_2;
  void *temp_v1_3;
  void *var_a3;
  var_s4 = arg0;
  if ((*((s32 *) (((char *) arg1) + 0))) & 0x2000)
  {
    var_s4 = arg0 + 0x10;
  }
  var_s5 = 3;
  if (D_80119E78_ovl_01 != 0)
  {
    temp_s0 = D_80119E78_ovl_01 + ((var_s4 & 0xFF) * 4);
    new_var = temp_s0;
    if (((*((s32 *) (((char *) new_var) + 0))) != (-1)) && (D_80119E4B_ovl_01 != (-1)))
    {
      temp_v1 = (u8) (*((s32 *) (((char *) new_var) + 0)));
      if (temp_v1 & 0x80)
      {
        var_s5 = (new_var2 = temp_v1 & 0x7F);
      }
      var_s1 = (*((u8 *) (((char *) temp_s0) + 3))) & 0x1F;
      temp_s2 = (*((u8 *) (((char *) temp_s0) + 2))) & 0xF;
      if (!(func_8007880C_ovl_01(var_s1, temp_s2) & 0xFF))
      {
        temp_v1_2 = (char *) (var_s1 * 2);
        temp_v1_2 += (s32) (&D_80119E9C_ovl_01);
        *((s8 *) (((char *) temp_v1_2) + 0)) = (s8) (temp_s2 & 7);
        *((s8 *) (((char *) temp_v1_2) + 1)) = var_s1;
        temp_v1_3 = (var_s1 * 0x24) + (&D_80119ECC_ovl_01);
        *((s8 *) (((char *) temp_v1_3) + 0)) = 1;
        new_var3 = var_s1 * 2;
        *((s8 *) (((char *) temp_v1_3) + 1)) = var_s4;
        *((s16 *) (((char *) temp_v1_3) + 4)) = var_s5;
        var_a0 = ((u8) (*((u8 *) (((char *) new_var) + 2)))) >> 4;
        var_a1 = ((u8) (*((u8 *) (((char *) temp_s0) + 3)))) >> 5;
        temp_a2 = *((u8 *) (((char *) new_var) + 1));
        temp_a2 = temp_a2 & 0x7F;
        *((s16 *) (((char *) temp_v1_3) + 6)) = temp_a2;
        *((s16 *) (((char *) temp_v1_3) + 8)) = (s16) var_a0;
        *((f32 *) (((char *) temp_v1_3) + 0x14)) = (f32) (*((s32 *) (((char *) arg1) + 0x28)));
        *((f32 *) (((char *) temp_v1_3) + 0x18)) = (f32) (*((s32 *) (((char *) arg1) + 0x2C)));
        *((f32 *) (((char *) temp_v1_3) + 0x1C)) = (f32) (*((s32 *) (((char *) arg1) + 0x30)));
        *((s16 *) (((char *) temp_v1_3) + 0x12)) = 1;
        if (D_8011A22E_ovl_01 == 0)
        {
          *((s16 *) (((char *) temp_v1_3) + 0x20)) = 0;
        }
        else
        {
          *((s16 *) (((char *) temp_v1_3) + 0x20)) = 1;
        }
        if (var_a1 != 0)
        {
          var_a3 = (var_s1 * 0x24) + (&D_80119ECC_ovl_01);
          temp_s0 = (char *) new_var3;
          temp_s0 += (s32) (&D_80119E9C_ovl_01);
          do
          {
            var_a1 -= 1;
            var_a3 += 0x24;
            temp_s0 = temp_s0 + 2;
            var_s1 += 1;
            *((s8 *) (((char *) temp_s0) + 0)) = (s8) (temp_s2 & 7);
            *((s8 *) (((char *) temp_s0) + 1)) = var_s1;
            var_a0 += 1;
            if (D_8011A22E_ovl_01 != 0)
            {
              *((s16 *) (((char *) var_a3) + 0x20)) = 1;
            }
            else
            {
              *((s16 *) (((char *) var_a3) + 0x20)) = 0;
            }
            *((s8 *) (((char *) var_a3) + 1)) = var_s4;
            *((s8 *) (((char *) var_a3) + 0)) = 1;
            *((s16 *) (((char *) var_a3) + 4)) = var_s5;
            *((s16 *) (((char *) var_a3) + 6)) = temp_a2;
            *((s16 *) (((char *) var_a3) + 8)) = (s16) var_a0;
            *((f32 *) (((char *) var_a3) + 0x14)) = (f32) (*((s32 *) (((char *) arg1) + 0x28)));
            *((f32 *) (((char *) var_a3) + 0x18)) = (f32) (*((s32 *) (((char *) arg1) + 0x2C)));
            *((f32 *) (((char *) var_a3) + 0x1C)) = (f32) (*((s32 *) (((char *) arg1) + 0x30)));
            *((s16 *) (((char *) var_a3) + 0x12)) = 1;
          }
          while (var_a1 != 0);
        }
      }
    }
  }
}

