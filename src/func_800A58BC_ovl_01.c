extern f64 D_800BA668_ovl_01;
extern s32 D_80143EAC;
void func_800A58BC_ovl_01(s32 arg0, void *arg1)
{
  s32 new_var;
  void *temp_v0;
  new_var = D_80143EAC;
  temp_v0 = (arg0 * 0x68) + new_var;
  *((u16 *) (((char *) temp_v0) + 0x20)) = (u16) (*((u16 *) (((char *) arg1) + 0)));
  *((u16 *) (((char *) temp_v0) + 0x22)) = (u16) (*((u16 *) (((char *) arg1) + 2)));
  *((f32 *) (((char *) temp_v0) + 0x24)) = (f32) (((f64) ((f32) (*((u16 *) (((char *) arg1) + 4))))) * D_800BA668_ovl_01);
  *((u16 *) (((char *) temp_v0) + 0x28)) = (u16) (*((u16 *) (((char *) arg1) + 6)));
}

