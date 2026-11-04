extern u16 D_8011377A_ovl_01;
extern u16 D_8011377E_ovl_01;
extern s32 D_801314F0_ovl_01;
void func_80042AC0_ovl_01(void)
{
  s16 temp_a0;
  s16 temp_v1;
 do { *((s16 *) (((char *) (&D_801314F0_ovl_01)) + 0xA4)) = 0x1FF; *((s16 *) (((char *) (&D_801314F0_ovl_01)) + 0xAC)) = 0x1FF; *((s16 *) (((char *) (&D_801314F0_ovl_01)) + 0xA6)) = 0; } while (0);
  *((s16 *) (((char *) (&D_801314F0_ovl_01)) + 0xAE)) = 0;
  temp_v1 = D_8011377A_ovl_01 * 2;
  temp_a0 = D_8011377E_ovl_01 * 2;
  *((s16 *) (((char *) (&D_801314F0_ovl_01)) + 0xA0)) = temp_v1;
  *((s16 *) (((char *) (&D_801314F0_ovl_01)) + 0xA2)) = temp_a0;
  *((s16 *) (((char *) (&D_801314F0_ovl_01)) + 0xA8)) = temp_v1;
  *((s16 *) (((char *) (&D_801314F0_ovl_01)) + 0xAA)) = temp_a0;
}
