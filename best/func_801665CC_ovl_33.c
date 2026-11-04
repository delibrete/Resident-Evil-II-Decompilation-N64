typedef s32 (*Fn)(void);
extern Fn D_80167210_ovl_33[];
s32 func_80040E88_ovl_01(s32, s32);
s32 func_80036038_ovl_01(s32, s32, s32, s32);
s32 func_800362C0_ovl_01(s32, s32, s32);
s32 func_80036764_ovl_01(s32, s32);
extern s32 D_801672C0_ovl_33[];
extern s32 D_80167348_ovl_33[];
extern s32 D_801673C0_ovl_33[];
extern u8 D_801314F0_ovl_01[];
void func_80165A58_ovl_33(u8 *p);
void func_80166518_ovl_33(s32 a0, s32 p);
void func_80166568_ovl_33(s32 p, s32 a1);
void func_801665CC_ovl_33(s32 p)
{
  s32 s = *((s32 *) (p + 0x234));
  do
  {
    func_800362C0_ovl_01(p, s, (s32) D_801673C0_ovl_33);
    func_800362C0_ovl_01(s, s, (s32) D_801672C0_ovl_33);
  }
  while (0);
  func_800362C0_ovl_01(p, s, (s32) D_80167348_ovl_33);
}

