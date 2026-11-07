s32 func_80004370(void *arg0, void *arg1, s32 arg2)
{
  char *__repair_addr;
  s32 (*fn)(s32, u32, u32);
  s32 q;
s32 __repair_phase_q;
  s32 b;
  s32 count;
  s32 status;
  
  s32 end;
  s32 start;
  s32 result;
  status = arg2;
  start = *((s32 *) (((u8 *) arg0) + 0x2C));
  q = *((s32 *) (((u8 *) arg0) + 0x30));
  b = *((s32 *) (((u8 *) arg1) + 0xC));
  if (((u32) q) < ((u32) start))
  {
    count = (*((s32 *) (((u8 *) arg0) + 0x28))) - start;
  }
  else
  {
    count = q - start;
  }
  q = *((s32 *) (((u8 *) arg1) + 0x10));
  if (((u32) q) < ((u32) count))
  {
    count = q;
  }
  if (count == 0)
  {
    goto next;
  }
  if (status == (-5))
  {
    status = 0;
  }
  __repair_addr = (char *) (((u8 *) arg1) + 0x10);
  next:
  q = *((s32 *) __repair_addr);

  *((s32 *) (((u8 *) arg1) + 0x10)) = q - count;
  *((s32 *) (((u8 *) arg1) + 0x14)) += count;
  fn = *((s32 (**)(s32, u32, u32)) (((u8 *) arg0) + 0x34));
  if (fn != 0)
  {
    result = fn(*((s32 *) (((u8 *) arg0) + 0x38)), start, count);
    *((s32 *) (((u8 *) arg0) + 0x38)) = result;
    *((s32 *) (((u8 *) arg1) + 0x30)) = result;
  }
  func_8000DE9C(b, start, count);
  end = *((s32 *) (((u8 *) arg0) + 0x28));
  start += count;
  b += count;
  if (start != end)
  {
    goto finish;
  }
  __repair_phase_q = *((s32 *) (((u8 *) arg0) + 0x30));
  start = *((s32 *) (((u8 *) arg0) + 0x24));
  if (__repair_phase_q == end)
  {
    *((s32 *) (((u8 *) arg0) + 0x30)) = start;
  }
  q = *((s32 *) (((u8 *) arg1) + 0x10));
  count = (*((s32 *) (((u8 *) arg0) + 0x30))) - start;
  if (((u32) q) < ((u32) count))
  {
    count = q;
  }
  if (count == 0)
  {
    goto second;
  }
  if (status == (-5))
  {
    status = 0;
  }
  second:
  q = *((s32 *) (((u8 *) arg1) + 0x10));

  *((s32 *) (((u8 *) arg1) + 0x10)) = q - count;
  *((s32 *) (((u8 *) arg1) + 0x14)) += count;
  fn = *((s32 (**)(s32, u32, u32)) (((u8 *) arg0) + 0x34));
  if (fn != 0)
  {
    result = fn(*((s32 *) (((u8 *) arg0) + 0x38)), start, count);
    *((s32 *) (((u8 *) arg0) + 0x38)) = result;
    *((s32 *) (((u8 *) arg1) + 0x30)) = result;
  }
  func_8000DE9C(b, start, count);
  b += count;
  start = start + count;
  finish:
  *((s32 *) (((u8 *) arg1) + 0xC)) = b;

  *((s32 *) (((u8 *) arg0) + 0x2C)) = start;
  return status;
}

