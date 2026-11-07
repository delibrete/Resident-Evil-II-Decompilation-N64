s32 func_80033634_ovl_01(void);
s32 func_801672F4_ovl_30(void *, u8, s32);
extern u8 D_80167D30_overlay_030[];
void func_80165518_ovl_30(void *arg0)
{
  union 
  {
    u8 *pointer;
    s32 value;
  } __repair_phase_storage = {(u8 *) arg0};
  u8 t = __repair_phase_storage.pointer[0x26e];
  s32 flag = ((t % 3) & 0xff) != 0;
  u32 i = 0;
  s32 mode = __repair_phase_storage.pointer[4];
  __repair_phase_storage.value = 0xff;
  __repair_phase_storage.value = (((t % 3) & __repair_phase_storage.value) != 0) * 4;
  if (mode == 2)
  {
    do
    {
      i++;
      flag = D_80167D30_overlay_030[__repair_phase_storage.value + (func_80033634_ovl_01() & 7)];
      func_801672F4_ovl_30(arg0, flag, 4);
    }
    while (i < 3);
  }
  else
  {
    do
    {
      func_801672F4_ovl_30(arg0, D_80167D30_overlay_030[__repair_phase_storage.value + (func_80033634_ovl_01() & 7)], 5);
      i++;
    }
    while (i < 4);
  }
}

