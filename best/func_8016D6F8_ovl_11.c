s32 func_80033634_ovl_01(void);
void func_800377B0_ovl_01(s32, s16, void *, u16 *);
void func_8004251C_ovl_01(void *, void *, void *);
void func_8004279C_ovl_01(void *, u16 *, u16 *);
extern u8 D_800E8FC8_ovl_01[];
typedef struct 
{
  u16 x;
  u16 y;
  u16 z;
} V3;
void func_8016D6F8_ovl_11(void *arg0)
{
  u16 *new_var;
  u8 *p = arg0;
  u8 *obj = *((u8 **) (p + 0x234));
  u16 in[3];
  V3 out;
  u16 new_var2;
  s32 r;
  s32 id;
s32 __repair_phase_id;
  func_8004251C_ovl_01(p + 0x14, obj + 8, obj + 0x38);
  new_var2 = *((u16 *) (obj + 0x56));
  in[0] = *((u16 *) (obj + 0x4E));
  in[1] = *((u16 *) (p + 0x1A8));
  in[2] = new_var2;
  out.x = 0x12C;
  out.y = 0;
  out.z = 0;
  func_8004279C_ovl_01(p + 0x14, &out.x, &out.x);
  out.x += in[0];
  out.y += in[1];
  out.z += in[2];
  new_var = (u16 *) (p + 0x66);
  id = ((func_80033634_ovl_01() & 255) << 2) + 0xC00;
  id |= 0x1A000000;
  r = func_80033634_ovl_01();
  func_800377B0_ovl_01(id, (*new_var) - ((r & 255) * 4), D_800E8FC8_ovl_01, (u16 *) (&out));
  id = ((func_80033634_ovl_01() & 255) << 2) + 0xC00;
  id |= 0x1A000000;
  r = func_80033634_ovl_01();
  func_800377B0_ovl_01(id, (*new_var) - (((r & 255) * 4) - 0x400), D_800E8FC8_ovl_01, (u16 *) (&out));
  id = ((func_80033634_ovl_01() & 255) << 2) + 0xC00;
  id |= 0x1A000000;
  r = func_80033634_ovl_01();
  func_800377B0_ovl_01(id, (*new_var) - (((r & 255) * 4) - 0x800), D_800E8FC8_ovl_01, in);
  __repair_phase_id = ((func_80033634_ovl_01() & 255) << 2) + 0xC00;
  __repair_phase_id |= 0x1A000000;
  r = func_80033634_ovl_01();
  func_800377B0_ovl_01(__repair_phase_id, (*new_var) - (((r & 255) * 4) - 0xC00), D_800E8FC8_ovl_01, in);
}

