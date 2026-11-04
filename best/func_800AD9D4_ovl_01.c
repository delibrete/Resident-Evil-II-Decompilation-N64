void *func_800AB3DC_overlay_001();
extern char D_800AE0F4_ovl_01[];
extern s16 D_8014E0A0;
extern void *D_8014E0BC;
extern void *D_8014E0C0;
extern s32 D_8014E10C;
extern char D_8014E110[];
typedef struct { int field_0; int field_4; int field_8; int field_C; int field_10; int field_14; unsigned char field_18; } __repair_record_arg1;
typedef struct { unsigned char pad[12]; int value; } __repair_field_C;
s32 func_800AD9D4_ovl_01(s16 arg0, void *arg1)
{
  int __repair_literal;
  char *var_s0;
  s32 var_s1;
  void *temp_v0;
  void *temp_v1;
  var_s1 = 0;
  D_8014E0A0 = arg0;
  __repair_literal = 0;
  if ((D_8014E10C - 1) > (__repair_literal - 1))
  {
    var_s0 = &D_8014E110;
    loop_2:
    temp_v0 = func_800AB3DC_overlay_001(&D_8014E0A0, *((s32 *) (((char *) var_s0) + 0)), *((u16 *) (((char *) var_s0) + 8)), 0x1C, &D_800AE0F4_ovl_01);

    D_8014E0BC = temp_v0;
    if (temp_v0 != NULL)
    {
      ((__repair_record_arg1*)arg1)->field_0 = (s32) (((__repair_field_C *)temp_v0)->value);
      temp_v1 = temp_v0 + 0xC;
      ((__repair_record_arg1*)arg1)->field_8 = 0;
      ((__repair_record_arg1*)arg1)->field_4 = (s32) (*((s32 *) (((char *) temp_v0) + 8)));
      ((__repair_record_arg1*)arg1)->field_10 = (s32) (*((s32 *) (((char *) temp_v1) + 8)));
      ((__repair_record_arg1*)arg1)->field_C = (s32) ((*((s32 *) (((char *) temp_v1) + 4))) & 0xFFFFFF);
      D_8014E0C0 = temp_v1;
      ((__repair_record_arg1*)arg1)->field_14 = (s32) (((__repair_field_C *)temp_v1)->value);
      ((__repair_record_arg1*)arg1)->field_18 = (u8) (*((s32 *) (((char *) temp_v1) + 4)));
      return 0;
    }
    var_s1 += 1;
    var_s0 += 0xC;
    if (var_s1 >= D_8014E10C)
    {
      goto block_5;
    }
    goto loop_2;
  }
  block_5:
  return -1;

}

