s32 func_80033A0C_ovl_01(s32, s32, s32, s32, s32);
s32 func_80040E88_ovl_01(s32, s32 *);
s32 func_8004279C_ovl_01(s32 *, s16 *, s16 *);
s32 func_80089D34_ovl_01(void *, s32, s32, s32);
s32 func_80166568_overlay_033(void *, s32);
void *func_801669B4_overlay_033(s32, void *);
extern s32 D_800C7650;
extern s32 D_80167058_overlay_033;
extern s32 func_80161F68_overlay_033;
extern s32 func_80165B44_overlay_033;
extern s32 func_8016645C_overlay_033;
inline static char *inline_fn(void *arg0)
{
  return ((char *) arg0) + 0x29C;
}

void func_80161F98_ovl_33(void *arg0, s32 arg1, s32 arg2)
{
  union 
  {
    unsigned char bytes[104];
    struct 
    {
      unsigned char pad[24];
      s16 value;
    } view_sp18;
    struct 
    {
      unsigned char pad[26];
      s16 value;
    } view_sp1A;
    struct 
    {
      unsigned char pad[28];
      s16 value;
    } view_sp1C;
    struct 
    {
      unsigned char pad[32];
      s32 value;
    } view_sp20;
  } m2c_initial_frame;
  s32 *new_var;
  s32 var_s1;
  short temp_v1;
  void *temp_v0;
  void *temp_v0_3;
  void *var_v1;
  *((s32 *) (((char *) arg0) + 4)) = 0x01000000;
  *((s16 *) (((char *) arg0) + 0x1F2)) = -1;
  *((s8 *) (((char *) arg0) + 0x1ED)) = -0x7E;
  *((s8 *) (((char *) arg0) + 0x1EE)) = -0x7E;
  *((s8 *) (((char *) arg0) + 0x1EF)) = -0x7E;
  *((s16 *) (((char *) arg0) + 0x26C)) = 0;
  *((s16 *) (((char *) arg0) + 0x268)) = 0;
  *((s16 *) (((char *) arg0) + 0x264)) = 0;
  *((s8 *) (((char *) arg0) + 0x26F)) = 0;
  *((s8 *) (((char *) arg0) + 0x25C)) = 0;
  *((s8 *) (((char *) arg0) + 0x25D)) = 3;
  *((s8 *) (((char *) arg0) + 0x2B5)) = 0;
  *((s16 *) (((char *) arg0) + 0x2BC)) = 0;
  *((s8 *) (((char *) arg0) + 0x2BE)) = 0;
  *((s16 *) (((char *) arg0) + 0x2C0)) = 0;
  *((s8 *) (((char *) arg0) + 0x2BF)) = 0;
  *((s32 *) (((char *) arg0) + 0x284)) = 0;
  *((s16 *) (((char *) arg0) + 0x130)) = 0;
  *((s16 *) (((char *) arg0) + 0x134)) = -0x1F4;
  *((s16 *) (((char *) arg0) + 0x132)) = 0;
  *((s16 *) (((char *) arg0) + 0x136)) = 0x1F4;
  *((s16 *) (((char *) arg0) + 0x13A)) = 0x1F4;
  *((s16 *) (((char *) arg0) + 0x138)) = 0x1F4;
  *((s16 *) (((char *) arg0) + 0x12C)) = 0x1F4;
  *((s16 *) (((char *) arg0) + 0x12E)) = 0x1F4;
  *((s16 *) (((char *) arg0) + 0x150)) = 0;
  *((s16 *) (((char *) arg0) + 0x154)) = -0x1F4;
  *((s16 *) (((char *) arg0) + 0x152)) = 0;
  *((s16 *) (((char *) arg0) + 0x156)) = 0x4B0;
  *((s16 *) (((char *) arg0) + 0x15A)) = 0x1F4;
  *((s16 *) (((char *) arg0) + 0x158)) = 0x4B0;
  *((s32 *) (((char *) arg0) + 0)) = (s32) ((*((s32 *) (((char *) arg0) + 0))) | 8);
  *((s16 *) (((char *) arg0) + 0x14C)) = 0x4B0;
  *((s16 *) (((char *) arg0) + 0x14E)) = 0x4B0;
  *((s16 *) (((char *) arg0) + 0x176)) = 0x258;
  *((s16 *) (((char *) arg0) + 0x178)) = 0x258;
  *((s16 *) (((char *) arg0) + 0x16C)) = 0x258;
  *((s16 *) (((char *) arg0) + 0x16E)) = 0x258;
  *((s16 *) (((char *) arg0) + 0x196)) = 0x2BC;
  *((s16 *) (((char *) arg0) + 0x198)) = 0x2BC;
  *((s16 *) (((char *) arg0) + 0x18C)) = 0x2BC;
  *((s16 *) (((char *) arg0) + 0x18E)) = 0x2BC;
  *((s16 *) (((char *) arg0) + 0x170)) = 0;
  *((s16 *) (((char *) arg0) + 0x174)) = -0x1F4;
  *((s16 *) (((char *) arg0) + 0x172)) = 0;
  *((s16 *) (((char *) arg0) + 0x17A)) = 0x1F4;
  *((s16 *) (((char *) arg0) + 0x190)) = 0;
  *((s16 *) (((char *) arg0) + 0x194)) = -0x1F4;
  *((s16 *) (((char *) arg0) + 0x192)) = 0;
  *((s16 *) (((char *) arg0) + 0x19A)) = 0x1F4;
  func_80033A0C_ovl_01(arg0 + 0x208, 0, 0, 0, (*((void **) (((char *) arg0) + 0x234))) + 0x4C);
  var_v1 = (&D_800C7650) + 0xC;
  var_s1 = 3;
  if (arg0 != (*((s32 *) (((char *) var_v1) + 0x19D38))))
  {
    do
    {
      var_v1 += 4;
      var_s1 += 1;
    }
    while (arg0 != (*((s32 *) (((char *) var_v1) + 0x19D38))));
  }
  *((s8 *) (((char *) arg0) + 0x2B4)) = (s8) (var_s1 - 3);
  if ((*((u16 *) (((char *) arg0) + 0x1AA))) == 8)
  {
    *((s32 *) (((char *) arg0) + 0x284)) = 4;
    *((s16 *) (((char *) arg0) + 0x136)) = 0x320;
    *((s16 *) (((char *) arg0) + 0x138)) = 0x320;
    *((s16 *) (((char *) arg0) + 0x12C)) = 0x320;
    *((s16 *) (((char *) arg0) + 0x12E)) = 0x320;
    *((s16 *) (((char *) arg0) + 0x156)) = 0x258;
    *((s16 *) (((char *) arg0) + 0x158)) = 0x258;
    *((s16 *) (((char *) arg0) + 0x14C)) = 0x258;
    *((s16 *) (((char *) arg0) + 0x14E)) = 0x258;
    *((s16 *) (((char *) arg0) + 0x176)) = 0x258;
    *((s16 *) (((char *) arg0) + 0x178)) = 0x258;
    *((s16 *) (((char *) arg0) + 0x16C)) = 0x258;
    *((s16 *) (((char *) arg0) + 0x16E)) = 0x258;
    *((s16 *) (((char *) arg0) + 0x196)) = 0x258;
    *((s16 *) (((char *) arg0) + 0x198)) = 0x258;
    *((s16 *) (((char *) arg0) + 0x18C)) = 0x258;
    *((s16 *) (((char *) arg0) + 0x18E)) = 0x258;
    return;
  }
  *((s16 *) (((char *) arg0) + 0x28A)) = 0x320;
  *((s32 *) (((char *) arg0) + 0x1E8)) = 0;
  func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
  *((s32 **) (((char *) ((((*((u8 *) (((char *) arg0) + 8))) - 0x10) * 4) + (&D_800C7650))) + 0x18298)) = &func_80165B44_overlay_033;
  *((s32 **) (((char *) ((((*((u8 *) (((char *) arg0) + 8))) - 0x10) * 4) + (&D_800C7650))) + 0x18398)) = &func_8016645C_overlay_033;
  temp_v0 = *((void **) (((char *) arg0) + 0x234));
  *((s32 *) (((char *) arg0) + 0)) = (s32) ((*((s32 *) (((char *) arg0) + 0))) | 0xC);
  *((s16 *) (((char *) temp_v0) + 0x126)) = 0x1000;
  *((s16 *) (((char *) temp_v0) + 0x128)) = 0x1000;
  *((s16 *) (((char *) temp_v0) + 0x29E)) = 0x1000;
  *((s16 *) (((char *) temp_v0) + 0x2A0)) = 0x1000;
  *((s16 *) (((char *) temp_v0) + 0x416)) = 0x1000;
  *((s16 *) (((char *) temp_v0) + 0x418)) = 0x1000;
  *((s16 *) (((char *) temp_v0) + 0x58E)) = 0x1000;
  *((s16 *) (((char *) temp_v0) + 0x590)) = 0x1000;
  *((s32 *) (((char *) temp_v0) + 0xCC)) = 0x808080FF;
  *((s16 *) (((char *) temp_v0) + 0x124)) = 0;
  *((s16 *) inline_fn(temp_v0)) = 0;
  *((s16 *) (((char *) temp_v0) + 0x414)) = 0;
  *((s16 *) (((char *) temp_v0) + 0x58C)) = 0;
  *((s32 *) (((char *) temp_v0) + 0)) = (s32) ((*((s32 *) (((char *) temp_v0) + 0))) | 0x4400);
  *((s32 *) (((char *) temp_v0) + 0x178)) = (s32) ((*((s32 *) (((char *) temp_v0) + 0x178))) | 0x4800);
  new_var = &m2c_initial_frame.view_sp20.value;
  *((s32 *) (((char *) temp_v0) + 0x2F0)) = (s32) ((*((s32 *) (((char *) temp_v0) + 0x2F0))) | 0x4800);
  *((s32 *) (((char *) temp_v0) + 0x468)) = (s32) ((*((s32 *) (((char *) temp_v0) + 0x468))) | 0x4800);
  if ((*((s32 *) (((char *) arg0) + 0x2C))) == 0)
  {
    *((s32 *) (((char *) (&D_800C7650)) + 0x18284)) = func_80166568_overlay_033(arg0, *((s32 *) (((char *) (&D_800C7650)) + 0x18284)));
  }
  *((s32 **) (((char *) arg0) + 0x2A4)) = &func_80161F68_overlay_033;
  if (!((*((u16 *) (((char *) arg0) + 0x1AA))) & 0xFFF))
  {
    temp_v0 = (var_s1 * 8) + (&D_80167058_overlay_033);
    m2c_initial_frame.view_sp18.value = M2C_UNALIGNED32(*((s32 *) (((char *) temp_v0) + 0)));
    m2c_initial_frame.view_sp1C.value = M2C_UNALIGNED32(*((s32 *) (((char *) temp_v0) + 4)));
    func_80040E88_ovl_01((*((void **) (((char *) (&D_800C7650)) + 0x19D40))) + 0x64, new_var);
    do
    {
      func_8004279C_ovl_01(&m2c_initial_frame.view_sp20.value, &m2c_initial_frame.view_sp18.value, &m2c_initial_frame.view_sp18.value);
    }
    while (0);
    *((s32 *) (((char *) arg0) + 0x28)) = (s32) ((*((s32 *) (((char *) (*((void **) (((char *) (&D_800C7650)) + 0x19D40)))) + 0x28))) + m2c_initial_frame.view_sp18.value);
    *((s32 *) (((char *) arg0) + 0x2C)) = (s32) ((*((s32 *) (((char *) (*((void **) (((char *) (&D_800C7650)) + 0x19D40)))) + 0x2C))) + m2c_initial_frame.view_sp1A.value);
    *((s32 *) (((char *) arg0) + 0x30)) = (s32) ((*((s32 *) (((char *) (*((void **) (((char *) (&D_800C7650)) + 0x19D40)))) + 0x30))) + m2c_initial_frame.view_sp1C.value);
  }
  *((s8 *) (((char *) arg0) + 5)) = 8;
  temp_v0_3 = func_801669B4_overlay_033(0x34, arg0);
  *((s32 *) (((char *) temp_v0_3) + 0)) = 0;
  *((s16 *) (((char *) temp_v0_3) + 0x1AA)) = 8;
  func_80161F98_ovl_33(temp_v0_3, arg1, arg2);
  temp_v1 = (*((u16 *) (((char *) arg0) + 0x1AA))) & 0xFFF;
  if (temp_v1 == 1)
  {
    *((s8 *) (((char *) arg0) + 5)) = 0xF;
    *((s8 *) (((char *) arg0) + 0x2B5)) = temp_v1;
  }
}

