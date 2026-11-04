void func_80000F50(u32 **arg0) { u32 v = **arg0; *arg0 = (u32 *)v; }
s32 func_800115B0(void) { return (*(volatile s32 *)0xA450000C) >> 31 == -1; }
extern u32 D_800128AC; extern s32 D_800C5278; extern u32 func_80005438(s32);
u32 func_80005E84(s32 a,u32 b){u32 c;if((a&65535)==65535)return b;D_800128AC=D_800C5278+0xAF800;c=func_80005438(a&65535);if(D_800128AC<c)return c;return c;}
extern s32 D_80013EC0;
s32 func_800040D4(s32 *a,s32 b){volatile s32 dummy; s32 v=*a-b;*a=v;dummy=v;return (s32)&D_80013EC0+dummy*8;}
