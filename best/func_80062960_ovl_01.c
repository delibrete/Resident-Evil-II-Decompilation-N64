s32 func_80043650_ovl_01();
s32 func_8004500C_ovl_01(s32);
s32 func_800837DC_ovl_01(void *, s32);
extern f32 D_800B91A0_ovl_01;
extern f32 D_800B91A4_ovl_01;
extern s32 D_800C7650_ovl_01;
extern s32 D_800E8D54_ovl_01;
extern s32 D_80111110_ovl_01;
extern void *D_80139B90;
extern s32 D_80139D9C;
extern s32 D_80139DA0;
void func_80062960_ovl_01(void)
{
  char *__repair_addr;
  void *sp10;
  f32 temp_fs0;
  char *new_var2;
  f32 temp_fs1;
  f32 temp_fv0;
  f32 temp_fv0_2;
  s16 temp_v1;
  s32 var_s4;
  char *new_var;
  short var_v0_2;
  u16 temp_v0;
  u16 temp_v1_2;
  void **var_s3;
  void *temp_s0;
  func_80043650_ovl_01();
  temp_fs1 = D_800B91A0_ovl_01;
  __repair_addr = (char *) (*((void **) (((char *) (&D_800C7650_ovl_01)) + 0x1827C)));
  if ((((*((s32 *) (((char *) (&D_80139DA0)) + 0x18))) != 0) && ((*((s32 *) (((char *) (&D_800C7650_ovl_01)) + 0x19A3C))) & 0x40000000)) && ((*((s32 *) (((char *) (((*((s16 *) (((char *) (&D_800C7650_ovl_01)) + 0x215FC))) << 5) + (*((s32 *) (((char *) __repair_addr) + 0x24))))) + 0x1C))) != (-1)))
  {
    var_s4 = 0;
    sp10 = (char *) ((*((s16 *) (((char *) (&D_800C7650_ovl_01)) + 0x215FC))) * 0x10);
    sp10 += (s32) (&D_800E8D54_ovl_01);
    var_s3 = &D_80139B90;
    temp_fs0 = D_800B91A4_ovl_01;
    loop_4:
    if (var_s4 < D_80139D9C)
    {
      temp_s0 = *var_s3;
      if ((temp_s0 != NULL) && (func_800837DC_ovl_01(sp10, (*((u16 *) (((char *) temp_s0) + 0))) & 0x7FFF) != 0))
      {
        *((s32 *) (((char *) (&D_80139DA0)) + 0x14)) = (s32) (((s32) (temp_s0 + 0x13)) & (~7));
        new_var2 = (char *) (&D_80111110_ovl_01);
        temp_v0 = *((u16 *) (((char *) temp_s0) + 8));
        *((s32 *) (((char *) (&D_80139DA0)) + 4)) = (s32) temp_v0;
        *((s8 *) (new_var2 + 0x20)) = (s8) temp_v0;
        *((s8 *) (new_var2 + 0x10)) = (s8) temp_v0;
        temp_v1 = (*((u16 *) (((char *) temp_s0) + 2))) + (temp_v0 & 0xFF);
        new_var = new_var2;
        *((s16 *) (new_var + 0x1C)) = temp_v1;
        *((s16 *) (new_var2 + 0xC)) = temp_v1;
        temp_v1_2 = *((u16 *) (((char *) temp_s0) + 0xA));
        *((s32 *) (((char *) (&D_80139DA0)) + 8)) = (s32) temp_v1_2;
        *((s8 *) (new_var + 0x21)) = (s8) temp_v1_2;
        *((s8 *) (new_var2 + 0x19)) = (s8) temp_v1_2;
        temp_fv0 = ((f32) ((*((s16 *) (((char *) temp_s0) + 4))) + (temp_v1_2 & 0xFF))) * temp_fs1;
        if (temp_fs0 <= temp_fv0)
        {
          temp_v1 = ((s32) (temp_fv0 - temp_fs0)) | 0x80000000;
          *((s16 *) (new_var2 + 0x1E)) = temp_v1;
        }
        else
        {
          temp_v1 = (s16) ((s32) temp_fv0);
          *((s16 *) (new_var + 0x1E)) = temp_v1;
        }
        *((s16 *) (new_var + 0x16)) = temp_v1;
        temp_v0 = *((u16 *) (((char *) temp_s0) + 2));
        *((u16 *) (new_var2 + 0x14)) = temp_v0;
        *((u16 *) (new_var2 + 4)) = temp_v0;
        *((u16 *) (new_var + 0x1A)) = (u16) (*((u16 *) (((char *) temp_s0) + 6)));
        temp_fv0_2 = ((f32) (*((s16 *) (((char *) temp_s0) + 4)))) * temp_fs1;
        if (temp_fs0 <= temp_fv0_2)
        {
          var_v0_2 = ((s32) (temp_fv0_2 - temp_fs0)) | 0x80000000;
        }
        else
        {
          var_v0_2 = (s32) temp_fv0_2;
        }
        *((s16 *) (new_var2 + 0xE)) = (s16) var_v0_2;
        *((s16 *) (new_var + 6)) = (s16) var_v0_2;
        *((s32 *) (((char *) (&D_800C7650_ovl_01)) + 0x18204)) = func_8004500C_ovl_01(*((s32 *) (((char *) (&D_800C7650_ovl_01)) + 0x18204)));
      }
      var_s3 += 4;
      var_s4 += 1;
      goto loop_4;
    }

  }
}

