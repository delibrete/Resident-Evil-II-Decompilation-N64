s32 func_8000CD40(s32);
s32 func_8008AF60_ovl_01(s32);
s32 func_8008B028_ovl_01(s32 arg0) {
    s32 temp_s0;
    s32 temp_s1;
    s32 var_s0;
    var_s0 = arg0;
    temp_s1 = func_8000CD40(1);
    if (var_s0 == 0) {
        var_s0 = 1;
    }
    temp_s0 = func_8008AF60_ovl_01(var_s0);
    func_8000CD40(temp_s1);
    return temp_s0;
}
