extern s32 func_800362C0_ovl_01(void *, s32, s32 *);
extern s32 func_80036764_ovl_01(void *, s32);
extern s32 func_80040E88_ovl_01(s32, s32);
extern s32 func_8004251C_ovl_01(s32, s32, s32);
extern s32 D_8016729C_overlay_032, D_80167308_overlay_032;
#define FIELD(x,t,o) (*(t *)((s8 *)(x)+(o)))
void func_80165534_ovl_32(void *arg0) {
char __repair_stack_padding[32];
 s32 temp_s0, temp_s1, temp_s1_2;
 temp_s1=(s32)arg0+0x14;
 temp_s0=FIELD(arg0,s32 *,0x234);
 func_80040E88_ovl_01((s32)arg0+0x64,temp_s1);
 temp_s1_2=temp_s0+0x38;
 func_8004251C_ovl_01(temp_s1,temp_s0+8,temp_s1_2);
 func_8004251C_ovl_01(temp_s1_2,temp_s0+0x180,temp_s0+0x1b0);
 func_8004251C_ovl_01(temp_s1_2,temp_s0+0x2f8,temp_s0+0x328);
 func_8004251C_ovl_01(temp_s1_2,temp_s0+0x470,temp_s0+0x4a0);
 func_800362C0_ovl_01(arg0,temp_s0,&D_8016729C_overlay_032);
 func_800362C0_ovl_01(arg0,temp_s0,&D_80167308_overlay_032);
 func_80036764_ovl_01(arg0,temp_s0);
}
