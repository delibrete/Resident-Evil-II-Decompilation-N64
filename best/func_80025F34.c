typedef struct S_D800C762C { s32 unk0; s32 unk4; s32 unk8; s32 unkC; s32 unk10; s32 unk14; } S_D800C762C;
typedef struct S_D800C7618 { s32 unk0; void *unk4; s32 unk8; s32 unkC; s32 unk10; } S_D800C7618;
extern s32 D_800C5268_overlay_001;
extern S_D800C762C D_800C762C_overlay_001;
extern S_D800C7618 D_800C7618_overlay_001;
void func_800879D0_overlay_001(void *arg0, void *arg1);

void func_80025F34(void) {
    D_800C762C_overlay_001.unk14 = 0;
    D_800C7618_overlay_001.unk0 = 3;
    D_800C7618_overlay_001.unk4 = &D_800C762C_overlay_001;
    D_800C762C_overlay_001.unk0 = D_800C5268_overlay_001;
    func_800879D0_overlay_001(&D_800C7618_overlay_001, &D_800C762C_overlay_001);
}
