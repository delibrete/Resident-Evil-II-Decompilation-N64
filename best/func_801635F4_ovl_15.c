s32 func_801635F4_ovl_15(s32 arg0, s16 arg1, s32 arg2) {
 s32 v1;
 s32 t0;
 s32 v0;
 if (arg1 == 0) return arg2;
 v1 = arg0 - arg1;
 arg1 = v1 + 1;
 t0 = arg2 * arg1;
 t0 = t0 * arg1;
 v0 = arg0 * arg0;
 arg0 = t0 / v0;
 t0 = arg2 * v1;
 v1 = t0 * v1;
 v0 = v1 / v0;
 return arg0 - v0;
}
