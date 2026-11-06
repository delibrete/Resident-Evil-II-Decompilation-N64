s32 func_80004CFC();
extern s32 D_8010B69C;
extern char D_80171C34_overlay_007[];
extern u32 D_801722C8_overlay_007;
extern s32 D_801722CC_overlay_007;
s32 func_801712F8_overlay_007(u32 arg0)
{
  char *var_s0;
  volatile int temp_v1;
  s32 var_a1;
  u32 var_s1;
  u32 var_v1;
  var_v1 = 0;
  var_s1 = 0;
  var_s0 = &D_80171C34_overlay_007;
  loop_1:
  if ((arg0 >= var_v1) && (arg0 < ((u32) (var_v1 + (*((s32 *) (((char *) var_s0) + 4)))))))
  {
    if (D_801722C8_overlay_007 != var_s1)
    {
      temp_v1 = *((s32 *) (((char *) var_s0) + 8));
      if (temp_v1 != 2)
      {
        var_a1 = D_8010B69C;
        if (temp_v1 != 0)
        {
          var_a1 += 0x17700;
        }
        D_801722CC_overlay_007 = var_a1;
        func_80004CFC(*((s32 *) (((char *) var_s0) + 0)), var_a1, 0, 0);
        D_801722C8_overlay_007 = var_s1;
      }
    }
    return *((s32 *) (((char *) var_s0) + 8));
  }

  var_s1 += 1;
  var_v1 += *((s32 *) (((char *) var_s0) + 4));
  var_s0 += 0xC;
  if (var_s1 >= 9U)
  {
    return -1;
  }
  goto loop_1;
}

