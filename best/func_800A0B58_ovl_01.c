extern unsigned char D_80143BF3;
s32 func_800A8278_overlay_001();
extern char D_80143BF0[];
extern void *D_80143BF8;
extern s32 D_80147F40;
extern s32 D_80147F44;
void func_800A0B58_ovl_01(s32 arg0)
{
  int new_var;
  int new_var3;
  s32 temp_a0;
  union 
  {
    u32 *pointer;
    u32 value;
  } __repair_phase_storage;
  u32 *temp_a1;
  u32 *temp_a2;
  int new_var2;
  u32 temp_v0;
  temp_a1 = *((u32 **) (((char *) D_80143BF8) + 0xF68));
  if (temp_a1 != NULL)
  {
    new_var3 = 8;
    *((u32 **) (((char *) D_80143BF8) + 0xF6C)) = temp_a1;
    __repair_phase_storage.pointer = *((u32 **) (((char *) D_80143BF8) + 0xF6C));
    *((s32 *) (((char *) D_80143BF8) + 0xF74)) = arg0;
    *((s32 *) (((char *) D_80143BF8) + 0xF70)) = 0;
    if ((temp_a1 != NULL) && ((*temp_a1) != (-1U)))
    {
      new_var = (*((s32 *) (((char *) D_80143BF8) + 0x120))) + (*((s32 *) (((char *) D_80143BF8) + 0xF74)));
      loop_4:
      temp_a2 = *((u32 **) (((char *) D_80143BF8) + 0xF6C));

      if (((u32) new_var) >= ((u32) (*((u32 *) (((char *) temp_a2) + 0)))))
      {
        temp_a0 = *((s32 *) (((char *) temp_a2) + 4));
        *((s32 *) (((char *) D_80143BF8) + 0x124)) = temp_a0;
        func_800A8278_overlay_001(temp_a0);
        *((u32 **) (((char *) D_80143BF8) + 0xF6C)) = (u32 *) (__repair_phase_storage.pointer + new_var3);
        if ((*((s32 *) (((char *) __repair_phase_storage.pointer) + 8))) == (-1))
        {
        }
        else
        {
          goto loop_4;
        }
      }
    }
    __repair_phase_storage.value = (((u32) (((((*((s32 *) (((char *) D_80143BF8) + 0x124))) * 1024) * 3) / 60) * (((s32) (D_80147F40 << 0x10)) / ((s32) D_80147F44)))) >> 3) * (*((u16 *) (((char *) D_80143BF8) + 0xFC2)));
    temp_v0 = __repair_phase_storage.value >> 0x18;
    *((u32 *) (((char *) D_80143BF8) + 0x11C)) = temp_v0;
    *((s32 *) (((char *) D_80143BF8) + 0x118)) = (s32) ((__repair_phase_storage.value >> new_var3) & 0xFFFF);
    new_var2 = ((s32) temp_v0) >> 1;
    *((s32 *) (((char *) D_80143BF8) + 0x120)) = (s32) new_var2;
  }
}

