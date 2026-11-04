extern void *D_8012BA80_ovl_01;
extern u8 D_80129FDC_ovl_01[];
extern u8 D_80129E34_ovl_01[];
extern u8 D_80129FD4_ovl_01[];
extern u8 D_8013A290[];
void func_8000CB60(void *, s32, s32);
void func_800879D0_ovl_01(void *);
s32 func_8000AC00(void *, void *, s32);
typedef struct S_80088528_arg0
{
  u16 unk_00;
  s16 unk_02;
  s32 unk_04;
} S_80088528_arg0;
typedef struct S_8002A060
{
  s32 unk_00;
  void *unk_04;
  s32 unk_08;
} S_8002A060;
typedef struct S_80029FE0
{
  s32 unk_00;
  void *unk_04;
} S_80029FE0;
typedef struct S_8002A000
{
  s32 unk_00;
  s32 unk_04;
  s32 unk_08;
  s32 unk_0C;
  s32 unk_10;
  s32 unk_14;
} S_8002A000;
typedef struct S_80087D74_arg0
{
  s32 unk_00;
  s32 *unk_04;
  s32 unk_08;
} S_80087D74_arg0;
extern S_8002A060 D_8012A060_ovl_01[];
extern S_80029FE0 D_80129FE0_ovl_01[];
extern S_8002A000 D_8012A000_ovl_01[];
void func_80088528_ovl_01(S_80088528_arg0 *arg0, s32 arg1);
void func_800882B8_ovl_01(s32 arg0);
void func_80088238_ovl_01(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4)
{
  s32 new_var;
 do { if (D_80129FD4_ovl_01[(unsigned short) arg0] == 2) { S_8002A000 *p = &D_8012A000_ovl_01[arg0]; S_80029FE0 *q; p->unk_00 = arg0; p->unk_14 = 0; p->unk_04 = arg1; p->unk_14 = 0; p->unk_08 = arg2; p->unk_0C = (new_var = arg3); p->unk_10 = arg4; q = &D_80129FE0_ovl_01[arg0]; q->unk_00 = 3; q->unk_04 = p; func_800879D0_ovl_01(q); } } while (0);
}

void func_80087D74_ovl_01(S_80087D74_arg0 *arg0);
