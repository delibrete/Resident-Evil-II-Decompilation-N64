extern s32 D_800C7650;
void func_8017472C_overlay_058(s32 arg0)
{
  u8 temp_v0;
  void *temp_a1;
  temp_a1 = arg0 + 0x2B4;
  arg0 = 0x80000000U;
  if ((*((u8 *) (((char *) temp_a1) + 0x1A))) != 0)
  {
    *((s32 *) (((char *) (&D_800C7650)) + 0x19A5C)) = (s32) ((*((s32 *) (((char *) (&D_800C7650)) + 0x19A5C))) | (arg0 >> (*((u8 *) (((char *) temp_a1) + 0x1B)))));
    temp_v0 = (*((u8 *) (((char *) temp_a1) + 0x1A))) - 1;
    *((u8 *) (((char *) temp_a1) + 0x1A)) = temp_v0;
    if (!(temp_v0 & 0xFF))
    {
      *((s32 *) (((char *) (&D_800C7650)) + 0x19A5C)) = (s32) (((~8) & (*((s32 *) (((char *) (&D_800C7650)) + 0x19A5C)))) & (~4));
    }
  }
}

