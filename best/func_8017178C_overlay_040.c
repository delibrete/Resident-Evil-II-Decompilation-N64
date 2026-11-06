s32 func_8016FC4C_overlay_040(void *);
extern s32 D_800C7650;
void func_8017178C_overlay_040(void *arg0)
{
  s32 temp_v0;
  temp_v0 = *((s32 *) (((char *) arg0) + 0x2C));
  if (temp_v0 >= (temp_v0 + (*((s16 *) (((char *) arg0) + 0x134)))))
  {
    *((s32 *) (((char *) arg0) + 0)) = (s32) ((*((s32 *) (((char *) arg0) + 0))) & (~8));
  }
  if (func_8016FC4C_overlay_040(arg0) != 0)
  {
    *((s8 *) (((char *) arg0) + 5)) = 2;
    *((s16 *) (((char *) arg0) + 6)) = 0;
    temp_v0 = *((u8 *) (((char *) arg0) + 0x26F));
    *((s8 *) (((char *) arg0) + 0x2B9)) = 0;
    *((s8 *) (((char *) arg0) + 0x2C8)) = 0;
    *((u8 *) (((char *) arg0) + 0x26F)) = (u8) (temp_v0 & 0x7F);
    *((u8 *) (((char *) arg0) + 0x1A2)) = (u8) (*((u8 *) (((char *) (&D_800C7650)) + 0x19C22)));
  }
}

