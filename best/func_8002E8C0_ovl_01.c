extern s32 D_800B7DF8_ovl_01;
extern s32 func_8002E838_ovl_01;
typedef struct { void * value; } __repair_field_0;
void func_8002E8C0_ovl_01(void *arg0)
{
  char *new_var;
  if (arg0)
  {
    ((__repair_field_0 *)arg0)->value = (void *) ((&func_8002E838_ovl_01) + 8);
    *((void **) (((char *) arg0) + 4)) = (void *) ((&func_8002E838_ovl_01) + 0x64);
    *((void **) (((char *) arg0) + 8)) = (void *) ((&func_8002E838_ovl_01) + 0x40);
    *((void **) (((char *) arg0) + 0xC)) = (void *) ((&func_8002E838_ovl_01) + 0x6C);
    *((void **) (((char *) arg0) + 0x10)) = (void *) ((&func_8002E838_ovl_01) + 0x74);
    *((s32 **) (((char *) arg0) + 0x70)) = &D_800B7DF8_ovl_01;
    *((s32 *) (((char *) arg0) + 0x68)) = 0;
    *((s32 *) (((char *) arg0) + 0x6C)) = 0;
    *((s32 *) (((char *) arg0) + 0x14)) = 0;
    *((s32 *) (((char *) arg0) + 0x74)) = 0x6D;
    new_var = ((char *) arg0) + 0x7C;
    *((s32 *) (((char *) arg0) + 0x78)) = 0;
    *((s32 *) new_var) = 0;
    *((s32 *) (((char *) arg0) + 0x80)) = 0;
  }
  else
  {
    ((__repair_field_0 *)arg0)->value = (void *) ((&func_8002E838_ovl_01) + 8);
    *((void **) (((char *) arg0) + 4)) = (void *) ((&func_8002E838_ovl_01) + 0x64);
    *((void **) (((char *) arg0) + 8)) = (void *) ((&func_8002E838_ovl_01) + 0x40);
    *((void **) (((char *) arg0) + 0xC)) = (void *) ((&func_8002E838_ovl_01) + 0x6C);
    *((void **) (((char *) arg0) + 0x10)) = (void *) ((&func_8002E838_ovl_01) + 0x74);
    *((s32 **) (((char *) arg0) + 0x70)) = &D_800B7DF8_ovl_01;
    *((s32 *) (((char *) arg0) + 0x68)) = 0;
    *((s32 *) (((char *) arg0) + 0x6C)) = 0;
    *((s32 *) (((char *) arg0) + 0x14)) = 0;
    *((s32 *) (((char *) arg0) + 0x74)) = 0x6D;
    new_var = ((char *) arg0) + 0x7C;
    *((s32 *) (((char *) arg0) + 0x78)) = 0;
    *((s32 *) new_var) = 0;
    *((s32 *) (((char *) arg0) + 0x80)) = 0;
  }
}

