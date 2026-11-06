s32 func_80025A60_ovl_01(s32);
s32 func_80025B1C_ovl_01(s32, s32, void *, s32);
s32 func_80042AC0_ovl_01();
extern u32 D_800C4E54_ovl_01;
extern s32 D_800C4F00_ovl_01;
extern s32 D_800C4F20_ovl_01;
extern s32 D_800C5680_ovl_01;
extern s32 D_800C75E0_ovl_01;
extern s32 D_800C75EC_ovl_01;
extern s32 D_800C75F0_ovl_01;
extern s32 D_800C75F4_ovl_01;
extern s32 D_800C75F8_ovl_01;
extern s32 D_800C75FC_ovl_01;
extern s32 D_800C7600_ovl_01;
extern s32 D_800C7604_ovl_01;
extern s32 D_800C7608_ovl_01;
extern s32 D_800C760C_ovl_01;
extern s32 D_800C7610_ovl_01;
extern s32 D_80113778_ovl_01;
extern s32 D_8011377C_ovl_01;
extern s32 D_80113790_ovl_01;
extern s32 D_80113794_ovl_01;
void func_80025BA8_ovl_01(s32 arg0)
{
  void *new_var2;
  s32 var_a1;
  short new_var;
  s32 var_a3;
  u32 temp_lo;
  s32 new_var3;
  void *temp_v0;
  void *var_a2;
  var_a3 = arg0;
  var_a2 = ((u8 *) (&D_800C4F20_ovl_01)) + (((var_a3 << 2) + (var_a3 << 3)) + (var_a3 << 4));
  new_var2 = var_a2;
  temp_lo = D_80113790_ovl_01 * D_80113794_ovl_01;
  var_a1 = ((*((s32 *) (((char *) new_var2) + 0))) - (*((s32 *) (((char *) new_var2) + 12)))) - (*((s32 *) (((char *) new_var2) + 8)));
  new_var3 = *((s32 *) (((char *) var_a2) + 16));
  if (temp_lo < ((u32) (var_a1 * (((*((s32 *) (((char *) new_var2) + 4))) - (*((s32 *) (((char *) new_var2) + 20)))) - (*((s32 *) (((char *) new_var2) + 16)))))))
  {
    new_var = temp_lo;
    do
    {
      var_a2 = ((u8 *) var_a2) - 40;
      var_a1 = ((*((s32 *) (((char *) var_a2) + 0))) - (*((s32 *) (((char *) var_a2) + 12)))) - (*((s32 *) (((char *) var_a2) + 8)));
      var_a3 = var_a3 - 1;
    }
    while (new_var < ((u32) (var_a1 * (((*((s32 *) (((char *) new_var2) + 4))) - (*((s32 *) (((char *) var_a2) + 20)))) - new_var3))));
  }
  D_800C75E0_ovl_01 = var_a3;
  do
  {
    func_80025B1C_ovl_01(var_a3, var_a1, var_a2, var_a3);
  }
  while (0);
  do
  {
    func_80042AC0_ovl_01();
  }
  while (0);
  D_800C4F00_ovl_01 = 1;
  D_800C4E54_ovl_01 = ((u32) ((D_80113778_ovl_01 * D_8011377C_ovl_01) + 511)) >> 9;
  do
  {
    func_80025A60_ovl_01(D_80113778_ovl_01);
  }
  while (0);
  D_800C5680_ovl_01 = var_a3;
  temp_v0 = ((u8 *) (&D_800C4F20_ovl_01)) + (var_a3 * 40);
  D_800C75EC_ovl_01 = *((s32 *) (((char *) temp_v0) + 0));
  D_800C75F0_ovl_01 = *((s32 *) (((char *) temp_v0) + 4));
  D_800C75F4_ovl_01 = *((s32 *) (((char *) temp_v0) + 8));
  D_800C75F8_ovl_01 = *((s32 *) (((char *) temp_v0) + 12));
  D_800C75FC_ovl_01 = *((s32 *) (((char *) temp_v0) + 16));
  D_800C7600_ovl_01 = *((s32 *) (((char *) temp_v0) + 20));
  D_800C7604_ovl_01 = *((s32 *) (((char *) temp_v0) + 24));
  D_800C7608_ovl_01 = *((s32 *) (((char *) temp_v0) + 28));
  D_800C760C_ovl_01 = *((s32 *) (((char *) temp_v0) + 32));
  D_800C7610_ovl_01 = *((s32 *) (((char *) temp_v0) + 36));
}

