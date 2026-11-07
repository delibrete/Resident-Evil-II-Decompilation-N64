extern s32 D_800C7650;
void func_8016F870_overlay_043(void *arg0)
{
  u8 temp_v1;
  char *new_var;
  new_var = (char *) (&D_800C7650);
  if (((((((*((u16 *) (((char *) (&D_800C7650)) + 0x19A8E))) != 0) && (!((*((s32 *) (((char *) (&D_800C7650)) + 0x19A5C))) & 0x10))) && ((*((u8 *) (new_var + 0x19CEF))) == 0)) && ((*((s8 *) (((char *) arg0) + 0x2C0))) == 0)) && (!((*((u8 *) (((char *) arg0) + 0x25C))) & 4))) && (((temp_v1 = *((u8 *) (((char *) arg0) + 0x2C2)), temp_v1 == 0)) || (temp_v1 == 7)))
  {
    *((s8 *) (((char *) arg0) + 0x2C0)) = 1;
  }
}

