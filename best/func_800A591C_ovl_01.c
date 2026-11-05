typedef struct S_entry S_entry;
struct S_entry {
    u8 unk00;
    u8 pad01[0x1F];
    u16 unk20;
    u16 unk22;
    f32 unk24;
    u16 unk28;
    u8 pad2A[0x1E];
    u16 unk48;
    u8 pad4A[2];
    union { f32 f; s32 i; } unk4C;
    s32 unk50;
    union { f32 f; s32 i; } unk54;
    union { f32 f; s32 i; } unk58;
    u8 unk5C;
    u8 pad5D[0xB];
};

extern S_entry *D_80143EAC;
extern f64 D_800BA668_ovl_01;
extern f32 D_800BA670_ovl_01;

void func_800A591C_ovl_01(u16 arg0) {
    S_entry *base = D_80143EAC;
    S_entry *e = &base[arg0];
    u16 t = e->unk20;
    f32 fv = D_800BA670_ovl_01;

    e->unk5C = 0;
    e->unk50 = 0;
    e->unk58.i = 0;
    e->unk4C.i = 0;
    e->unk54.f = fv;
    e->unk00 = 1;
    e->unk48 = t;
}
