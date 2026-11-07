s32 func_80033634_ovl_01();
s32 func_800377B0_ovl_01(s32, s32, void *, s32 *);
s32 func_80082230_ovl_01(s32 *, s32, s32);
extern u8 D_800C7650;
void func_8016F08C_overlay_044(void *arg0)
{
  int __repair_literal;
  s32 sp10;
  s16 temp_v0;
  s32 var_a1;
  u16 var_v1;
  u8 temp_v1;
  void *temp_s0;
  void *new_var2;
  void *temp_s2;
  s16 new_var;
  temp_s0 = *((void **) (((char *) arg0) + 0x208));
  temp_s2 = *((void **) (((char *) arg0) + 0x234));
  func_80082230_ovl_01(&sp10, 0, 8);
  temp_v1 = *((u8 *) (((char *) arg0) + 0x2B7));
  new_var2 = arg0;
  switch (temp_v1)
  {
    case 0:
      var_a1 = 0x2328 - ((*((s16 *) (((char *) arg0) + 0x25E))) - (*((s32 *) (((char *) temp_s2) + 0x50))));
      __repair_literal = 0;
      if (var_a1 < __repair_literal)
    {
      var_a1 = 0;
    }
      *((u16 *) (((char *) temp_s0) + 4)) = (u16) (((*((u16 *) (((char *) arg0) + 0x2B8))) * var_a1) / 9000);
      var_v1 = ((*((u16 *) (((char *) arg0) + 0x2BA))) * var_a1) / 9000;
      block_14:
    *((u16 *) (((char *) temp_s0) + 6)) = var_v1;

      break;

    case 1:
      *((void **) (((char *) temp_s0) + 0x14)) = (void *) (temp_s2 + 0x33C);
      *((s16 *) (((char *) arg0) + 0x1F6)) = 0;
      *((s32 *) (((char *) arg0) + 0)) = (s32) ((*((s32 *) (((char *) arg0) + 0))) | 0xA);
      *((u8 *) (((char *) arg0) + 0x2B7)) = (u8) ((*((u8 *) (((char *) arg0) + 0x2B7))) + 1);

    case 2:
      temp_v0 = ((u16) (*((s16 *) (((char *) new_var2) + 0x1F6)))) + 1;
      if ((*((s16 *) (((char *) arg0) + 0x1F6))) < 0x70)
    {
      *((s16 *) (((char *) arg0) + 0x1F6)) = temp_v0;
      if (temp_v0 < 0x10)
      {
        *((s8 *) (((char *) temp_s0) + 0x18)) = (s8) (((u32) (D_800C7650 * (temp_v0 + 1))) >> 4);
        *((s8 *) (((char *) temp_s0) + 0x19)) = (s8) (((u32) ((((u16) D_800C7650) & 0xFF) * ((*((s16 *) (((char *) arg0) + 0x1F6))) + 1))) >> 4);
        new_var = *((s16 *) (((char *) arg0) + 0x1F6));
        *((s8 *) (((char *) temp_s0) + 0x1A)) = (s8) (((u32) (((((u32) D_800C7650) >> 8) & 0xFF) * (new_var + 1))) >> 4);
      }
      var_v1 = (*((u16 *) (((char *) temp_s0) + 6))) + 4;
      *((u16 *) (((char *) temp_s0) + 4)) = (u16) ((*((u16 *) (((char *) temp_s0) + 4))) + 4);
      goto block_14;
    }
      break;

  }

  if (((*((s16 *) (((char *) arg0) + 0x1F2))) > 0) && (!(func_80033634_ovl_01() & 0x1F)))
  {
    func_800377B0_ovl_01(0x150800, 0, temp_s2 + 0xD70, &sp10);
  }
}

