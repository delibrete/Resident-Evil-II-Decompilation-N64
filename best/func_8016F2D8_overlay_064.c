s32 func_80033634_ovl_01();
void *func_8016FA44_overlay_064(void *, s32, s32, s32);
extern s32 D_8016FB84_overlay_064;
void func_8016F2D8_overlay_064(void *arg0)
{
  s32 temp_s0;
  u16 temp_v0_5;
  u8 temp_v0;
  u8 temp_v0_3;
  u16 *new_var;
  void *temp_s1;
  union 
  {
    void *pointer;
    unsigned int value;
  } __repair_phase_storage;
  temp_s1 = arg0 + 0x2B4;
  new_var = (u16 *) (((char *) __repair_phase_storage.pointer) + 0x1E0);
  if ((*((u8 *) (((char *) arg0) + 7))) == 0)
  {
    temp_v0 = (*((u8 *) (((char *) temp_s1) + 5))) - 1;
    *((u8 *) (((char *) temp_s1) + 5)) = temp_v0;
    if ((temp_v0 & 0xFF) != 0xFF)
    {
      loop_3:
      temp_s0 = (*((s16 *) (((char *) temp_s1) + 6))) + (((func_80033634_ovl_01() & 0xF) - 7) * 0x10);

      __repair_phase_storage.pointer = func_8016FA44_overlay_064(arg0, 0x6001, temp_s0, (*((s16 *) (((char *) temp_s1) + 8))) + (((func_80033634_ovl_01() & 0xF) - 7) * 0x10));
      if (__repair_phase_storage.pointer != NULL)
      {
        *new_var = (u16) (*((s16 *) (((char *) temp_s1) + 6)));
        *((u16 *) (((char *) __repair_phase_storage.pointer) + 0x1E4)) = (u16) (*((s16 *) (((char *) temp_s1) + 8)));
        temp_v0_3 = *((func_80033634_ovl_01() & 7) + (&D_8016FB84_overlay_064));
        *((u16 *) (((char *) arg0) + 0x1F4)) = (u16) temp_v0_3;
        if (temp_v0_3 == 0)
        {
          __repair_phase_storage.value = (u8) ((*((u8 *) (((char *) temp_s1) + 5))) - 1);
          *((u8 *) (((char *) temp_s1) + 5)) = (u8) __repair_phase_storage.value;
          if ((((u8) __repair_phase_storage.value) & 0xFF) == 0xFF)
          {
            goto block_6;
          }
          goto loop_3;
        }
        *((u8 *) (((char *) arg0) + 7)) = 1U;
        return;
      }
      goto block_6;
    }
    block_6:
    *((u8 *) (((char *) arg0) + 7)) = 0U;

    *((u8 *) (((char *) arg0) + 6)) = (u8) ((*((u8 *) (((char *) arg0) + 6))) + 1);
    return;
  }
  temp_v0_5 = (*((u16 *) (((char *) arg0) + 0x1F4))) - 1;
  *((u16 *) (((char *) arg0) + 0x1F4)) = temp_v0_5;
  if ((temp_v0_5 << 0x10) == 0)
  {
    *((u8 *) (((char *) arg0) + 7)) = 0U;
  }
}

