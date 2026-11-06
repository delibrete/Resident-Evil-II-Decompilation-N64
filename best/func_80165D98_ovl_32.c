static inline static s32 __repair_inline(s32 a)
{
  return a;
}

static inline char *inline_fn(void *arg0)
{
  return (char *) arg0;
}

void func_80165D98_ovl_32(void *arg0, void *arg1)
{
  s32 v1;
  
  s32 __repair_v1_2;
  s32 v0;
  union { void * pointer; s32 value; } __repair_phase_storage;
  s16 *new_var;
  v1 = *((u8 *) (inline_fn(arg0) + 0x2b5));
  if (v1 == 0)
  {
    *((u8 *) (inline_fn(arg0) + 0x2b5)) = 1;
    *((u16 *) (inline_fn(arg0) + 0x2b8)) = 0x24;
    *((u8 *) (inline_fn(arg0) + 0x2b7)) = 10;
    *((u8 *) (((char *) arg0) + 0x2bc)) = 10;
    *((s16 *) (((char *) arg0) + 0x2ba)) = 1;
  }
  else
    if (v1 != 1)
  {
    if (arg0)
    {
      return;
    }
    else
    {
      return;
    }
  }
  __repair_phase_storage.pointer = *((void **) (((char *) arg1) + 0x120));
  *((u16 *) (((char *) __repair_phase_storage.pointer) + 0x10)) += *((u16 *) (((char *) arg0) + 0x2b8));
  v0 = __repair_inline(*((s16 *) (((char *) arg0) + 0x2ba)));
  __repair_phase_storage.value = *((u16 *) (((char *) arg0) + 0x2b8));
  *((u8 *) (inline_fn(arg0) + 0x2b7)) -= 1;
  __repair_phase_storage.value -= v0 * 4;
  v0 = *((u8 *) (inline_fn(arg0) + 0x2b7));
  *((u16 *) (inline_fn(arg0) + 0x2b8)) = __repair_phase_storage.value;
  if (((s8) v0) != (-1))
  {
    v0 += 0;
    goto done;
  }
  __repair_v1_2 = *((u8 *) (((char *) arg0) + 0x2bc));
  v0 = __repair_v1_2 - 1;
  *((u8 *) (((char *) arg0) + 0x2bc)) = v0;
  new_var = &(*((s16 *) (((char *) arg0) + 0x2ba)));
  v0 = *new_var;
  *((u8 *) (inline_fn(arg0) + 0x2b7)) = __repair_v1_2;
  __repair_phase_storage.value = *((s8 *) (((char *) arg0) + 0x2b7));
  ;
  *((s16 *) (((char *) arg0) + 0x2ba)) = -v0;
  if (__repair_phase_storage.value == 0)
  {
    *((u8 *) (((char *) arg0) + 0x2b4)) = 0;
    *((u8 *) (inline_fn(arg0) + 0x2b5)) = 0;
  }
  done:
  ;

  ;
  ;
}

