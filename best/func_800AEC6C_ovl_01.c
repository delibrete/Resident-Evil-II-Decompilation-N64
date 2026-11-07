extern u8 D_801479F8;
extern s8 D_801587D8;
extern s8 D_801587D9;
extern s16 D_801587DA;
extern s8 D_801587DC;
extern char D_801587E0[];
extern s8 D_80158860;
extern s8 D_801588E0;
extern s8 D_801589E0;
void func_800AEC6C_ovl_01(void)
{
  int __repair_literal;
  int new_var;
  char *var_v1;
  s8 *var_v0;
  s8 temp_v0;
  u32 var_a2;
  u8 var_a0;
  union 
  {
    void *pointer;
    u32 value;
  } __repair_phase_storage;
  var_a0 = 0;
  if (D_801479F8 != 0)
  {
    do
    {
      __repair_phase_storage.pointer = (var_a0 * 4) + (&D_80158860);
      temp_v0 = var_a0 - 1;
      do
      {
        var_a0 += 1;
      }
      while (0);
      *((s8 *) (((char *) (&__repair_phase_storage)->pointer) + 0)) = temp_v0;
      *((u8 *) (((char *) __repair_phase_storage.pointer) + 1)) = var_a0;
      *((s16 *) (((char *) __repair_phase_storage.pointer) + 2)) = 1;
    }
    while (var_a0 < ((u8) D_801479F8));
  }
  var_a2 = 0;
  D_80158860 = 0xFF;
  new_var = D_801479F8 & 0xFF;
  __repair_literal = 4;
  *((u8 *) (((char *) (((D_801479F8 - 1) * __repair_literal) + (&D_80158860))) + 1)) = 0xFF;
  D_801589E0 = 0;
  __repair_phase_storage.value = new_var;
  D_801587D9 = D_801479F8 - 1;
  if (__repair_phase_storage.value != 0)
  {
    var_v1 = &D_801587E0;
    do
    {
      *((s16 *) (((char *) var_v1) + 2)) = 0;
      var_a2 += 1;
      var_v1 += 4;
    }
    while (var_a2 < __repair_phase_storage.value);
    var_a2 = 0;
  }
  var_v0 = &D_801588E0;
  do
  {
    *var_v0 = 0xFF;
    var_a2 += 1;
    var_v0 = var_a2 + (&D_801588E0);
  }
  while (var_a2 < 0x100U);
  D_801587DA = 0xFFFF;
  D_801587DC = 0;
  D_801587D8 = 0;
}

