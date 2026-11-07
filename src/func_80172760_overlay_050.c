typedef struct {u8 pad0[4]; volatile u8 unk4; u8 unk5; u8 pad6[0x292]; s32 unk298;} S;
extern void (*D_801733A4_overlay_050[])(void);
void func_80172760_overlay_050(S *arg0)
{
 *((s32 *)&arg0->unk4)=arg0->unk298;
 if (arg0->unk4 == 1) D_801733A4_overlay_050[arg0->unk5]();
 else *((s32 *)&arg0->unk4)=0x01010000;
}
